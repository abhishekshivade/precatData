/**/


#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    //%c = character
    // %d = Decimal
    // %o = Octal

    printf("%d in character format is %c\n",num,num);
    printf("%d in octal foramt is %o\n ",num , num);
    printf("%d in Hecadecimal foramt is %\n ",num , num);
    printf("%d in Decimal foramt is %d\n ",num , num);
    // return 0;

}