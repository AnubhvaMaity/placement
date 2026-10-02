#include <stdio.h>

int main()
{
    int n, i;
    
    // 'a' stores the first Fibonacci number
    // 'b' stores the second Fibonacci number
    int a = 0, b = 1, c;

    // Ask the user how many Fibonacci numbers to print
    printf("Enter N: ");
    scanf("%d", &n);

    // Repeat the loop N times
    for(i = 1; i <= n; i++)
    {
        // Print the current Fibonacci number
        printf("%d ", a);

        // Add the current two numbers
        // to get the next Fibonacci number
        c = a + b;

        // Move 'b' to 'a'
        // because 'b' becomes the current number
        a = b;

        // Store the new number in 'b'
        // so it can be used in the next calculation
        b = c;
    }

    return 0;
}