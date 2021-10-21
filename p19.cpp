/* 19  WAP to demonstrate the concept of virtual base class.
 by using classes.
 */
#include <iostream>
#include <stdlib.h>
using namespace std;
class A{
public:
    void f(){
	cout << "Accessing base function which has been inherited in grandchild through two pathways.\n";
    }
};
class B : virtual public A {};
class C : virtual public A {};
class D : public B, public C{
    
};
    
int main(){
    D d;
    d.f(); //solving ambiguity using virtual base class concept
    return 0;
}
