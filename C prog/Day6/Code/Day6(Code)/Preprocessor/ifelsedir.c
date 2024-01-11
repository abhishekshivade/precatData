#include<stdio.h>
#define NUM 1
int main()
{
	#if(NUM==0)
	printf("value of NUM=%d",NUM);
	#elif(NUM==1)
	printf("value of NUM=%d",NUM);
	#else
	printf("Value inside NUM is not present");
	#endif
}
