//call by value
#include<stdio.h>
void swap(int,int);
int main()
{
	int x=10,y=20;
	printf("Before swapping x=%d  y=%d\n",x,y);
	swap(x,y);
	printf("After swapping  main()x=%d  y=%d\n",x,y);
	 
}
void swap(int x,int y)
{
int temp;
temp=x;
x=y;
y=temp;
printf("After swapping  in swap() x=%d  y=%d\n",x,y);

}
