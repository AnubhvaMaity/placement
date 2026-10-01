#include <stdio.h>                  // Includes the standard input/output library.
                                    // It allows us to use printf() and scanf().

int main() {                        // The program starts from main().

    int a[5];                       // Creates an array to store 5 integers.
    int i;                           // 'i' is used as a loop variable.
    int largest, second;             // Variables to store largest and second-largest.


    printf("Enter 5 elements: ");
                                    // Asks the user to enter 5 numbers.


    // This loop is used to take 5 elements from the user.
    for(i = 0; i < 5; i++) {

        scanf("%d", &a[i]);
                                    // Reads a number and stores it in the array.
                                    //
                                    // a[0] = first element
                                    // a[1] = second element
                                    // a[2] = third element
                                    // a[3] = fourth element
                                    // a[4] = fifth element
    }


    // Assume the first element is the largest.
    largest = a[0];


    // This loop finds the largest element.
    for(i = 1; i < 5; i++) {

        // Check if the current element is greater
        // than the current largest element.
        if(a[i] > largest) {

            largest = a[i];
                                    // If it is greater, update largest.
        }
    }


    // Give second a very small value initially.
    // This helps us find a value smaller than largest.
    second = -999999;


    // This loop finds the second-largest element.
    for(i = 0; i < 5; i++) {

        // The element must satisfy TWO conditions:
        //
        // 1. a[i] > second
        //    The element should be bigger than the
        //    current second-largest value.
        //
        // 2. a[i] < largest
        //    The element must be smaller than the largest.
        //
        // Therefore, the biggest value smaller than
        // 'largest' becomes the second-largest.
        if(a[i] > second && a[i] < largest) {

            second = a[i];
                                    // Update second-largest.
        }
    }


    // Display the second-largest element.
    printf("Second largest = %d", second);


    return 0;                       // Ends the program successfully.
}