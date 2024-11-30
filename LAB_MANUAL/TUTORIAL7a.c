// Application of Pointer
// sWrite a C program that uses a pointer to an array of integers and prints all elements of the array using the pointer

#include <stdio.h>

// Function to reverse a number using recursion
int reverseNumber(int num, int rev) {
    if (num == 0) 
        return rev;
    return reverseNumber(num / 10, rev * 10 + num % 10);
}

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    if (num < 0) num = -num; // Convert negative numbers to positive
    return num == reverseNumber(num, 0);
}

int main() {
    int number;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check for palindrome
    if (isPalindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }

    return 0;
}
