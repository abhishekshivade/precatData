#include<stdio.h>
int main()
{
	int num,i,fact=1;
	printf("Enter the number which factorial you need to calculate");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;//num=5  i=1 1<=5
		            //1=1*1= 1 i++ 2
		            //2<=5   1*2=fact=2
		            //3<=5   2*3 fact=6
		            //4<=5   6*4=24 fact =24
		            //5<=5   24*5= fact=120
		            //6<=5
	}
	printf("Factorial=%d",fact);
	
}
