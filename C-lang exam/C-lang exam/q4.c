// devlop a c program that uses a structure to represent a mobile
#include <stdio.h>
#include <string.h>

struct mobile
{
    char Company_name[20];
    char color[20];
    int model;
    int price;
    
};

int main()
{
    int n;
     printf("Enter Total Mobile : ");
     scanf("%d", &n);

    struct mobile mob[n];

     

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter Company Name : ");
        scanf("%s", mob[i].Company_name);
        printf("Color => ");
        scanf("%s", mob[i].color);
        printf("Model => ");
        scanf("%d", &mob[i].model);
        printf("Price => ");
        scanf("%d",  &mob[i].price);
    }

    for (int i = 0; i < n; i++)
    {
        printf("\n");
        printf("Company Name :%s", mob[i].Company_name);
        printf("Color :%s", mob[i].color);
        printf("Model :%d", mob[i].model);
        printf("Price :%d", mob[i].price);
       
       
    }

    return 0;
}