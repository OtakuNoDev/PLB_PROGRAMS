/* Create a C program to perform various file operations, including reading from a file, writing to
a file, and displaying the contents of a file. */

#include <stdio.h>
#include <stdlib.h>

void writeToFile(const char *filename) {
    FILE *file = fopen(filename, "w"); // Open file in write mode
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    char text[1000];
    printf("Enter the text you want to write to the file (press Enter to finish):\n");
    getchar(); // Consume newline from previous input
    fgets(text, sizeof(text), stdin); // Read text input

    fprintf(file, "%s", text); // Write to file
    printf("Text written to file successfully.\n");

    fclose(file); // Close the file
}

void readFromFile(const char *filename) {
    FILE *file = fopen(filename, "r"); // Open file in read mode
    if (file == NULL) {
        printf("Error opening file for reading. Make sure the file exists.\n");
        return;
    }

    char ch;
    printf("Contents of the file:\n");
    while ((ch = fgetc(file)) != EOF) { // Read character by character
        putchar(ch);
    }
    printf("\n");

    fclose(file); // Close the file
}

void appendToFile(const char *filename) {
    FILE *file = fopen(filename, "a"); // Open file in append mode
    if (file == NULL) {
        printf("Error opening file for appending.\n");
        return;
    }

    char text[1000];
    printf("Enter the text you want to append to the file (press Enter to finish):\n");
    getchar(); // Consume newline from previous input
    fgets(text, sizeof(text), stdin); // Read text input

    fprintf(file, "%s", text); // Append to file
    printf("Text appended to file successfully.\n");

    fclose(file); // Close the file
}

int main() {
    char filename[100];
    int choice;

    // Ask the user for the file name
    printf("Enter the file name: ");
    scanf("%s", filename);

    do {
        // Display menu
        printf("\nFile Operations Menu:\n");
        printf("1. Write to a file\n");
        printf("2. Read from a file\n");
        printf("3. Append to a file\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                writeToFile(filename);
                break;
            case 2:
                readFromFile(filename);
                break;
            case 3:
                appendToFile(filename);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
