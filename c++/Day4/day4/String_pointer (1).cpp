#include<iostream>
using namespace std;
// concatination of two strings using function and pointer
char* concat(char* s1, char* s2)
{
    //char* s1 = s1;
    while (*s1 != '\0')
    {
        s1++;
    }

    while (*s2 != '\0')
    {
        *s1++ = *s2++;

    }
    return s1;
}

int main()
{
char a[50] = "IACSD", B[10] = "pune";
char* res = new char[30];

cout << "Concatenated String:" << endl;


concat(a, B);   //function call
cout << a;  //print concatinated string


return 0;
}
/* 
//concatinate 2 strings using pointer
int main()
{
char a[50] = "IACSD", B[10] = "pune";

char* str1, * str2;  //string pointer
str1 = a;           //assign address of string to pointer
str2 = B;              //assign address of string to pointer

cout << "Enter String 1:\n";
 cin.getline(str1, 100);

 cout << "Enter String 2:\n"<<flush;
 cin>>str2;


while (*str1 != '\0')
{
    str1++;
}

while (*str2 != '\0')
{
    *str1++ = *str2++;

}
cout << "Concatenated String:" << endl;

//strcat_s(str1, str2);   //can't apply on string pointer


cout << a;  //print concatinated string


return 0;
}

*/