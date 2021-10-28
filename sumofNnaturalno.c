// SUM OF N NATURAL NUMBERS

#include<stdio.h>
int main()
{
    int x,count,sum = 0;

    printf("enter the x(positive number) value:");
    scanf("%d",&x);

    for (count = 1; count <= x; count++)
    {
        sum = sum + count;
    }
    
    printf("Sum of %d natural number is:%d",x,sum);

    return 0;
}
