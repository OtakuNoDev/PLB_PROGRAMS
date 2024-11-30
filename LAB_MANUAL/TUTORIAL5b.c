// Application of Pointer
// Write a C program that uses a pointer to an array of integers and prints all elements of the array using the pointer

#include <stdio.h>

int main() {
    int size;

    // Ask the user for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size]; // Declare an array of user-specified size
    int *ptr = arr; // Pointer to the first element of the array

    // Input array elements
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", ptr + i); // Using pointer arithmetic to store input
    }

    // Output array elements using the pointer
    printf("Elements of the array using a pointer:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: %d\n", i + 1, *(ptr + i)); // Accessing elements using pointer arithmetic
    }

    return 0;
}
