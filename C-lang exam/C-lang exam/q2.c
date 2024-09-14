// Create a C program that defines a function to check a number is divisible by 3 and 5 both or not.

#include <stdio.h>

void check(int num)
{
    if (num % 3 == 0 && num % 5 == 0)
    {
        printf("\n %d is divisible by 3 and 5 both ", num);
    }
    else
    {
        printf("\n %d is not divisible by 3 and 5 both ", num);
    }
}
int main()
{
    int num;

    printf(" Enter number : ");
    scanf("%d", &num);

    check(num);

    return 0;
}