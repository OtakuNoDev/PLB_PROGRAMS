#include <stdio.h>

// Function prototypes
int gcd_iterative(int a, int b);
int gcd_recursive(int a, int b);
int lcm(int a, int b);

int main() {
    int num1, num2, gcd_i, gcd_r, lcm_result;

    // Input two numbers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Compute GCD using iterative and recursive functions
    gcd_i = gcd_iterative(num1, num2);
    gcd_r = gcd_recursive(num1, num2);

    // Compute LCM
    lcm_result = lcm(num1, num2);

    // Display results
    printf("\nResults:\n");
    printf("GCD (Iterative): %d\n", gcd_i);
    printf("GCD (Recursive): %d\n", gcd_r);
    printf("LCM: %d\n", lcm_result);

    return 0;
}

// Iterative function to calculate GCD
int gcd_iterative(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Recursive function to calculate GCD
int gcd_recursive(int a, int b) {
    if (b == 0)
        return a;
    return gcd_recursive(b, a % b);
}

// Function to calculate LCM
int lcm(int a, int b) {
    return (a * b) / gcd_iterative(a, b); // Use the iterative GCD function
}

/* OUTPUT
Enter two numbers: 20 50

Results:
GCD (Iterative): 10
GCD (Recursive): 10
LCM: 100
*/
