/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <stdio.h>


int main(void)
{
    int x = 1, y = 1, smallest = 0;

    while (x > 0)
    {
        y = 1;
        while ((x % y == 0) && (y < 21))
        {
            if (y == 20)
            {
                smallest = x;
                break;
            }
            y++;
        }
        x++;
        if (smallest > 0)
        {
            break;
        }
    }
    printf("%d\n", smallest);
    return 0;
}