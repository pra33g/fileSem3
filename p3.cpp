/* 3  WAP to demonstrate the use of static data member and static member
function accessing a static variable with help of a class.
 
 
 */
#include <iostream>
#include <stdlib.h>
using namespace std;
class A{
    static int x;
public:
    static void setX(int x_){
	x = x_;
    }
    void printX(){
	cout << "x = " << A::x << endl;
    }
};
int A::x = 20;
int main(){
    A a;
    a.printX();
    a.setX(50);
    a.printX();
    return 0;
}
