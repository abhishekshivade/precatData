#include<stdio.h>
int main()
{
	int *p,num=10,**ptr;
	p=&num;
	ptr=&p;
printf("%d\n",num);//10
printf("%d\n",&num);//address of num
printf("%d\n",p);//address inside p(num address)
printf("%d\n",&p);//address of p itself
printf("%d\n",*p);//value pointing by p
printf("%d\n",ptr);//address of p(pointing by ptr)
printf("%d\n",&ptr);//address of ptr itself
printf("%d\n",*ptr);//address of num(value of pointing pointer)
printf("%d\n",**ptr);//10
}
