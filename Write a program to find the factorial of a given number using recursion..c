#include <stdio.h>

// Function to find factorial using recursion
int factorial(int n)
{
    // Base condition:
    // Factorial of 0 is 1
    // This condition stops the recursion
    if(n == 0)
    {
        return 1;
    }

    // Recursive condition:
    // n! = n × (n-1)!
    // The function calls itself with n-1
    return n * factorial(n - 1);
}

int main()
{
    int n, result;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Call the factorial function
    // and store the returned result
    result = factorial(n);

    // Display the factorial
    printf("Factorial = %d", result);

    return 0;
}