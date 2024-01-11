#include<stdio.h>
//void display();//function without arg and without return
//int main()
//{
//	display();
//	display();
//	display();
//	display();
//}
//void display()
//{
//	printf("Hello i am in display function");
//}
//--------------------------------------
float display();//fun without arg withn return type

int main()
{
	float res;
res=display();
printf("Result is=%f",res);	
}
float display()
{
	int n1=10,n2=3;
	float d;
	d=(float)n1/n2; //explicit type casting 10/3.0=3 10.0/3=3.33
	return d;
	
}
