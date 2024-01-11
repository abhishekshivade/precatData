#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	int n,i;
	printf("Enter the elements");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));//10
	printf("Enter the %d integer values:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&ptr[i]);
		//scanf("%d",ptr+i);
	}
	printf("You have entered values:\n");
	for(i=0;i<n;i++)
	{
		printf("\t%d",ptr[i]);
	
	
	}
	ptr=realloc(ptr,(n+5)*sizeof(int));
	printf("\nenter more 5 value:\n");
	for(i=n;i<n+5;i++)
	{
		scanf("%d",&ptr[i]);
	}
	for(i=0;i<n+5;i++)
	{
		printf("Address are %u \tValues Are %d\n",(ptr+i),ptr[i]);
	
	
	}
	free(ptr);
	
}
