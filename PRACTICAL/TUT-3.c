#include <stdio.h>

int main() {
    int n, count = 0, num = 2;

    // Input: Number of prime numbers to print
    printf("Enter the number of prime numbers to print: ");
    scanf("%d", &n);

    printf("The first %d prime numbers are:\n", n);

    // Use a while loop to find and print the first n prime numbers
    while (count < n) {
        int isPrime = 1; // Flag to indicate if a number is prime

        // Check if the current number is prime
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0; // Not a prime number
                break;
            }
        }

        // If the number is prime, print it and increase the count
        if (isPrime) {
            printf("%d ", num);
            count++;
        }

        num++; // Check the next number
    }

    printf("\n");
    return 0;
}

}
/* OUTPUT
Enter the number of prime numbers to print: 5
The first 5 prime numbers are:
2 3 5 
*/
