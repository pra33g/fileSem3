/* 14  WAP to show the object at different nesting levels so as to demonstrate
the invoking of constructors and destructors.
 */
#include <iostream>
#include <stdlib.h>
using namespace std;
class A{
    string name;
public:
    A(string name_){name = name_; cout << "\tConstructor " << name_ << endl;}
    ~A(){cout << "\tDestructor " << name << endl;}
}o("global");
int main(){
    
    A o1("main()");
    {
	A o2("level_1");
	{
	    A o3("level_2");
	}
    }

    return 0;
}
