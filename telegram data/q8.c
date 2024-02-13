//Write a program to take 3 digits and prints its avg
/*
1) declare 4 int variable  ;
2) take input for 3 no,;
3) write avg formula for 3 no. i.e.num4= (num1+num2+num3)/3
4) print output of num4;

*/
#include<stdio.h>
int main(){
    int num1,num2,num3,num4;
    printf("Enter first no., Secound no. , and Third no.\n");
    scanf("%d\n%d\n%d",num1,num2,num3);
    num4 = (float)(num1+num2+num3)/3;
    printf("Average of %d ,%d ,%d, is %f")

}