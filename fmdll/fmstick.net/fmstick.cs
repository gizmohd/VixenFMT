using System;
using System.Collections.Generic;

using System.Text;
using System.Runtime.InteropServices;

namespace fmstick.net
{

	unsafe public class fmstick
	{

		enum RequestEnum
		{
			RequestNone = 0,
			RequestCpuId,
			RequestSi4711Reset,     	//reset
			RequestSi4711Access,    	//low level access
			RequestSi4711GetProp,   	//medium level get prop
			RequestSi4711SetProp,   	//medium level set prop
			RequestSi4711PowerStatus,
			RequestSi4711PowerUp,   	//high level power up
			RequestSi4711PowerDown, 	//high level power down
			RequestSi4711AudioEnable,       //this MUST BE!!! called after setting config to enable audio.
			RequestSi4711AudioDisable,
			RequestEepromSectionRead,
			RequestEepromSectionWrite,
			RequestSi4711AsqStatus,
			RequestSi4711TuneStatus,
			RequestUnknown
		};

		enum SI4711Enum
		{
			SI4711_OK = 0,
			SI4711_TIMEOUT,
			SI4711_COMM_ERR,
			SI4711_BAD_ARG,
			SI4711_NOCTS,
			SI4711_ERROR_UNKNOWN
		};

		enum RtpluEnum
		{
			RTPLUS_DUMMY_CLASS = 0,

			RTPLUS_ITEM_TITLE,
			RTPLUS_ITEM_ALBUM,
			RTPLUS_ITEM_TRACKNUMBER,
			RTPLUS_ITEM_ARTIST,
			RTPLUS_ITEM_COMPOSITION,
			RTPLUS_ITEM_MOVEMENT,
			RTPLUS_ITEM_CONDUCTOR,
			RTPLUS_ITEM_COMPOSER,
			RTPLUS_ITEM_BAND,
			RTPLUS_ITEM_COMMENT,
			RTPLUS_ITEM_GENRE,

			RTPLUS_INFO_NEWS,
			RTPLUS_INFO_NEWS_LOCAL,
			RTPLUS_INFO_STOCKMARKET,
			RTPLUS_INFO_SPORT,
			RTPLUS_INFO_LOTTERY,
			RTPLUS_INFO_HOROSCOPE,
			RTPLUS_INFO_DAILY_DIVERSION,
			RTPLUS_INFO_HEALTH,
			RTPLUS_INFO_EVENT,
			RTPLUS_INFO_SZENE,
			RTPLUS_INFO_CINEMA,
			RTPLUS_INFO_STUPIDITY_MACHINE,
			RTPLUS_INFO_DATE_TIME,
			RTPLUS_INFO_WEATHER,
			RTPLUS_INFO_TRAFFIC,
			RTPLUS_INFO_ALARM,
			RTPLUS_INFO_ADVERTISEMENT,
			RTPLUS_INFO_URL,
			RTPLUS_INFO_OTHER,

			RTPLUS_STATIONNAME_SHORT,
			RTPLUS_STATIONNAME_LONG,
			/*  Category Code RT+ Class:
				0
				1 ITEM.TITLE
				2 ITEM.ALBUM
				3 ITEM.TRACKNUMBER
				4 ITEM.ARTIST
				5 ITEM.COMPOSITION
				6 ITEM.MOVEMENT
				7 ITEM.CONDUCTOR
				8 ITEM.COMPOSER
				9 ITEM.BAND
				10 ITEM.COMMENT
				11 ITEM.GENRE
				12 INFO.NEWS
				13 INFO.NEWS.LOCAL
				14 INFO.STOCKMARKET
				15 INFO.SPORT
				16 INFO.LOTTERY
				17 INFO.HOROSCOPE
				18 INFO.DAILY_DIVERSION
				19 INFO.HEALTH
				20 INFO.EVENT
				21 INFO.SZENE
				22 INFO.CINEMA
				23 INFO.STUPIDITY_MACHINE
				24 INFO.DATE_TIME
				25 INFO.WEATHER
				26 INFO.TRAFFIC
				27 INFO.ALARM
				28 INFO.ADVERTISEMENT
				29 INFO.URL
				30 INFO.OTHER
				31 STATIONNAME.SHORT
				32 STATIONNAME.LONG
		*/
			RTPLUS_PROGRAMME_NOW,
			RTPLUS_PROGRAMME_NEXT,
			RTPLUS_PROGRAMME_PART,
			RTPLUS_PROGRAMME_HOST,
			RTPLUS_PROGRAMME_EDITORIAL_STAFF,
			RTPLUS_PROGRAMME_FREQUENCY,
			RTPLUS_PROGRAMME_HOMEPAGE,
			RTPLUS_PROGRAMME_SUBCHANNEL,

