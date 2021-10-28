#include<stdio.h>
struct emp
{
    int empid;
    char empname[20];
    float empsal
};

int main()
{
    struct emp e = {1001,"Shubham",50000.0};
    printf("Id:%d\n",e.empid);
    printf("Name:%s\n",e.empname);
    printf("Salary:%.1f",e.empsal);
    return 0;
}
