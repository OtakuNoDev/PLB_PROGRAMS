// Application of Union
// Create a union Measurement with members for length in meters, weight in kilograms, and temperature in Celsius, and write a function to print the value.

#include <stdio.h>

// Define the union
union Measurement {
    float length;      // Length in meters
    float weight;      // Weight in kilograms
    float temperature; // Temperature in Celsius
};

// Function to print the value of the union
void printMeasurement(union Measurement m, char type) {
    switch (type) {
        case 'L': // Length
            printf("Length: %.2f meters\n", m.length);
            break;
        case 'W': // Weight
            printf("Weight: %.2f kilograms\n", m.weight);
            break;
        case 'T': // Temperature
            printf("Temperature: %.2f Celsius\n", m.temperature);
            break;
        default:
            printf("Invalid type\n");
    }
}

int main() {
    union Measurement m;
    char type;
    float value;

    printf("Enter the type of measurement (L for Length, W for Weight, T for Temperature): ");
    scanf(" %c", &type);

    switch (type) {
        case 'L':
            printf("Enter length in meters: ");
            scanf("%f", &value);
            m.length = value;
            break;
        case 'W':
            printf("Enter weight in kilograms: ");
            scanf("%f", &value);
            m.weight = value;
            break;
        case 'T':
            printf("Enter temperature in Celsius: ");
            scanf("%f", &value);
            m.temperature = value;
            break;
        default:
            printf("Invalid type entered.\n");
            return 1; // Exit with an error code
    }

    // Print the measurement
    printMeasurement(m, type);

    return 0;
}
