#include <stdio.h>
#include <stdlib.h> // For malloc and free

int main() {
    int n, *arr;
    int sum = 0;
    float average;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit the program if memory allocation fails
    }

    // Accept values from the user
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add to the sum
    }

    // Calculate the average
    average = (float)sum / n;

    // Display the sum and average
    printf("\nSum of the elements: %d\n", sum);
    printf("Average of the elements: %.2f\n", average);

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}

/* OUTPUT
Enter the number of elements: 4
Enter 4 integers:
2 4 6 8

Sum of the elements: 20
Average of the ele
*/
