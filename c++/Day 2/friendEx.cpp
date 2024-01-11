/*Friend function*/
#include <iostream>    
using namespace std;

class Box
{
private:
    int length;
public:
    Box()     //default constructor
    {
        length = 10;
    }
    void display();     //member function
    friend int printLength(Box); //friend function declartion   
};

void Box::display()
{
    cout << length;
}


int printLength(Box b)  //defination of friend funation
{
    b.length =b.length+ 10;
    return b.length;
}
int main1()
{
    Box obj1;
    obj1.display();

    cout << "Length of box: " << printLength(obj1) << endl;
    return 0;
}