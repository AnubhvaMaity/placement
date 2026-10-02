#include <stdio.h>

int main()
{
    char str[100];
    int count[256] = {0};
    int i;

    // Ask the user to enter a string
    printf("Enter a string: ");
    scanf("%s", str);

    // Go through each character of the string
    for(i = 0; str[i] != '\0'; i++)
    {
        // Increase the count of the current character
        count[(unsigned char)str[i]]++;
    }

    // Check all possible characters
    for(i = 0; i < 256; i++)
    {
        // If the character occurs at least once,
        // print the character and its frequency
        if(count[i] > 0)
        {
            printf("%c = %d\n", i, count[i]);
        }
    }

    return 0;
}