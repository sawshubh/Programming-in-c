#include<stdio.h>
int main()
{
    float meal_cost;
    float meal_tip;
    float meal_tax;

    scanf("%f",&meal_cost);
    scanf("%f",&meal_tip);
    scanf("%f",&meal_tax);

    float z,w,y;
    z = (meal_tip / 100) * meal_cost;
    w = (meal_tax / 100) *meal_cost;
    y = w + z + meal_cost;

    printf("%.0f",y);
    return 0;
}

