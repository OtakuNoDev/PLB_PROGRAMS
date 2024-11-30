// Problem Statement: Eligibility Checker
// Write a C program to determine the eligibility of a person to vote based on their age and citizenship status.

#include <stdio.h>

int main() 
{
    char nationality[20];
    int age;

    // Ask for nationality
    printf("Enter your nationality (Indian or Other): ");
    scanf("%s", &nationality);

    // Check if nationality is Indian
    if (nationality[0] == 'I' && nationality[1] == 'n' && nationality[2] == 'd' &&
        nationality[3] == 'i' && nationality[4] == 'a' && nationality[5] == 'n' &&
        nationality[6] == '\0') 
    {
        
        // If Indian, ask for age
        printf("Enter your age: ");
        scanf("%d", &age);

        // Check age for voting eligibility
        if (age >= 18) {
            printf("You are eligible for voting.\n");
        } 
        else
        {
            printf("You are not eligible for voting.\n");
        }
    }

    else 
    {
        printf("You are not eligible for voting.\n");
    }

    return 0;
}