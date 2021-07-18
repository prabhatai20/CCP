#include <stdio.h>
struct student
{
    char firstName[50];
    int roll;
    float marks;
    char section[10];
    char derpartment[10];
    float fees;
} s[10];

int main()
{
    int i;
    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i < 2; ++i)
    {
        s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter section: ");
        scanf("%s", s[i].section);
        printf("enter department: ");
        scanf("%s", s[i].derpartment);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);

        printf("enter fees");
        scanf("%f", &s[i].fees);
    }
    printf("Displaying Information:\n\n");

    if (s[1].marks > s[2].marks)
    {
        printf("\nRoll number: %d\n", s[1].roll);
        printf("First name: ");
        puts(s[1].firstName);
        printf("department :");
        puts(s[1].derpartment);
        printf("section: ");
        puts(s[1].section);
        printf("Marks: %.1f", s[1].marks);
        printf("\nFees: %f ", s[1].fees);
        printf("\n");
    }
    else
    {
        printf("\nRoll number: %d\n", s[2].roll);
        printf("First name: ");
        puts(s[2].firstName);
        printf("department :");
        puts(s[2].derpartment);
        printf("section: ");
        puts(s[2].section);
        printf("Marks: %.1f", s[2].marks);
        printf("\nFees: %f ", s[2].fees);
        printf("\n");
    }

    return 0;
}