#include <iostream>    
using namespace std;
class ABC
{
public:
 virtual void display()
	{
		cout << "hello ...Base class is invoked" << endl;
	}


};
class B :public ABC
{
public:
	void display()
	{
		cout << "hi....Derived Class is invoked" << endl;
	}

};
int main6()
{
	ABC o1;   
	ABC* ptr;    //pointer of base class    
	B b;     //object of derived class    
   ptr = &b;   //store address of drived class obj to base class pointer
	ptr->display();   //Late Binding occurs   
	return 0;
}