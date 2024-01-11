//scanf demo
#include<stdio.h>
int main()
{
	int num;
	char ch;
	float fnum;
	int store;
	printf("Enter the Integer number");
	fflush(stdin);
	store=scanf("%d@%c@%f",&num,&ch,&fnum);
	//whenever your accepting integer and character value for separation purspose
	//you press enter key or space key which value stored inside buffer so we need to clean and we need enter teh value respctive chracter value
	//so for cleaning or flush buffer we need fflush(stdin)
//	printf("Enter the Character");
//	fflush(stdin);
//	scanf("%c",&ch);
//	printf("Enter the float number");
//	scanf("%f",&fnum);
	printf("num=%d\nch=%c\nfnum=%f\n",num,ch,fnum);
	printf("%d",store);
	return 0;
}
