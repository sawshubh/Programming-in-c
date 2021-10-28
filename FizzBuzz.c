#include <stdio.h>

void fizzBuzz(int n)
{
    int i;
    scanf("%d",&n);
    for (i = 1;i <= n; i++)
    {
        if ((i % 3) == 0 && i % 5 == 0)
        {
            printf("FizzBuzz\n");
        }
        else if (i % 3 ==0)
        {
            printf("Fizz\n");
        }
        else if (i % 5 ==0)
        {
            printf("Buzz\n");
        }
        else
        {
            printf("%d\n",i);
        }
    }
}

int main()
{
    int n;
    fizzBuzz(n);
    return 0;
}