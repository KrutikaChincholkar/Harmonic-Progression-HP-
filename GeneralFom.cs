
using System;

class Program
{
    static void Main()
    {
        int a, d, n;

        Console.Write("Enter first term (a): ");
        a = Convert.ToInt32(Console.ReadLine());

        Console.Write("Enter common difference (d): ");
        d = Convert.ToInt32(Console.ReadLine());

        Console.Write("Enter number of terms (n): ");
        n = Convert.ToInt32(Console.ReadLine());

        Console.WriteLine("Harmonic Progression:");

        for (int i = 0; i < n; i++)
        {
            int denominator = a + i * d;
            Console.Write($"1/{denominator} ");
        }

        Console.WriteLine();
    }
}
