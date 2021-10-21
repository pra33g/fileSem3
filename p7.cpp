/* 7  WAP that uses a friend function to swap the contents of the private data
members of two classes.
 
 */
#include <iostream>
#include <stdlib.h>
using namespace std;
class B;
class A{
    int a = 10;
    friend void swap(A &a, B &b);
public:
    int getDat(){return a;}
};
class B{
    int b = 20;
    friend void swap(A &a,B &b);
public:
    int getDat(){return b;}
};
void swap(A &x, B &y){
    x.a ^= y.b;
    y.b ^= x.a;
    x.a ^= y.b;
}
int main(){
    A a;
    B b;
    cout << "Before swap:\n";
    cout << "A::a = " << a.getDat() << endl;
    cout << "B::b = " << b.getDat() << endl;
    swap(a, b);
    cout << "After swap:\n";
    cout << "A::a = " << a.getDat() << endl;
    cout << "B::b = " << b.getDat() << endl;
    return 0;
}
