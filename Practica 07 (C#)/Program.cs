﻿// Marcela Jimenez Mendez

using System;
class Program
{
    static void Main()
    {
        const int capacidad = 10;
        int[] elementos = new int[capacidad];
        int tope = -1;

        Console.WriteLine(" Teclea elemento de la pila: (termina con -1)");
        int x = 0;
        const int CLAVE = -1;

        while (x != CLAVE)
        {
            try
            {
                x = int.Parse(Console.ReadLine());
                if (tope < capacidad - 1)
                {
                    tope++;
                    elementos[tope] = x;
                }
                else
                {
                    Console.WriteLine(" Excepcion: Pila Llena");
                    break;
                }
            }
            catch (FormatException)
            {
                Console.WriteLine(" Excepcion: Entrada no valida");
            }
        }

        if (tope >= 0)
        {
            Console.Write(" Elementos de la Pila: ");
            while (tope >= 0)
            {
                x = elementos[tope];
                tope--;
                Console.Write(x + " ");
            }
        }
        else
        {
            Console.WriteLine(" Pila Vacia");
        }
    }
}