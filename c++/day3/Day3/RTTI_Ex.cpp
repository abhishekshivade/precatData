// C++ program to demonstrate
// Run Time Type Identification successfully
// With virtual function

#include <iostream>
using namespace std;

// Initialization of base class
class Base {
	virtual void fun() 
	{
	  //
	}
};

// Initialization of Derived class
class Derv : public Base {
	void fun()
	{

		//
	 }
};

// Driver Code
int main7()
{
	Base* b = new Derv; // Base class pointer

	Derv* d = dynamic_cast<Derv*>(b); // Derived class pointer
	if (d != NULL)
		cout << "works";
	else
		cout << "cannot cast B* to D*";
	getchar();
	return 0;
}
