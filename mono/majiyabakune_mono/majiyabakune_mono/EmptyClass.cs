using System;
using System.Threading;
namespace majiyabakune
{
	class majiyabakune
	{
		static void Main(string[] args)
		{
			for (int i = 1;i <= 10;)
			{
				Console.WriteLine("マジやばくね...");
				Thread.Sleep (500);
			}
		}
	}
}
