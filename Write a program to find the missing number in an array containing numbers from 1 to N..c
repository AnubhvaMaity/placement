#include <stdio.h>

int main()
{
    int n, i, sum = 0, total, missing;

    // Ask the user to enter N
    // Numbers should be from 1 to N
    printf("Enter N: ");
    scanf("%d", &n);

    int arr[n - 1];

    // Enter N-1 numbers because one number is missing
    printf("Enter the array elements:\n");

    for(i = 0; i < n - 1; i++)
    {
        // Store each number in the array
        scanf("%d", &arr[i]);

        // Add all array elements
        sum = sum + arr[i];
    }

    // Find the sum of numbers from 1 to N
    // Formula: N * (N + 1) / 2
    total = n * (n + 1) / 2;

    // The difference between the total sum
    // and array sum is the missing number
    missing = total - sum;

    // Display the missing number
    printf("Missing number = %d", missing);

    return 0;
}

//For N = 5:
//Numbers should be: 1 2 3 4 5
//Given: 1 2 4 5
//Total sum = 1 + 2 + 3 + 4 + 5 = 15
//Array sum = 1 + 2 + 4 + 5 = 12
//Missing number = 15 - 12 = 3