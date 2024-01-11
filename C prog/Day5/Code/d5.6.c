#include<stdio.h>
int main()
{
	int arr[5],i;
	//int arr[5]={10,20,30,40,50},i;
	  //arr[5]={10,20,30,40,50};
	  printf("Enter the elements in an arr");
	 /* for(i=0;i<5;i++)
	{ 
		 scanf("%d",&arr[i]);
	}*/
	for(i=0;i<5;i++)
	{
		printf("arr[%d]elements are=%d \t Address=%u\n ",i,arr[i],&arr[i]);
		 
	}
}
