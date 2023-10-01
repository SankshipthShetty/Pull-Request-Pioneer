using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        Stack<int> stack = new Stack<int>();

        stack.Push(1);
        stack.Push(2);
        stack.Push(3);

        int poppedItem = stack.Pop();
        Console.WriteLine("Popped item: " + poppedItem);
        
        int peekedItem = stack.Peek();
        Console.WriteLine("Peeked item: " + peekedItem);

        bool isEmpty = stack.Count == 0;
        Console.WriteLine("Is the stack empty? " + isEmpty);

        Console.WriteLine("Stack elements (in LIFO order):");
        foreach (int item in stack)
        {
            Console.WriteLine(item);
        }
    }
}