			RTPLUS_PHONE_HOTLINE,
			RTPLUS_PHONE_STUDIO,
			RTPLUS_PHONE_OTHER,

			RTPLUS_SMS_STUDIO,
			RTPLUS_SMS_OTHER,

			RTPLUS_EMAIL_HOTLINE,
			RTPLUS_EMAIL_STUDIO,
			RTPLUS_EMAIL_OTHER,

			RTPLUS_MMS_OTHER,

			RTPLUS_CHAT,
			RTPLUS_CHAT_CENTER,

			RTPLUS_VOTE_QUESTION,
			RTPLUS_VOTE_CENTER,
			/*
					33 PROGRAMME.NOW
					34 PROGRAMME.NEXT
					35 PROGRAMME.PART
					36 PROGRAMME.HOST
					37 PROGRAMME.EDITORIAL_STAFF
					38 PROGRAMME.FREQUENCY
					39 PROGRAMME.HOMEPAGE
					40 PROGRAMME.SUBCHANNEL
					41 PHONE.HOTLINE
					42 PHONE.STUDIO
					43 PHONE.OTHER
					44 SMS.STUDIO
					45 SMS.OTHER
					46 EMAIL.HOTLINE
					47 EMAIL.STUDIO
					48 EMAIL.OTHER
					49 MMS.OTHER
					50 CHAT
					51 CHAT.CENTER
					52 VOTE.QUESTION
					53 VOTE.CENTER
			*/
			RTPLUS_PLACE = 59,
			RTPLUS_APPOINTMENT,
			RTPLUS_IDENTIFIER,
			RTPLUS_PURCHASE,
			RTPLUS_GET_DATA
		};


		/** \brief FMTX mode enumeration. */
		public enum FMTX_MODE_ENUM : byte
		{
			FMTX_MODE_NONE,            /*!< No FMTX detected. */
			FMTX_MODE_POWER_DOWN,      /*!< FMTX present in power-down mode. */
			FMTX_MODE_POWER_UP,        /*!< FMTX present in power-up mode. */
			FMTX_MODE_TRANSMITTING,    /*!< FMTX present in running mode. */
			FMTX_MODE_OK,              /*!< FMTX present in running mode and command is successfully. */
		} ; // The current mode of the FMTX: none inserted, in bootloader mode or in normal application mode

		enum FMTX_SPECIAL_ENUM
		{
			FMTX_SPECIAL_FRONTEND,    /*!< Do Stuff on-the-go. */
			FMTX_SPECIAL_EEPROM       /*!< Don't do stuff in-real, just create EEPROM image. */
		};


		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxAudioGetAcompFlags();
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxAudioSetAcompFlags(byte u8Val);
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern short fmtxAudioGetAcompThreshold();
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxAudioSetAcompThreshold(short i16Val);
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern double fmtxAudioGetAcompAttackTime();
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxAudioSetAcompAttackTime(double dVal);
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxAudioGetAcompReleaseTimeId();
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxAudioSetAcompReleaseTimeId(byte u8Val);
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxAudioGetAcompGain();
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxAudioSetAcompGain(byte u8Val);
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern double fmtxAudioGetLimiterReleaseTime();
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxAudioSetLimiterReleaseTime(double dVal);

		/* audio signal measurement */
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxAudioGetAsqIntFlags();
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxAudiosetAsqIntFlags(byte u8Val);
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern sbyte fmtxAudioGetAsqLevelLow();
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxAudioSetAsqLevelLow(sbyte i8Val);
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern ushort fmtxAudioGetAsqDurationLow();
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxAudioSetAsqDurationLow(ushort u16Val);
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern sbyte fmtxAudioGetAsqLevelHigh();
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxAudioSetAsqLevelHigh(sbyte i8Val);
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern ushort fmtxAudioGetAsqDurationHigh();
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxAudioSetAsqDurationHigh(ushort u16Val);

