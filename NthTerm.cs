
using System;

class Program
{
    static void Main()
    {
        int a, d, n;
        double term;

        Console.Write("Enter first term (a): ");
        a = Convert.ToInt32(Console.ReadLine());

        Console.Write("Enter common difference (d): ");
        d = Convert.ToInt32(Console.ReadLine());

        Console.Write("Enter term number (n): ");
        n = Convert.ToInt32(Console.ReadLine());

        term = 1.0 / (a + (n - 1) * d);

        Console.WriteLine($"The {n}th term of HP is: {term:F6}");
    }
}
