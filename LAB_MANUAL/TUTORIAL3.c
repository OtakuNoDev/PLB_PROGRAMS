// Problem Statement: Student Grade Calculation System
// Write a C program to calculate the average and grade of each student

#include<stdio.h>
int main()
{
    int plb, phy, m1, icc, eel, total;
    float percentage;

    printf("ENTER THE MARKS OBTAINED IN PHYSICS :- \n");
    scanf("%d", &phy);

    printf("ENTER THE MARKS OBTAINED IN PLB :- \n");
    scanf("%d", &plb);

    printf("ENTER THE MARKS OBTAINED IN MATHS :- \n");
    scanf("%d", &m1);

    printf("ENTER THE MARKS OBTAINED IN ICC :- \n");
    scanf("%d", &icc);

    printf("ENTER THE MARKS OBTAINED IN EEL :-\n");
    scanf("%d", &eel);

    total = phy + plb + m1 + icc + eel;
    printf("TOTAL MARKS SCORED :- %d  \n",total);

    percentage = ((total * 100)/500);
    printf("PERCENTAGE SCORED :- %.2f  \n",percentage);

    

    if(percentage>=50 && percentage<=60)
    {
        printf("D \n");
    }   

    else if (percentage>60 && percentage<=70)
    {
        printf("C \n");
    }

    else if (percentage>70 && percentage<=80)
    {
        printf("B \n");
    }
    
    else if (percentage>80 && percentage<=90)
    {
        printf("A\n");
    }

    else
    {
        printf("FAILED \n");
    }

    return 0;
}