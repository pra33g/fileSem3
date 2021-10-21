/* 20  WAP to demonstrate the concept of declaration list followed by argument
list followed by initialization list.
 */
#include <iostream>
#include <stdlib.h>
using namespace std;
class A{
    int a;
    public:
    A(int a_){cout<<"A::a = "; a = a_; cout << a << endl;}
};
class B : public A{
    int b;
    public:
    B(int b_, int a_): A(a_){cout<<"B::b = "; b = b_; cout << b << endl;}
};
class C : public B{
    int c;
    public:
    C(int c_, int b_, int a_) : //argument list
	B(b_, a_) { //initialization list
	cout<<"C::c = "; c = c_; cout << c << endl;
    }
};
int main(){
    cout << "Passing c(1), b(2), a(3)\n";
    C c(1,2,3);
    return 0;
}
