//By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

#include <stdio.h>


int main(void)
{
    int t1 = 0, t2 = 1, next = 0, n=4000000, sum=0;

    while (next <= n)
    {
        if (next % 2 == 0)
        {
            sum += next;
        }
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    printf("Sum = %d\n", sum);
    

    return 0;
}