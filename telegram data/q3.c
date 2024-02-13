/*
q3) Print The ASCII value to accept a number and print the number in character, decimal format.

*/
#include<stdio.h>

int main(){
    int ch;
    printf("Enter a Character to know its ASCII value:\n");
    scanf("%c",&ch);
    printf("%c in character format is %c\n",ch ,ch);
    printf("%c in octal format is %o\n",ch ,ch);
    printf("%c in Hexadecimal format is %x\n",ch ,ch);
    printf("%c in decimal  format is %d\n",ch ,ch);

}