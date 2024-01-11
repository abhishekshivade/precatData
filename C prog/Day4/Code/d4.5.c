//How to return value 
#include<stdio.h>
float add(int,int);//Func Declaration
//return value   name of function (no.of paramenter list);
int main()
{
	int n1=10,n2=20,res;
	float r;
	char ch='A';
	float fnum=34.55f;
	r=add(n1,fnum);//call function actual arguments
	//printf("Addition =%d\n",add(67,90));
printf("Addition is =%f\n",r);
	//printf("Addition is =%d\n",res);
 
}
float add(int n1,int n2)//function defination formal arguments
{
	 float ad;
	 ad=n1+n2;
	 printf("%f",ad);
	 return ad;
	 
	 //return statement will reurn single value at atime
}
