//A prime number is a number greater than 1 that is divisible only by 1 and itself. Examples: 2, 3, 5, 7, 11, 13

#include <stdio.h>

int main()
{
    int n, i, count = 0;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check all numbers from 1 to n
    for(i = 1; i <= n; i++)
    {
        // If n is exactly divisible by i,
        // then i is a factor of n
        if(n % i == 0)
        {
            // Increase the factor count by 1
            count++;
        }
    }

    // A prime number has exactly 2 factors:
    // 1 and the number itself
    if(count == 2)
    {
        // If there are exactly 2 factors, it is prime
        printf("Prime number");
    }
    else
    {
        // If there are not exactly 2 factors, it is not prime
        printf("Not a prime number");
    }

    return 0;
}