#include <stdio.h>

// Function to calculate modulo for floating-point numbers
float fmod_custom(float a, float b) {
    return a - (int)(a / b) * b;
}

int main() {
    float num1, num2;
    float sum, difference, product, quotient, modulo;

    // Taking input from the user
    printf("Enter two floating-point numbers:\n");
    printf("Number 1: ");
    scanf("%f", &num1);
    printf("Number 2: ");
    scanf("%f", &num2);

    // Performing arithmetic operations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    // Check for division by zero
    if (num2 != 0) {
        quotient = num1 / num2;
        modulo = fmod_custom(num1, num2);
    } else {
        printf("Error: Division or modulo by zero is not allowed.\n");
        return 1; // Exit the program if division by zero
    }

    // Displaying results
    printf("\nResults of Arithmetic Operations:\n");
    printf("Sum: %.2f\n", sum);
    printf("Difference: %.2f\n", difference);
    printf("Product: %.2f\n", product);
    printf("Quotient: %.2f\n", quotient);
    printf("Modulo: %.2f\n", modulo);

    return 0;
}
/* OUTPUT
Enter two floating-point numbers:
Number 1: 4
Number 2: 8

Results of Arithmetic Operations:
Sum: 12.00
Difference: -4.00
Product: 32.00
Quotient: 0.50
Modulo: 4.00
*/
