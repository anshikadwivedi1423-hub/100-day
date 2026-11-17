#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Employee
{
    int id;
    char name[50];
    float salary;
    struct Date joiningDate;
};

int main()
{
    struct Employee e;

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Employee Name: ");
    scanf("%49s", e.name);

    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    printf("Enter Joining Date (DD MM YYYY): ");
    scanf("%d %d %d",
          &e.joiningDate.day,
          &e.joiningDate.month,
          &e.joiningDate.year);

    printf("\n--- Employee Details ---\n");
    printf("Employee ID: %d\n", e.id);
    printf("Employee Name: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);

    printf("Joining Date: %02d-%02d-%04d\n",
           e.joiningDate.day,
           e.joiningDate.month,
           e.joiningDate.year);

    return 0;
}
