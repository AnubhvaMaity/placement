#include <stdio.h>          // Includes the standard input/output library.
                            // It allows us to use printf() and scanf().

int main() {                // The program starts from main().

    int a[5];               // Creates an array 'a' to store 5 integers.
    int i;                  // 'i' is used as a loop variable.

    int largest, smallest;  // Variables to store the largest and smallest values.


    printf("Enter 5 elements: ");
                            // Asks the user to enter 5 numbers.


    // This loop is used to take 5 numbers from the user.
    for(i = 0; i < 5; i++) {

        scanf("%d", &a[i]);
                            // Reads a number and stores it in the array.
                            //
                            // a[0] = first number
                            // a[1] = second number
                            // a[2] = third number
                            // a[3] = fourth number
                            // a[4] = fifth number
    }


    // We assume the first element is both
    // the largest and the smallest element.
    largest = a[0];
    smallest = a[0];


    // Now compare the remaining elements
    // with largest and smallest.
    for(i = 1; i < 5; i++) {

        // Check if the current element is greater
        // than the current largest value.
        if(a[i] > largest) {

            largest = a[i];
                            // If it is greater, update largest.
        }


        // Check if the current element is smaller
        // than the current smallest value.
        if(a[i] < smallest) {

            smallest = a[i];
                            // If it is smaller, update smallest.
        }
    }


    // Print the largest element.
    printf("Largest = %d\n", largest);

    // Print the smallest element.
    printf("Smallest = %d", smallest);


    return 0;               // Ends the program successfully.
}