#include<stdio.h>
#define INPUT
int main()
{
	int a=0;
	//#ifdef INPUT
	#ifndef INPUT
	a=5;
	#else
	printf("Enter the value of a");
	scanf("%d",&a);
	#endif
	printf("%d",a);
}
