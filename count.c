#include <stdio.h>

int main()
{
    long long num;
    int count[10] = {0};
    int digit, max = 0, most = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    while(num > 0)
    {
        digit = num % 10;
        count[digit]++;
        num = num / 10;
    }

    for(int i = 0; i < 10; i++)
    {
        if(count[i] > max)
        {
            max = count[i];
            most = i;
        }
    }

    printf("Most occurring digit = %d\n", most);
    printf("Number of occurrences = %d", max);

    return 0;
}
