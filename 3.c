/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include <stdio.h>
#include <math.h>


int main(void)
{
    long int n = 600851475143, i;

    for (i = 2; i*i < n; i++)
    {
        while (n % i == 0)
        {
            n /= i;
        }
    }
    

    printf("Largest Prime Factor of 600851475143 is %ld\n", n);

    return 0;
}