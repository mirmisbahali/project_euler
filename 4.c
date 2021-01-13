/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <stdio.h>


int main(void)
{
    int largest_palindrome=0, number;

    for (int i = 100; i <= 999; i++)
    {
        for (int j = 100; j <= 999; j++)
        {
            number = i * j;
            // if (number > 99999)
            // {
                if ((number % 100) == (number / 10000))
                {
                    if (number > largest_palindrome)
                    {
                        largest_palindrome = number;
                    }
                }    
            // }
            // else
            // {
            //     if ((number % 100) == (number / 1000))
            //     {
            //         if (number > largest_palindrome)
            //         {
            //             largest_palindrome = number;
            //         }
            //     } 
            // }
            
        }
    }
    printf("\nLargest Palindrone = %d\n", largest_palindrome);
}