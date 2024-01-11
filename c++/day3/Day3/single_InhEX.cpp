#include<iostream>
using namespace std;

class Emp   //base class
{
private:
	int a;
public:
	int b=10;
	Emp()
	{

	}
	
protected:
	int c=200;
};

class Manger :public Emp   //derived class
{
private :
	int x;
public:
	
	int y=20;  //int b=10;
	void disp()
	{ 
		cout << "\nvalue of c(Emp)=" << c;

		}

protected:
	int z;   //int c

};

int main1()
{
	Manger m1;
	cout << "value of Y(manger)=" << m1.y;
	cout << "value of b(Emp)=" << m1.b;
	m1.disp();

	return 0;
}
