using System;
using System.Collections.Generic;

using System.Text;

namespace fmstick.net
{
	public static class Exts
	{
		public static string ToUnicode(this string utf8String)
		{
			// read the string as UTF-8 bytes.
			byte[] encodedBytes = Encoding.UTF8.GetBytes(utf8String);

			// convert them into unicode bytes.
			byte[] unicodeBytes = Encoding.Convert(Encoding.UTF8, Encoding.Unicode, encodedBytes);

			// builds the converted string.
			return Encoding.Unicode.GetString(encodedBytes);
		}
	}
	class Program
	{

		//fmtxRDSGetPsMessageById(uint8_t Id, char *messages);
		unsafe static void Main(string[] args)
		{
			Console.WriteLine("Testing");
			try {

				StringBuilder sb = new StringBuilder(1024);

				var pi = fmstick.RDSGetPsRepeatCount();
				fmstick.RDSSetPsRepeatCount(pi);
				

			} catch (Exception e) {

				Console.WriteLine(e.ToString());
			} finally {
				Console.WriteLine("Done");
			}
		}
	}

}
