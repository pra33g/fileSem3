/* 12  WAP to demonstrate overloading of default, parameterized and copy
constructor by creating a suitable class.
 */
#include <iostream>
#include <stdlib.h>
using namespace std;
class A{
    int a;
public:
    A(){cout << "Default constructor called\n"; a = 0;}
    A(int a_){cout << "Parameterized constructor called\n";a = a_;}
    A(A &obj){cout << "Copy constructor called\n";a = obj.a;}
};
int main(){
    A a, b(10);
    A c(b);
    return 0;
}
