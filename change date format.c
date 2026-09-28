#include <stdio.h>

int main()
{
    int dd, mm, yyyy;

    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    if (mm == 4)
        printf("Date in new format: %02d-Apr-%d\n", dd, yyyy);
    else
        printf("The month is not April.\n");

    return 0;
}
