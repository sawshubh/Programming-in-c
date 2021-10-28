//BITWISE LEFT SHIFT OPERATORS IN C

#include <stdio.h>
int main()
{
    char var = 5; // binary value of 3 = 0000 0011
    printf("%d",var << 1);     //left shift by 1 bit which return 0000 0110 which is 6 in decimal.
    printf("\n%d",16&32);
    return 0;
}


//***NOTE***//
//Left shifting is equivalent to the multiplication by 2^right operand
// for eg. var = 3 
// var << 1   [3 x 2^1]
// var << 4   [3 x 2^4]