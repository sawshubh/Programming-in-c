#include<stdio.h>
void findpair(int arr[], int n, int target)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                printf("Pair found (%d, %d)\n",arr[i], arr[j]);
                return;
            }
            
        }
        
    }

    printf("Pair not found");
    
}
int main()
{
    int arr[10],n,target;

    scanf("%d",&n);

    printf("***********************\n");
    for (int i = 0; i < n; i++)
    {
        scanf("\n%d",&arr[i]);
    }
    printf("***********************\n");

    scanf("\n%d",&target);

    findpair(arr,n,target);
    
    return 0;
}