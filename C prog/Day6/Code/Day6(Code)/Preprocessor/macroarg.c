#include<stdio.h>
#define MIN(a,b)((a)<(b)?(a):(b))
#define EVENODD(n) ((n%2==0)?printf("Even"):printf("Odd"))
int main()
{
	int n1=9,n2=20;
	//printf("Minimum no=%d",MIN(n1,n2));
	EVENODD(n1);
	
}
