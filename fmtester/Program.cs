using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

using fmstick.net;


namespace fmtester
{
	class Program
	{
		static void Main(string[] args)
		{

			int ret = 0;

			double dval = 0;
			ret = fmstick.net.fmstick.GetDouble(ref dval);
			Console.WriteLine( "GetDouble: ret " + ret + ", dval " + dval);

			string sval = "Hello World!";
			ret = fmstick.net.fmstick.SetMessage( sval);
			Console.WriteLine("SetMessage: ret " + ret + ", sval " + sval);

			StringBuilder sb = new StringBuilder(1024);
			sb.Append("sb original");
			ret = fmstick.net.fmstick.GetMessage( sb);
			sval = sb.ToString();
			Console.WriteLine("GetMessage: ret " + ret + ", sval " + sval);


			ret = fmstick.net.fmstick.GetDouble(ref dval);
			Console.WriteLine("GetDouble: ret " + ret + ", dval " + dval);
			return;
		}
	}
}
