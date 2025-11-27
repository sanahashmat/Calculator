//program for simple calculator
#include<stdio.h>
int main()
{
    int a,b, add, sub, mul;
    float div;
    printf("enter two numbers: ");
    scanf("%d %d", &a,&b );
    add = a+b;
    sub = a-b;
    mul = a*b;
    div = a/b;

    printf("addition of two numbers: %d \n ", add);
    printf("subtraction of two numbers: %d \n ", sub);
    printf("multiplication of two numbers: %d \n ", mul);
    printf("division of two numbers: %f \n ", div);

    return 0;
}




