//Anagram: Two strings are anagrams if they contain the same characters with the same frequency, but the order can be different.
//listen → silent ✅
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int count1[256] = {0};
    int count2[256] = {0};
    int i, flag = 1;

    // Ask the user to enter the first string
    printf("Enter first string: ");
    scanf("%s", str1);

    // Ask the user to enter the second string
    printf("Enter second string: ");
    scanf("%s", str2);

    // If the lengths are different,
    // the strings cannot be anagrams
    if(strlen(str1) != strlen(str2))
    {
        flag = 0;
    }
    else
    {
        // Count how many times each character
        // appears in the first string
        for(i = 0; str1[i] != '\0'; i++)
        {
            count1[(unsigned char)str1[i]]++;
        }

        // Count how many times each character
        // appears in the second string
        for(i = 0; str2[i] != '\0'; i++)
        {
            count2[(unsigned char)str2[i]]++;
        }

        // Compare the character counts
        // If any count is different, they are not anagrams
        for(i = 0; i < 256; i++)
        {
            if(count1[i] != count2[i])
            {
                flag = 0;
                break;
            }
        }
    }

    // Display the result
    if(flag == 1)
    {
        printf("The strings are anagrams.");
    }
    else
    {
        printf("The strings are not anagrams.");
    }

    return 0;
}