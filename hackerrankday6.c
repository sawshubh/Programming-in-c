#include <stdio.h>
#include <string.h>

void myfunction(char s[])
{
    for(int i = 0;i<strlen(s);i++)
    {
        if(i%2 == 0)
        {
            printf("%c",s[i]);
        }
    }
    
    printf(" ");
    for(int i = 0;i<strlen(s);i++)
    {
        if(i%2 == 1)
        {
            printf("%c",s[i]);
        }
    }
    printf("\n");    
    
}

int main() {

    int n; char s[10000];
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        scanf("%s",&s);
        myfunction(s);
    }
        
    return 0;
}
