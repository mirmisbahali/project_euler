//By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

#include<stdio.h>


int main(void)
{
    int sum = 0, present=1;

    for (int i = 1; i < 10; i++)
    {
        if (i>=2)
        {
            present += i;
        }
        printf("%d\n", present);
    }

    return 1;
}

/*
1, 1
2, 3
3, 6
4, 10

*/