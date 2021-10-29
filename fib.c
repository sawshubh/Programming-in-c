#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int t1 = 1;
    int t2 = 1;
    int even = 0;
    int odd = 2;
    int nextTerm = t1 + t2;

    printf("%d %d",t1,t2);

    for (int i = 3; i <= n; i++)
    {
        printf(" %d",nextTerm);
        if (nextTerm % 2 == 0)
        {
            even += 1;
        }
        else
        {
            odd += 1;
        }
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    printf("\neven:%d odd:%d",even,odd);
    return 0;
}