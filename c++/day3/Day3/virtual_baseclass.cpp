/*virual base class  ---Hybrid Inheritance*/
#include <iostream>
using namespace std;

class A {  //base class
public:
    void show()
    {
        cout << "Hello from A class \n";
    }
};

class B : public virtual A {
};

class C : virtual public A {
};

class D : public B, public C {


};

int main10()
{
    D object;
    object.show();
    return 0;
}