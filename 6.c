/*
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include <stdio.h>

int main(void)
{
    int n = 100, sum_of_sqs, sq_of_sum, sum=0;

    sum_of_sqs = (n*(n+1) * (2*n+1)) / 6;

    sum = (n * (n+1) / 2);

    sq_of_sum = sum * sum;
    
    printf("%d\n", sq_of_sum - sum_of_sqs);
    // printf("%d\n", (sum_of_sqs - sq_of_sum));


    return 0;
}