﻿using System;
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

			var res= 	fmstick.net.fmstick.RDSSendTimeStamp();
			//var res2 = fmstick.net.fmstick.RDSSetFifoSize(res); 

		}
	}
}
