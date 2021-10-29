#include<stdio.h>
int main()
{
    int t1 = 1, t2 = 1,n;

    int nextTerm = t1 + t2;

    scanf("%d",&n);

    printf("%d %d ",t1,t2);

    for (int i = 3; i <= n; i++)
    {
        printf("%d ",nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    return 0;
}