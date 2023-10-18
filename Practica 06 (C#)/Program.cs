// Marcela Jimenez Mendez
// Programa 06: Vectores

using System;
using System.Numerics;

class Program
{
    static void Main(string[] args)
    {
        // Declara un vector de cadenas
        String[] aves = new String[] { " Loro gris", " Paloma de diamante", " Coctel" };
        Console.Write("\n");
        Console.Write(" - Los valores del vector antes de insertar: \n");

        // Itera sobre el vector para imprimir los valores
        for (int i = 0; i < aves.GetLength(0); i++)
        {
            Console.WriteLine(aves[i]);
        }

        // Agrega tres valores al final del vector utilizando push_back()
        
    }
}
