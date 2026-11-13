#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s[100];
    int n, i, max = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter name, roll number and marks:\n");
        scanf("%s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    for(i = 1; i < n; i++) {
        if(s[i].marks > s[max].marks) {
            max = i;
        }
    }

    printf("Topper: %s (Marks: %d)\n",
           s[max].name, s[max].marks);

    return 0;
}
