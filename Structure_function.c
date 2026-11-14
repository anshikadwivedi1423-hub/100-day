#include <stdio.h>

struct Number
{
    int num;
};

// Function accepting structure as parameter
void display(struct Number n)
{
    printf("Number: %d", n.num);
}

int main()
{
    struct Number n;

    printf("Enter a number: ");
    scanf("%d", &n.num);

    display(n);

    return 0;
}
