// Problem Statement: Calculator for Basic Operations
// Write a C program that acts as a scientific calculator for performing basic arithmetic operations, use switch case for the following

#include <stdio.h>
#include <math.h> // For scientific functions like pow, sqrt, etc.

int main() {
    int choice;
    double num1, num2, result;

    printf("Welcome to the Scientific Calculator\n");
    printf("Choose an operation to perform:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Modulus (%%)\n");
    printf("6. Power (^)\n");
    printf("7. Square Root (√)\n");

    printf("\nEnter your choice (1-7): ");
    scanf("%d", &choice);

    switch (choice)
     {

        case 1: // Addition
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;

        case 2: // Subtraction
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;

        case 3: // Multiplication
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;

        case 4: // Division
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            if (num2 != 0) 
            {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } 
            else
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        case 5: // Modulus
            printf("Enter two integers: ");
            int int1, int2;
            scanf("%d %d", &int1, &int2);
            if (int2 != 0) 
            {
                printf("Result: %d\n", int1 % int2);
            } 
            else 
            {
                printf("Error: Modulus by zero is not allowed.\n");
            }
            break;

        case 6: // Power
            printf("Enter base and exponent: ");
            scanf("%lf %lf", &num1, &num2);
            result = pow(num1, num2);
            printf("Result: %.2lf\n", result);
            break;

        case 7: // Square Root
            printf("Enter a number: ");
            scanf("%lf", &num1);

            if (num1 >= 0) 
            {
                result = sqrt(num1);
                printf("Result: %.2lf\n", result);
            }
            else
            {
                printf("Error: Square root of negative numbers is not allowed.\n");
            }
            break;

        default:
            printf("Invalid choice. Please try again.\n");
    }

    return 0;
}
