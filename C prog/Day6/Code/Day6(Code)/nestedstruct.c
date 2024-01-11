#include<stdio.h>
struct address
{
	int pin;
	char city[20];
	char mobileno[20];
};
typedef struct Employee
{
	char empname[20];
	int empid;
	struct address add;
}emp;
int main()
{
	emp e;
	printf("Enter the name:");
	fflush(stdin);
	gets(e.empname);
	printf("Enter the empid:");
	scanf("%d",&e.empid);
	printf("enter the city:");
	fflush(stdin);
	gets(e.add.city);
	printf("Enter The pin:");
	scanf("%d",&e.add.pin);
	printf("enter the mobile no:");
	fflush(stdin);
	gets(e.add.mobileno);
	
	printf("\\n Name\t\tEmpid\t\tCity\t\tPin\t\tMobile no\n");
	printf("%s\t\t%d\t\t%s\t\t%d\t\t%s",e.empname,e.empid,e.add.city,e.add.pin,e.add.mobileno);
	
}
