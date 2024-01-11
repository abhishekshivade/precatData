#include <iostream>  
using namespace std;
class Shape   //base class (abstract class)
{
public:
    virtual void draw() = 0;   //pure virtual function
    
};
class Rectangle :public Shape    //derived class
{
public:
    void draw()
    {
        cout << "drawing rectangle..." << endl;
    }
};
class Circle : public Shape      //derived class
{
public:
    void draw()
    {
        cout << "drawing circle..." << endl;
    }
};

int main10() {
 //  Shape s1;  //can not create object of abstract class

    Shape* ptr1;   //we can create pointer /refernces using abstract class


    Rectangle rec;
    Circle cir;
    rec.draw();  //draw() rectangle
    cir.draw();  //draw() circle
    return 0;
}