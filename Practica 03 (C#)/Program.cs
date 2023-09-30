// Marcela Jiménez Méndez
// Programa 03: Arreglos unidimensionales

using System;
class Program
{
    static void Main()
    {
        int[] numeros = new int[6] { 10, 20, 30, 40, 50, 60 };
        int[] n = new int[3] { 3, 4, 5 };
        char[] c = new char[4] { 'L', 'u', 'i', 's' };
        String s = "Mona Lisa";
        
        Console.Write("\n - ");
        foreach (int i in numeros)
        {
            Console.Write(i + " ");
        }

        Console.Write("\n - ");
        foreach (int i in n)
        {
            Console.Write(i + " ");
        }

        Console.Write("\n - ");
        foreach (char i in c)
        {
            Console.Write(i + " ");
        }

        Console.Write("\n - ");
        Console.Write(s);
        Console.Write("\n");
    }
}
