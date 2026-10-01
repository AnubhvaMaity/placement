#include <stdio.h>      // Includes the standard input/output library.
                        // It provides functions like printf() and scanf().

#include <string.h>     // Includes the string library.
                        // It provides the strlen() function.


int main() {            // main() is the starting point of the C program.

    char str[100];      // Creates a character array named 'str'.
                        // It can store up to 99 characters plus '\0'
                        // (the special character that marks the end of a string).

    int i;              // Creates an integer variable 'i'.
                        // We use 'i' to move through the string.


    printf("Enter a string: "); 
                        // Displays a message asking the user
                        // to enter a string.


    scanf("%s", str);   // Takes the string entered by the user
                        // and stores it in the 'str' array.
                        // %s is used to read a string.


    for(i = strlen(str) - 1; i >= 0; i--) {
                        // This loop is used to reverse the string.
                        //
                        // strlen(str) finds the length of the string.
                        // Example: "HELLO" has length 5.
                        //
                        // strlen(str) - 1 gives the last position.
                        // For "HELLO":
                        // H = 0
                        // E = 1
                        // L = 2
                        // L = 3
                        // O = 4
                        //
                        // So i starts from 4.
                        //
                        // i >= 0 means the loop continues
                        // until it reaches the first character.
                        //
                        // i-- decreases i by 1 each time.
                        // Therefore: 4 → 3 → 2 → 1 → 0


        printf("%c", str[i]);
                        // %c prints one character.
                        // str[i] gives the character at position i.
                        //
                        // For "HELLO":
                        // str[4] = O
                        // str[3] = L
                        // str[2] = L
                        // str[1] = E
                        // str[0] = H
                        //
                        // Therefore the output is:
                        // OLLEH
    }


    return 0;           // Ends the main() function.
                        // 0 means the program finished successfully.
}