/* 17  WAP to demonstrate the concept of ambiguity resolution in multilevel
inheritance (function overloading).
 */
#include <iostream>
#include <stdlib.h>
using namespace std;
class A{
public:
    void f(){
	cout << "A's fun called";
    }
};
class B : public A{
public:

    void f(int val){
	cout << "\nB's fun called";
    }
    void f(){
	A::f();
    }
};
int main(){
    B b;
    b.f();
    b.f(40);
    cout << endl;
    return 0;
}
