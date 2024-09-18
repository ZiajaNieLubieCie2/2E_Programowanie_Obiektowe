using System;
public class Program
{
    private static string new_String;

    public static void Main(string[] args)

    {
        double i = 3.14;
        Console.WriteLine(i);

        string j = "Jakub Tutaj";
        Console.WriteLine(j);

        int x = 10;
        double y = (Convert.ToDouble(x));
        Console.WriteLine(y);


        double a = 10.78493;
        int b = Convert.ToInt32(a);
        Console.WriteLine(b);

        Console.WriteLine("podaj napis");
        string napis = Console.ReadLine();
        Console.WriteLine(napis);
    }
}