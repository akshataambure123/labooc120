#include <stdio.h>

int main()
{
    int rn;
    char name[100];
    char c[100];
    char div[10];

    printf("Student Information\n");

    printf("Enter a Student Roll No:\n");
    scanf("%d", &rn);

    printf("Enter a Student Name:\n");
    scanf("%s", name);

    printf("Enter a Student Class:\n");
    scanf("%s", c);

    printf("Enter a Student Division:\n");
    scanf("%s", div);

    printf("\nRoll No: %d\n", rn);
    printf("Name: %s\n", name);
    printf("Class: %s\n", c);
    printf("Division: %s\n", div);

    return 0;
}