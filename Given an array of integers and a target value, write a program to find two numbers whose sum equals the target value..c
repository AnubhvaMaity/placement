#include <stdio.h>

int main()
{
    int arr[100], n, target;
    int i, j;

    // Enter the number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Enter the array elements
    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Enter the target value
    printf("Enter target: ");
    scanf("%d", &target);

    // Compare every pair of numbers
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            // Check if two numbers add up to target
            if(arr[i] + arr[j] == target)
            {
                // Print the two numbers
                printf("Two numbers are %d and %d",
                       arr[i], arr[j]);

                return 0;
            }
        }
    }

    // If no pair is found
    printf("No two numbers found");

    return 0;
}