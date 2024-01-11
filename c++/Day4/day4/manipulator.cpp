/*c++ manipulator*/
/*
#include <iostream>
#include <iomanip>
using namespace std;

int main5() {

    float basic, ta, da, gs;
    basic = 1000; ta = 800; da = 5000;
    gs = basic + ta + da;
    cout << setw(10) << "Basic" << setw(10) << basic << endl
        << setw(10) << "TA" << setfill(10) << ta << endl
        << setw(10) << "DA" << setw(10) << da << endl
        << setw(10) << "GS" << setw(10) << gs << endl;
    return 0;
}

*/


#include <iostream>
#include <istream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    istringstream str("           Programmer");
    string line;
    // Ignore all the whitespace in string
    // str before the first word.
    getline(str >> std::ws, line);

    // you can also write str>>ws
    // After printing the output it will automatically
    // write a new line in the output stream.
    cout << line;
    cout << "enter string:";
    cin >> line;
    // without flush, the output will be the same.
    cout << "only a test"<<flush ;

    // Use of ends Manipulator
    cout << "\na";

    // NULL character will be added in the Output
    cout << "b" << ends;

    cout << "c" << endl;

    return 0;
}



