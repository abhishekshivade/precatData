#include<stdio.h>
#include"gl.h"
//int gl=20;
//void display();
void show();
int main()
{
	//register int i=10;
	//printf("%d",&i);
	//int a=10;//local varaiable
	//printf("a=%d",a);
	//printf("Global=%d\n",gl);
	//------for static-----------------
	display();
	display();
	display();
	display();
	//show();
}
void display()
{
	
	  static int st=1;
	 printf("display() st=%d\n",st++);
	//printf(" display()Global=%d\n",gl);
}
//void show()
//{
//printf(" show()Global=%d\n",gl);
//}
