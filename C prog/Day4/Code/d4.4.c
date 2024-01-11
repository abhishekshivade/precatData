#include<stdio.h>
void add(int,int);//Func Declaration
//return value   name of function (no.of paramenter list);
int main()
{
	int n1=10,n2=20;
	add(n1,n2);//call function actual arguments
	printf("Addition is printed");
 
}
void add(int n1,int n2)//function defination formal arguments
{
	printf("Addition is=%d",n1+n2);
}
