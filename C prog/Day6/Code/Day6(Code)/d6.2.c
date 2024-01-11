#include<stdio.h>
struct student
{
	double a;//8 byte
	int rollno;//8 bytes  
	char name[10];//8 bytes
	
};//s1;//structure variable
int main()
{
struct student s1;//s2={101,"Rahul"};	
/*printf("Enter the roll no:-");
scanf("%d",&s1.rollno);
printf("Enter the name:-");
scanf("%s",s1.name);
printf("Roll no is=%d \n Name=%s",s1.rollno,s1.name);*/
//printf("Roll no is=%d \n Name=%s",s2.rollno,s2.name);
printf("%d\n",sizeof(s1));
//printf("%d\t",sizeof(s1.name));
//printf("%d\t",sizeof(s1.rollno));

}
