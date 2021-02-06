#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks;
    char grade;
    printf("Enter the student's marks: ");
    scanf("%d",&marks);
    if (marks >= 85 && marks <= 100)
        grade = 'A';
    else if (marks >= 70 && marks <= 84)
        grade = 'B';
    else if (marks >= 55 && marks <= 69)
        grade = 'C';
    else if (marks >= 40 && marks <= 54)
        grade = 'D';
    else if (marks >= 0 && marks <= 39)
        grade = 'F';
    else
    {
        printf("Invalid marks");
        exit(0);
    }
    printf("Grade obtained: %c",grade);
    return 0;
}
