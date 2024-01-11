#include<stdio.h>
int main()
{
	int n1,n2;
	char ch;
	printf("Enter the Value of n1 & n2");
	scanf("%d%d",&n1,&n2);
	printf("Press + for Addition\n");
    printf("Press - for Subtraction\n");
	printf("Press * for Multiplication\n");
	printf("Press / for Division\n");
	printf("Enter the choice");
	fflush(stdin);
	scanf("%c",&ch);
	switch(ch)
	{
	case '+':
	printf("Addition=%d",n1+n2);
	break;
	case '-':
	printf("Subtraction=%d",n1-n2);
	break;
	case '*':
	printf("Multiplication=%d",n1*n2);
	break;
	case '/':
	printf("Addition=%d",n1/n2);
	break;
	default:
	printf("Invalid Choice");
		
	}
}
