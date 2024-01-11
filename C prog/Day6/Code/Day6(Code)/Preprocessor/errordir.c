#include<stdio.h>
//#include<math.h>
#ifdef__MATH_H
#error First include file the compile
#else
int main()
{
	float a;
	a=sqrt(5);
	printf("%f",a);
	
}
#endif
