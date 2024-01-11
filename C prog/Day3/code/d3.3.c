#include<stdio.h>
int main()
{
	int per;
	printf("Enter the percentage");
	scanf("%d",&per);
	if(per>=90)
	{
		printf("A+ Grd");
	}
	else if(per<90 && per>=80)
	{
		printf("A grd");
	}
	else if(per<80 && per>=70)
	{
		printf("B+ grd");
	}
	else if(per<70 && per>=60)
	{
			printf("B grd");
	}
	else if(per<60 && per>=50)
	{
		printf("C grd");
	}
	else if(per<50 && per>=35)
	{
		printf("Pass grd");
	}
	else
	printf("Fail!!! Try Again");
         
}
