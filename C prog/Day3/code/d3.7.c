#include<stdio.h>
int main()
{//1 to 50 even number
//	int i=1;//init
//	while(i<=50)//condition
//	{
//		if(i%2==0)
//		{
//			printf("Even number=%d\n",i);
//		}
//		i++;//updataion (itreation)increase value by 1
//	}
//-------------------for loop---------------
int i;
for(i=1;i<=50;i++)//lowerbound upper bound checking
{
	if(i%2==0)
	{		
		printf("Even number=%d\n",i);
	}
}
}
