#include <stdio.h>      // Used for printf() and scanf()
#include <string.h>     // Used for strlen()

int main() {             // Program starts here

    char str[100];       // Stores the string
    int i, len;          // i is for loop, len stores string length
    int flag = 1;        // 1 means palindrome

    printf("Enter a string: ");  // Ask the user to enter a string
    scanf("%s", str);            // Read the string

    len = strlen(str);           // Find the length of the string

    // Compare characters from both ends
    for(i = 0; i < len / 2; i++) {

        // Compare first character with last character
        if(str[i] != str[len - i - 1]) {

            flag = 0;             // Not a palindrome
            break;                // Stop the loop
        }
    }

    // Check the value of flag
    if(flag == 1)
        printf("Palindrome");     // If flag is 1, it is palindrome
    else
        printf("Not Palindrome"); // If flag is 0, it is not palindrome

    return 0;                     // End the program
}