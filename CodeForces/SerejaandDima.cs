using System;

namespace Sereja_and_Dima
{
    class Program
    {
        static void Main(string[] args)
        {
            int n,Dima = 0,Sereja = 0,sum;
            bool flag = false;
            n = Convert.ToInt32(Console.ReadLine());
            int[] Numbers = new int[n];
            string sline = Console.ReadLine();
            string[] sNumbers = sline.Split(' ');
            for (int i = 0; i < n; i++)
              Numbers[i] = Int32.Parse(sNumbers[i]);

            for (int i = 0,j = n-1; i <= j; i++)
            {
                if (Numbers[i] > Numbers[j])
                {
                    if (flag)
                    {
                        Dima += Numbers[i];
                        flag = !flag;
                    }
                    else
                    {
                        Sereja += Numbers[i];
                        flag = !flag;
                    }
                }
                else if (Numbers[i] < Numbers[j])
                {
                    if (flag)
                    {
                        Dima += Numbers[j];
                        flag = !flag;
                    }
                    else
                    {
                        Sereja += Numbers[j];
                        flag = !flag;
                    }
                    j--;
                    i--;
                }
                else
                {
                    if (flag)
                    {
                        Dima += Numbers[i];
                        flag = !flag;
                    }
                    else
                    {
                        Sereja += Numbers[i];
                        flag = !flag;
                    }
                }

            }

            Console.WriteLine($"{Sereja} {Dima}");                
        }
    }
}
