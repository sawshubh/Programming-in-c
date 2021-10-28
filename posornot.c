//INTERGER IS POSITIVE OR NOT

#include<stdio.h>
int main()
{
    int a;

    printf("enter the first number:");
    scanf("%d",&a);

    if (a > 0)
    {
        printf("positive integer");
    }

    else if (a == 0)
    {
        printf("not positive nor negative");
    }
    else
    {
        printf("negative integer");
    }
    
    
    return 0;
}
