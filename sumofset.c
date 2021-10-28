#include<stdio.h>
#define MAX 5
void findpairs(int arr[], int n, int target)
{
    for (size_t i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                printf("Pair found : (%d, %d)\n", arr[i], arr[j]);
                return ;
            }
        }
    }
    printf("Pair not found");
}
int main()
{
    int n,target;
    int  arr[MAX];

    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    scanf("%d",&target);

    findpairs(arr,n,target);

    return 0;
}