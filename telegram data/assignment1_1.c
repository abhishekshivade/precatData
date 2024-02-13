#include<stdio.h>
 
 int main(){
    int num1,num2,sum,diff,product;
    printf("enter num1,num2\n");
    scanf("%d,%d",&num1,&num2);

    sum= num1 +num2;
    printf("sum is %d\n",sum);

    diff=num1-num2;
    printf("diff is %d\n",diff);

    product= num1*num2;
    printf("product is %d\n",product);

    return 0;
 }