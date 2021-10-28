#include<stdio.h>
int main()
{
    int n,m;
    int flag = 0;

    scanf("%d",&n);
    m = n/2;
    for (int i = 2; i <= m; i++)
    {
        if (n % i == 0)
        {
            printf("not prime\n");
            printf("%d is divisible by %d",n,i);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("prime");
    return 0;
}