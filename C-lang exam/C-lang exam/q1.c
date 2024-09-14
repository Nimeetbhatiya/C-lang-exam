// Wap that prompts user to enter 3 digit positive integer. find the sum of first and last number //

#include <stdio.h>
int main()
{
    int digit;
    int first, last;
    printf("Enter three digit Positive number : ");
    scanf("%d", &digit);

    if (digit < 100 || digit > 999)
    {
        printf("The number is not a three digit positive number");
    }

    last = digit % 10;

    while (digit >= 1)
    {
        if (digit <= 10)
        {
            first = digit;
        }
        digit /= 10;
    }

    printf("\n sum of first and last value: %d", last + first);
    return 0;
}