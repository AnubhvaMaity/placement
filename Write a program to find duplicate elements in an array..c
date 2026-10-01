#include <stdio.h>              // Includes the standard input/output library.
                                // It allows us to use printf() and scanf().

int main() {                    // The program starts from main().

    int a[5];                   // Creates an array to store 5 integers.
    int i, j;                   // i and j are used as loop variables.


    printf("Enter 5 elements: ");
                                // Asks the user to enter 5 numbers.


    // This loop is used to take 5 elements from the user.
    for(i = 0; i < 5; i++) {

        scanf("%d", &a[i]);
                                // Reads a number from the user.
                                // The number is stored in a[i].
                                //
                                // a[0] = first element
                                // a[1] = second element
                                // a[2] = third element
                                // a[3] = fourth element
                                // a[4] = fifth element
    }


    // Outer loop selects one element at a time.
    for(i = 0; i < 5; i++) {


        // Inner loop compares the selected element
        // with the elements that come after it.
        for(j = i + 1; j < 5; j++) {


            // Check whether two elements are equal.
            if(a[i] == a[j]) {

                // If both elements are equal,
                // then a[i] is a duplicate element.
                printf("Duplicate element = %d\n", a[i]);
            }
        }
    }


    return 0;                  // Ends the program successfully.
}