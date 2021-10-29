#include<stdio.h>
int fact (int n)
{
    int res;
    if (n == 0)
        res = 1;
    else
        res = n * fact(n-1);
    return res;        
}
int main()
{
    int n, result;

    printf("enter the integer:");
    scanf("%d",&n);

    result = fact(n);
    printf("Factorial of %d is %d",n,result);
    return 0;
}    

