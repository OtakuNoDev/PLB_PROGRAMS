// ) Car Rental System using Structure
// Create a structure named "Car" to store details like car ID, model, and rental rate per day. Write a C program to input data for three cars, calculate the total rental cost for a specified number of days, and display the results.

#include <stdio.h>

#define MAX_CARS 3

// Define the structure to store car details
struct Car
{
    int carID;
    char model[50];
    float rentalRate;
};

int main() 
{
    struct Car cars[MAX_CARS];
    int rentalDays, selectedCarID, carFound = 0;
    float totalCost;

    printf("Car Rental System\n");

    // Input car details
    for (int i = 0; i < MAX_CARS; i++)
    {
        printf("\n Enter details for Car %d:\n", i + 1);
        printf("Car ID: "); 
        scanf("%d", &cars[i].carID); // Example: 101, 102, 103
        printf("Model: "); 
        scanf("%s", cars[i].model); // Example: Sedan, SUV, Hatchback
        printf("Rental Rate per Day: ");
        scanf("%f", &cars[i].rentalRate); // Example: 50, 70, 40
    }

    // Display available cars
    printf("\nAvailable Cars:\n");
    printf("Car ID\tModel\t\tRental Rate (per day)\n");
    for (int i = 0; i < MAX_CARS; i++) 
    {
        printf("%d\t%s\t\t%.2f\n", cars[i].carID, cars[i].model, cars[i].rentalRate);
    }

    // Select car and input rental days
    printf("\nEnter the Car ID you want to rent (e.g., 102): ");
    scanf("%d", &selectedCarID);
    printf("Enter the number of days you want to rent the car (e.g., 5): ");
    scanf("%d", &rentalDays);

    // Calculate total cost
    for (int i = 0; i < MAX_CARS; i++) 
    {
        if (cars[i].carID == selectedCarID) 
        {
            carFound = 1;
            totalCost = rentalDays * cars[i].rentalRate;
            printf("\nRental Summary:\n");
            printf("Car Model: %s\n", cars[i].model);
            printf("Rental Days: %d\n", rentalDays);
            printf("Total Cost: %.2f\n", totalCost);
            break;
        }
    }

    if (!carFound) 
    {
        printf("\nError: Car with ID %d not found.\n", selectedCarID);
    }

    return 0;
}
