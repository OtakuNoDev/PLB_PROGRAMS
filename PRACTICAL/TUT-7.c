#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseString(char str[], char reversed[]) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        reversed[i] = str[len - i - 1];
    }
    reversed[len] = '\0';
}

int isPalindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Is a palindrome
}

void countFrequency(char str[]) {
    int freq[256] = {0}; // ASCII characters array to store frequency

    // Count the frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Display the frequencies
    printf("\nCharacter Frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("'%c': %d\n", i, freq[i]);
        }
    }
}

int main() {
    char str[100], reversed[100];

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove the trailing newline character

    // Reverse the string
    reverseString(str, reversed);
    printf("\nReversed String: %s\n", reversed);

    // Check if the string is a palindrome
    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    // Count and display character frequencies
    countFrequency(str);

    return 0;
}

/* OUTPUT
Enter a string: THIS IS GAURAV

Reversed String: VARUAG SI SIHT
The string is not a palindrome.

Character Frequencies:
' ': 2
'A': 2
'G': 1
'H': 1
'I': 2
'R': 1
'S': 2
'T': 1
'U': 1
'V'

Enter a string: RACECAR

Reversed String: RACECAR
The string is a palindrome.

Character Frequencies:
'A': 2
'C': 2
'E': 1
'R': 2
*/
