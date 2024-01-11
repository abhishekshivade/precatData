//By using recursion
#include<stdio.h>
int factorial(int);
int main()
{
	int num,i,fact;
	printf("Enter the number which factorial you need to calculate");
	scanf("%d",&num);
	fact=factorial(num);
	printf("factorial of %d=%d",num,fact);
}
int factorial(int n)
{
	if(n==0)
	return 1;
	else
	return (n*factorial(n-1));
}
	
