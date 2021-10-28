#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    int val = rand() % 2 + 0;

    printf("%d",val);
}