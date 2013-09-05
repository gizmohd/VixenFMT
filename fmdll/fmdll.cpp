// fmdll.cpp : Defines the exported functions for the DLL application.
//

#include <time.h>
#include <windows.h>
#include <stdio.h>

extern "C"
{

int __declspec(dllexport) getDouble( double* pval)
{
	printf( "getDouble: got %ld \n", *pval);
	*pval = 3.14;
	return 42;
}

static char msgbuf[1024] = "uninitialized";

int __declspec(dllexport) setMessage( char* msg)
{
	if( msg == NULL)
	{
		printf( "setMessage: got null \n");
		return -42;
	}

	printf( "setMessage: got: ");
	for( int i=0; i<32; i++)
	{
		char c = msg[i];
		printf( "%02x ", c);
		if( c == 0)
			break;
	}
	printf( "\n'%s'\n", msg);

	memset( msgbuf, 0, sizeof(msgbuf));
	strncpy( msgbuf, msg, sizeof(msgbuf)-1);
	return 42;
}

int __declspec(dllexport) getMessage( char* msg)
{
	printf( "getMessage: msgbuf '%s' \n", msgbuf);
	strcpy( msg, msgbuf);
	return 42;
}

};



#if defined(_MSC_VER) || defined(_MSC_EXTENSIONS)
  #define DELTA_EPOCH_IN_MICROSECS  11644473600000000Ui64
#else
  #define DELTA_EPOCH_IN_MICROSECS  11644473600000000ULL
#endif
 
struct timezone 
{
  int  tz_minuteswest; /* minutes W of Greenwich */
  int  tz_dsttime;     /* type of dst correction */
};
 
int gettimeofday(struct timeval *tv, struct timezone *tz)
{
  FILETIME ft;
  unsigned __int64 tmpres = 0;
  static int tzflag;
 
  if (NULL != tv)
  {
    GetSystemTimeAsFileTime(&ft);
 
    tmpres |= ft.dwHighDateTime;
    tmpres <<= 32;
    tmpres |= ft.dwLowDateTime;
 
    /*converting file time to unix epoch*/
    tmpres -= DELTA_EPOCH_IN_MICROSECS; 
    tmpres /= 10;  /*convert into microseconds*/
    tv->tv_sec = (long)(tmpres / 1000000UL);
    tv->tv_usec = (long)(tmpres % 1000000UL);
  }
 
  if (NULL != tz)
  {
    if (!tzflag)
    {
      _tzset();
      tzflag++;
    }
    tz->tz_minuteswest = _timezone / 60;
    tz->tz_dsttime = _daylight;
  }
 
  return 0;
}






