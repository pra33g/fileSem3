/* 8  WAP to demonstrate concept of friend class.
 
 */
#include <iostream>
#include <stdlib.h>
using namespace std;
class A{
    int a = 10;
    friend void modify(A &, int);
public:
    int getDat(){return a;}
};
void modify(A &a, int val){
    a.a = val;
}
int main(){
    A a;
    cout << "Modifying private member A::a using friend function.\nPrevious value of A::a = " << a.getDat();
    modify(a, 50);
    cout << "\nModified value of A::a = " << a.getDat() << endl;
    return 0;
}
