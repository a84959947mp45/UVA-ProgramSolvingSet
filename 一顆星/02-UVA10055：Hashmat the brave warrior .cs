using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ConsoleApplication1
{
    class Program
    {
        public static int i = 0;

        public long compute(string str)
        {
            string register;
            long re;
            register = Convert.ToString(str[i++]);
            while (str[i] != ' ')
            {
                register += Convert.ToString(str[i++]);
            }
            re = long.Parse(register);
            return re;
        }

        public static void Main()
        {
            Program o = new Program();
            long c, r1 = 0, r2 = 0, temp;

            for (;;)
            {
                i = 0;
                string str;
                str = Console.ReadLine();
                if (string.IsNullOrEmpty(str))
                {
                    break;
                }
                str += " ";
                if (str[0] == ' ')
                {
                    i++;
                }
                for (; i < str.Length - 1; i++)
                {
                    r1 = o.compute(str);
                    i++;
                    r2 = o.compute(str);

                    if (r2 > r1)
                    {
                        temp = r1;
                        r1 = r2;
                        r2 = temp;
                    }
                    c = r1 - r2;

                    Console.WriteLine("{0}", c);
                }
            }
        }
    }
}
