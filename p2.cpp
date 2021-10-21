/* 2  WAP to demonstrate the concept of nesting a member function.
  */
#include <iostream>
#include <stdlib.h>
using namespace std;
class A{
public:
    void f1(){
	cout << "F1\n";
    }
    void f2(){
	cout <<"F2\n";
	f1();
    }
};
int main(){
    A a;
    a.f2();
    return 0;
}
