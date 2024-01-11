#include<stdio.h>
#include"gl.h"
int main()
{
char ch='S';
char *ptr;
ptr=&ch;
float fnum=3.56f;
float *fptr=&fnum;
int n=10;
int *p=&n;//declaration of pointer
 extern int gl;
//printf("n=%d\n",n);
//printf("Address of n=%u\n",&n);
//printf("Size of n=%d\n",sizeof(n));
//printf("p=%u\n",p);
//printf("*p=%u",*p);
//printf("Address p=%u",&p);
//printf("Size of p=%d\n",sizeof(p));
//printf("Size of ptr=%d\n",sizeof(ptr));
//printf("Size of fptr=%d\n",sizeof(fptr));
//printf("------------------------------------\n");
//printf("Size of p=%d\n",sizeof(*p));
//printf("Size of ptr=%d\n",sizeof(*ptr));
//printf("Size of fptr=%d",sizeof(*fptr));

	printf("gl=%d",gl);
}
