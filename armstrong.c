
#include <stdio.h>
int main()
{
    int n,r,c,sum = 0,temp;
     printf("Enter the integer:");
     scanf("%d",&n);
    temp = n;
     while(n > 0)
     {
         r = n%10;
         c = r*r*r;
         sum = sum + c;
         n = n/10;
     }
     n = temp;
     if (n==sum)
        printf("Armstrong");
     else
        printf("Not an Armstrong");

    return 0;
}
