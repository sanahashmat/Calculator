#include <stdio.h>

int main() {
    char operator;
    int num1, num2;
    float div;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (operator == '+')
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
    else if (operator == '-')
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
    else if (operator == '*')
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
    else if (operator == '/'){
        if(num2==0){
            printf("division by zero is not allowed");
        }else{
            div =(float)num1/num2;
        printf("%d / %d =%f\n",num1,num2,div );
        }
    }else{
        printf("Invalid operator.\n");
    }
    return 0;
}