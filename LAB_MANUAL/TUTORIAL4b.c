/* String Operations:
Write a program in C to
i. Count the total number of vowels or consonants in a string.
ii. Compare two strings without using string library functions.
iii. Count the total number of words in a string.
iv. Print individual characters of a string in reverse order */

#include <stdio.h>
#include <ctype.h>
#include <string.h> // Used only for strlen, not for string comparison

void countVowelsConsonants(const char *str);
void compareStrings(const char *str1, const char *str2);
void countWords(const char *str);
void printReverse(const char *str);

int main() {
    char str[100], str1[100], str2[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character added by fgets
    str[strcspn(str, "\n")] = '\0';

    printf("\n1. Count Vowels and Consonants\n");
    countVowelsConsonants(str);

    printf("\n2. Compare Two Strings\n");
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    compareStrings(str1, str2);

    printf("\n3. Count Total Number of Words\n");
    countWords(str);

    printf("\n4. Print Characters in Reverse Order\n");
    printReverse(str);

    return 0;
}

// Function to count vowels and consonants in a string
void countVowelsConsonants(const char *str) 
{
    int vowels = 0, consonants = 0;

    for (int i = 0; str[i] != '\0'; i++) 
    {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') 
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else 
            {
                consonants++;
            }
        }
    }

    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
}

// Function to compare two strings without using string library functions
void compareStrings(const char *str1, const char *str2)
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            printf("Strings are not equal.\n");
            return;
        }
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0')
    {
        printf("Strings are equal.\n");
    } 
    else
    {
        printf("Strings are not equal.\n");
    }
}

// Function to count the total number of words in a string
void countWords(const char *str)
{
    int count = 0, inWord = 0;
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') 
        {
            inWord = 0;
        }
        else if (!inWord)
        {
            inWord = 1;
            count++;
        }
    }

    printf("Total words: %d\n", count);
}

// Function to print characters of a string in reverse order
void printReverse(const char *str) 
{
    int length = 0;
    while (str[length] != '\0') 
    {
        length++;
    }

    printf("Reverse: ");

    for (int i = length - 1; i >= 0; i--) 
    {
        printf("%c", str[i]);
    }
    printf("\n");
}

