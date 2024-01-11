#include<stdio.h>
int main()
{
	int n1,n2,max;
	printf("Enter the value of n1 & n2");
	scanf("%d%d",&n1,&n2);
//	if(n1>n2)
//	{
//		printf("Max number is n1=%d",n1);
//	}
//	else
//	{
//	 	printf("Max number is n2=%d",n2);
//	 }
	
//(n1>n2)?printf("Max number is n1=%d",n1):printf("Max number is n2=%d",n2);
max=(n1>n2)?n1:n2;
printf("Max number=%d",max);
}
