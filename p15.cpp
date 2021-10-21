/* 15  WAP to demonstrate the concept of inheritance by using the public
visibility mode.
 */
#include <iostream>
#include <stdlib.h>
using namespace std;
class A{
    int x = 1;
public:
    int y = 2;
};
class B : public A{
    int z = 3;
public:
    int a = 4; 
    B(){
	cout <<
	    a << endl <<
	    z << endl << 
	    y ; //accessible base class object
	
    }
};
int main(){
    B b;
    return 0;
}
