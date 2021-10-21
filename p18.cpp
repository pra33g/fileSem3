/* 18  WAP to demonstrate the concept of function overloading by using classes.
 */
#include <iostream>
#include <stdlib.h>
using namespace std;
class A{
public:
    void f(){
	cout << "F called\n";
    }
    void f(int x){
	cout << "F(int) called\n";
    }
    void f(float x){ 
	cout << "F(float) called\n";
    }
};
int main(){
    A a;
    a.f();
    a.f(10);
    a.f((float)10.0);
    return 0;
}
