#include<iostream>
using namespace std;

class student
{
	int rno;
public:
	void disp()
	{
		cout << "hello student";
	}
};
int main3()
{
	student* s1;
	s1 = new student;  //allocate memory for object

	//student* s2 = new student;

	s1->disp();   //function call

	delete s1;   //deallacte memory

	return 0;
}