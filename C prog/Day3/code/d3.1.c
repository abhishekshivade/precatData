#include<stdio.h>
int main()
{
	/*int num=10,ch='A';
	//printf("%10d\n",34);
//	printf("%10s\n","IACSD");
	//printf("%4s","IACSD");
	printf("%.2f\n",10.5678);
	printf("%10.2f",10.5678);*/
	//--------------Bitwise operators----------------------
	int x=10 ,y=2,a=7,b=4;
	printf("LeftShift=%d\n",x<<y);
	printf("RightShift=%d\n",x>>y);
	printf("Bitwise AND=%d",a&b);	
	printf("Ones Compl=%d",~x);
	return 0;
}