		/* digital audio interface */
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxIoAppEnableAudio();
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxIoAppDisableAudio();
		/* analogue audio interface */
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern ushort fmtxAudioGetInputLevels();
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxAudioSetInputLevels(ushort atten, ushort level);
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern ushort fmtxAudioGetInputMute();
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxAudioSetInputMute(ushort u16Val);

		/* transmitting parameters */
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxTransmitterGetComponentFlags();
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxTransmitterSetComponentFlags(byte u8Val);
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxTransmitterGetPreemphasisId();
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxTransmitterSetPreemphasisId(byte u8Val);
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern int fmtxTransmitterGetAudioDeviation();
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxTransmitterSetAudioDeviation(int u32Val);
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern int fmtxTransmitterGetPilotDeviation();
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxTransmitterSetPilotDeviation(int u32Val);
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern int fmtxTransmitterGetRDSDeviation();
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxTransmitterSetRDSDeviation(int u32Val);
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern ushort fmtxTransmitterGetPilotFrequency();
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxTransmitterSetPilotFrequency(ushort u16Val);

		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxTransmitterGetTuneStatus(ref double freq, ref byte power, ref double rfcap);
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxTransmitterSetTuneFreq(double freq);
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxTransmitterSetTunePower(byte power, double rfcap);


		/* RDS parameters */
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern ushort fmtxRDSGetPI();

		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxRDSSetPI(ushort u16Val);

		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxRDSGetPsMixId();
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxRDSSetPsMixId(byte u8Val);

		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern ushort fmtxRDSGetPsMiscFlags();
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxRDSSetPsMiscFlags(ushort u16Val);

		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern byte fmtxRDSGetPsRepeatCount();
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxRDSSetPsRepeatCount(byte u8Val);

		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxRDSGetPsMessageCount();
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxRDSSetPsMessageCount(byte u8Val);

		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxRDSGetPsAFStatus(ref double freq);
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxRDSSetPsAF(double freq, byte enabled);

		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxRDSGetFifoSize();
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxRDSSetFifoSize(byte u8Val);

