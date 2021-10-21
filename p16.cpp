/* 16  WAP to demonstrate the concept of inheritance by using the private
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
class B : private A{
    int z = 3;
public:
    int a = 4; 
    B(){
	cout << "Inside B::B()\n" <<
	    a << endl <<
	    z << endl << 
	    y << endl; //accessible base class object
	
    }
};
class C : private B{
    int c = 3;
public:
    int d = 4; 
    C(){
	cout << "Inside C::C()\n" <<
	    a << endl <<
	    c << endl ;
	    //	    z << endl << //inaccessible base class object  
	    //      y ; //inaccessible base class object
	
    }
};

int main(){
    C c;
    return 0;
}
