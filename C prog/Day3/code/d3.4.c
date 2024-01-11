#include<stdio.h>
int main()
{
	int age;
	char gender;
	printf("Enter the age of person");
	scanf("%d",&age);
	printf("Enter your Gender F/M");
	fflush(stdin);
	scanf("%c",&gender);
	if(age>=60)
	{
		printf("your applicable for pension\n");
		printf("Apply pension on or before 31st Dec 2023 you will get some additional benefit\n");
		if(gender=='F')
		{
			printf("You will get 20per more additional pension");
		}
		else
		{
			printf("Your not eligible for 20per amount");
		}
	}
	else
	{
		printf("Your not eligible for pension");
	}
}
