#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

struct Student findTopper(struct Student s[], int n)
{
    int i, max = 0;

    for(i = 1; i < n; i++)
    {
        if(s[i].marks > s[max].marks)
        {
            max = i;
        }
    }

    return s[max];
}

int main()
{
    struct Student s[5], topper;
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("Enter name, roll and marks: ");
        scanf("%s %d %f", s[i].name,
              &s[i].roll, &s[i].marks);
    }

    topper = findTopper(s, 5);

    printf("\nTopper Details:\n");
    printf("Name: %s\n", topper.name);
    printf("Roll No: %d\n", topper.roll);
    printf("Marks: %.2f\n", topper.marks);

    return 0;
}
