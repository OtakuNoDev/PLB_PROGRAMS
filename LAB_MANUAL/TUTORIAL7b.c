/* Write a C program for
i. Calculate the factorial of a number.
ii. Generate the nth Fibonacci number */

#include <stdio.h>

// Function to calculate the factorial of a number using recursion
long long factorial(int n) {
    if (n == 0 || n == 1) // Base case: factorial of 0 or 1 is 1
        return 1;
    return n * factorial(n - 1); // Recursive case
}

// Function to calculate the nth Fibonacci number using recursion
int fibonacci(int n) {
    if (n == 0) // Base case: Fibonacci(0) = 0
        return 0;
    if (n == 1) // Base case: Fibonacci(1) = 1
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
}

int main() {
    int choice, num;

    printf("Choose an operation:\n");
    printf("1. Calculate the factorial of a number\n");
    printf("2. Generate the nth Fibonacci number\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // Calculate the factorial
            printf("Enter a number to calculate its factorial: ");
            scanf("%d", &num);

            if (num < 0) {
                printf("Factorial is not defined for negative numbers.\n");
            } else {
                printf("The factorial of %d is %lld\n", num, factorial(num));
            }
            break;

        case 2:
            // Generate the nth Fibonacci number
            printf("Enter the position (n) of the Fibonacci number: ");
            scanf("%d", &num);

            if (num < 0) {
                printf("Fibonacci is not defined for negative positions.\n");
            } else {
                printf("The %dth Fibonacci number is %d\n", num, fibonacci(num));
            }
            break;

        default:
            printf("Invalid choice. Please select 1 or 2.\n");
    }

    return 0;
}
