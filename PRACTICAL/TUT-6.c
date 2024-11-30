#include <stdio.h>

int main() {
    int n, arr[100]; // Static array with a maximum size of 100
    int element, frequency = 0;
    int max, min, sum = 0;
    float average;

    // Input the number of elements (up to 100)
    printf("Enter the number of elements in the array (max 100): ");
    scanf("%d", &n);

    if (n > 100) {
        printf("Error: Number of elements exceeds the limit of 100.\n");
        return 1; // Exit if the input exceeds array size
    }

    // Accept array elements from the user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find max, min, sum, and average
    max = arr[0];
    min = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
        sum += arr[i];
    }
    average = (float)sum / n;

    // Find frequency of a given element
    printf("Enter the element to find in the array: ");
    scanf("%d", &element);
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            frequency++;
        }
    }

    // Display results
    printf("\nResults:\n");
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);
    printf("Average of elements: %.2f\n", average);
    if (frequency > 0) {
        printf("The element %d is found in the array.\n", element);
    } else {
        printf("The element %d is not found in the array.\n", element);
    }
    printf("Frequency of %d: %d\n", element, frequency);

    return 0;
}

/* OUTPUT
Enter the number of elements in the array (max 100): 4
Enter 4 elements:
1 3 5 7
Enter the element to find in the array: 3

Results:
Maximum element: 7
Minimum element: 1
Average of elements: 4.00
The element 3 is found in the array.
Frequency 
*/