		/* hackish commands for getting PS and RT data from eeprom */
		[DllImport("fmstick.dll", CharSet = CharSet.Ansi, CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxRDSGetPsMessageById(byte Id, ref StringBuilder messages);
		[DllImport("fmstick.dll", CharSet = CharSet.Ansi, CallingConvention = CallingConvention.StdCall, EntryPoint="fmtxRDSGetPsMessageById")]
		private static extern FMTX_MODE_ENUM fmtxRDSGetPsMessageById2(byte Id, char* messages);

		[DllImport("fmstick.dll", CharSet = CharSet.Ansi, CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxRDSSetPsMessageById(byte Id, string messages);

		[DllImport("fmstick.dll", CharSet = CharSet.Ansi, CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxRDSGetRtMessage(ref StringBuilder messages); //returns one long string with RT message
		[DllImport("fmstick.dll", CharSet = CharSet.Ansi, CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxRDSSetRtMessage(string message);

		/* RTPlus info must be setted after Rt message due fmtxRDSSetRtMessage() flusher circular buffer */
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxRDSSetRtPlusInfo(int content1, int content1_pos, int content1_len,
																   int content2, int content2_pos, int content2_len);
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxRDSSendTimeStamp();
		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern FMTX_MODE_ENUM fmtxRDSSendCustomGroup(byte flags, byte B0, byte B1, byte C0, byte C1, byte D0, byte D1);


		// testers...

		[DllImport("fmstick.dll", CharSet = CharSet.Ansi, CallingConvention = CallingConvention.StdCall)]
		private static extern int setMessage(string message);

		[DllImport("fmstick.dll", CharSet = CharSet.Ansi, CallingConvention = CallingConvention.StdCall)]
		private static extern int getMessage(StringBuilder message);

		[DllImport("fmstick.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern int getDouble(ref double pval);




		public fmstick()
		{
		}

		public static int GetDouble(ref double val)
		{
			int ret = getDouble(ref val);
			return ret;
		}

		public static int SetMessage(string val)
		{
			int ret = setMessage(val);
			return ret;
		}

		public static int GetMessage(StringBuilder val)
		{
			int ret = getMessage(val);
			return ret;
		}





		public static FMTX_MODE_ENUM SetTuneFreq(double freq)
		{
			var ret = fmtxTransmitterSetTuneFreq(freq);
			return ret;
		}


		// RDS parameters
		 
		public static ushort RDSGetPI()
		{//Works

			ushort ret = fmtxRDSGetPI();
			return ret;
		}
		public static FMTX_MODE_ENUM RDSSetPI(ushort u16Val)
		{//Works

			var ret = fmtxRDSSetPI(u16Val);
			return ret;
		}

		public static FMTX_MODE_ENUM RDSGetPsMixId()
		{//Works
			var ret = fmtxRDSGetPsMixId();
			return ret;
		}
		public static FMTX_MODE_ENUM RDSSetPsMixId(byte u8Val)
		{
			var ret = fmtxRDSSetPsMixId(u8Val);
			return ret;
		}

		public static ushort RDSGetPsMiscFlags()
		{//Works
			ushort ret = fmtxRDSGetPsMiscFlags();
			return ret;
		}
		public static FMTX_MODE_ENUM RDSSetPsMiscFlags(ushort u16Val)
		{
			var ret = fmtxRDSSetPsMiscFlags(u16Val);
			return ret;
		}

		public static byte RDSGetPsRepeatCount()
		{//Works
			var ret = fmtxRDSGetPsRepeatCount();
			return ret;
		}
		public static FMTX_MODE_ENUM RDSSetPsRepeatCount(byte u8Val)
		{
			var ret = fmtxRDSSetPsRepeatCount(u8Val);
			return ret;
		}

		public static FMTX_MODE_ENUM RDSGetPsMessageCount()
		{
			var ret = fmtxRDSGetPsMessageCount();
			return ret;
		}
		public static FMTX_MODE_ENUM RDSSetPsMessageCount(byte u8Val)
		{
			var ret = fmtxRDSSetPsMessageCount(u8Val);
			return  ret;
		}

		public static FMTX_MODE_ENUM RDSGetPsAFStatus(ref double freq)
		{
			var ret = fmtxRDSGetPsAFStatus(ref freq);
			return ret;
		}
		public static FMTX_MODE_ENUM RDSSetPsAF(double freq, byte enabled)
		{
			var ret = fmtxRDSSetPsAF(freq, enabled);
			return ret;
		}

		public static FMTX_MODE_ENUM RDSGetFifoSize()
		{
			var ret = fmtxRDSGetFifoSize();
			return ret;
		}
		public static FMTX_MODE_ENUM RDSSetFifoSize(byte u8Val)
		{
			var ret = fmtxRDSSetFifoSize(u8Val);
			return ret;
		}

		// hackish commands for getting PS and RT data from eeprom
		public static FMTX_MODE_ENUM RDSGetPsMessageById(byte Id, ref StringBuilder message)
		{
			var ret = fmtxRDSGetPsMessageById(Id, ref message);
			return ret;
		}

		public static FMTX_MODE_ENUM RDSSetPsMessageById(byte Id, string messages)
		{
			var ret = fmtxRDSSetPsMessageById(Id, messages);
			return ret;
		}

		public static FMTX_MODE_ENUM RDSGetRtMessage(ref StringBuilder message) //returns one long string with RT message
		{
			var ret = fmtxRDSGetRtMessage(ref message);
			return ret;
		}
		public static FMTX_MODE_ENUM RDSSetRtMessage(string message)
		{
			var ret = fmtxRDSSetRtMessage(message);
			return ret;
		}

		// RTPlus info must be setted after Rt message due fmtxRDSSetRtMessage() flusher circular buffer
		public static FMTX_MODE_ENUM RDSSetRtPlusInfo(int content1, int content1_pos, int content1_len,
													   int content2, int content2_pos, int content2_len)
		{
			var ret = fmtxRDSSetRtPlusInfo(content1, content1_pos, content1_len,
											content2, content2_pos, content2_len);
			return ret;
		}

		public static FMTX_MODE_ENUM RDSSendTimeStamp()
		{
			var ret = fmtxRDSSendTimeStamp();
			return ret;
		}
		public static FMTX_MODE_ENUM RDSSendCustomGroup(byte flags, byte B0, byte B1, byte C0, byte C1, byte D0, byte D1)
		{
			var ret = fmtxRDSSendCustomGroup(flags, B0, B1, C0, C1, D0, D1);
			return ret;
		}




	}
}
