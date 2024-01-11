#include<stdio.h>
//int main()
//{
//	int i;
//	for(i=1;i<=10;i++)
//	{//Break statement if using inside nested loop it is coming out of inner loop or it closes inner loop
//		if(i==5)
//		{
//			//break;
//			continue;
//		}
//		printf("i=%d\n",i);
//	}
//	printf("Out of loop\n");
//}
//------goto label -----------
//synatx:-
//goto label      label:
//lable :          goto label
//int main()
//{
//	int num;
//	printf("Enter the number");
//	scanf("%d",&num);
//	if(num%2==0)
//	{
//		goto even;
//	}
//	else
//	{
//		goto odd;
//	}
//	even:
//		printf("Number is even");
//		return;
//    odd:
//    	printf("Number is odd");
//}
//-----------------------------goto label--------------
int main()
{
	int num,i=1;
	printf("enter the value of num that table you want");
	scanf("%d",&num);
	table:
		printf("%d X %d=%d\n",num,i,num*i);
		i++;
	if(i<=10)
	goto table;

}
