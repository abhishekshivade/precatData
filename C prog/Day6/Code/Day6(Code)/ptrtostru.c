#include<stdio.h>
 typedef struct Student
{
int rollno;
char name[20];
float marks;
}Stud;
int main()
{
	Stud s1;
	Stud *ps;
	ps=&s1;
	printf("\nEnter the name::");
	fflush(stdin);
	gets(ps->name);
	printf("\nEnter the Roll no::");
	scanf("%d",&ps->rollno);
	printf("\nEnter the Marks::");
	scanf("%f",&ps->marks);
	printf("\n\n Name \t  Roll no\t Marks\n\n");
	printf("%s\t%d\t%f\t",ps->name,ps->rollno,ps->marks);
}
