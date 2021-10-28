#include<stdio.h>
int main()
{
    int sum = 0,n,r;
    
    printf("Enter the number:");
    scanf("%d",&n);

    while(n > 0)
    {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }

    printf("Sum:%d",sum);
    return 0;
}
