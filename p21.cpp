/* 
21  WAP to demonstrate the concept of pointer to object of class. WAP which
uses all the three ways you can invoke the member function.
*/

#include <iostream>
#include <string>
#include <cstring>
#include <stdlib.h>
using namespace std;

class A{
    public:
    int x,y;
    A(){
        x = 20;
        y = 40;
    };
    void dis(){
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main(){
    A a;
    A *ptr = &a;
    cout << "Calling data members using pointer to object: x = ";
    cout << ptr -> x << endl;
    cout << "Calling member function using pointer to object:\nMethod 1 - (*ptr).dis() = ";
    (*ptr).dis();
    cout << "Calling member function using pointer to object:\nMethod 2 - ptr->dis() = ";
    ptr->dis();
    cout << "Calling member function using pointer to object:\nMethod 3 - a.dis() = ";
    a.dis();
    return 0;
}

