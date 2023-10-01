// Marcela Jimenez Mendez
// Programa 04: Arreglo Bidimensional

using System;
using System.Text;
class Program
{
    static void Main()
    {
        const int maxf = 3;
        const int maxc = 5;

        int[,] a = new int[maxf, maxc];

        // leer el array

        Console.Write("\n");
        for (int i = 0; i < maxf; i++)
        {
            for (int j = 0; j < maxc; j++)
            {
                Console.Write(" - Introduce un numero: ");
                int num = int.Parse(Console.ReadLine());
                a[i, j] = num;
            }
        }

        Console.Write("\n");
        for (int i = 0; i < maxf; i++)
        {
            for (int j = 0; j < maxc; j++)
            {
                Console.Write(a[i, j]);
                Console.Write(" ");
            }
            Console.Write("\n");
        }
    }
}