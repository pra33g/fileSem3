/* 
WAP to demonstrate the concept of runtime polymorphism through virtual 
functions.
*/
#include <iostream>
#include <stdlib.h>
using namespace std;
class A{
    int a = 10;
public :
    virtual void dis(){
        cout << "A:: " << a << endl;
    }
};
class B : public A{
    int b = 20;
public :
    void dis(){
	cout << "\nInside B::" << b << endl;
    }
};
class C : public B{
    int c = 30;
public :
    void dis(){
	cout << "\nInside C::" << c << endl;
    }
};
int main(){
    A *ptr;
    B b;
    C c;
    //ptr->dis();
    ptr = &b;
    ptr->dis();
    ptr = &c;
    ptr->dis();
    return 0;
}

