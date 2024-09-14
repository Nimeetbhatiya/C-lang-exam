// write a c program that uses pointer to find sum of 1d array //
#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    for (int i = 0; i < n; i++)
    {
        sum += *(ptr + i);
    }

    printf("The sum of the array elements is: %d\n", sum);
    return 0;
}
