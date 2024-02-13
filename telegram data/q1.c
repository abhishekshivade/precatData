/*write a program to concept two numbers and a)find its sum 2)difference 3)product*/

#include <stdio.h>
int main()
{
    unsigned int  num1, num2, sum, min, product;
    printf("Enter First no.:");
    scanf("%d", &num1);
    printf("Enter Secound no.:");
    scanf("%d", &num2);
    sum = num1 + num2;
    min = num1 - num2;
    product = num1 * num2;
    printf("Sum of %d + %d = %d\n Minus of %d - %d = %d\n product of %d*%d = %d", num1, num2, sum, num1, num2, min, num1, num2, product);
    return 0;
}