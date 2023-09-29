using System;
class Program
{
    const int NUM = 8;
    static void Main()
    {
        int[] nums = new int[NUM];
        int total = 0;
        for (int i = 0; i < NUM; i++)
        {
            Console.Write("Por favor, Introduzca el numero: ");
            nums[i] = int.Parse(Console.ReadLine());
            total += nums[i];
        }
        Console.WriteLine("\nEl total de numeros es: " + total);
    }
}
