/* 11  WAP to create a class for two complex numbers. Show addition and
subtraction of two complex numbers using appropriate functions.
 */
#include <iostream>
#include <stdlib.h>
using namespace std;
class complex{
public:
    int r, i;
    complex(){ r = i = 0;}
    complex(int r_, int i_){
	r = r_;
	i = i_;
    }
    void print(){
	printf("%-d%+-di\n", r, i);
    }
};
complex sub (complex &x, complex &y){
    complex ret;
    ret.i = x.i - y.i;
    ret.r = x.r - y.r;
    return ret;
}
complex add (complex &x, complex &y){
    complex ret;
    ret.i = x.i + y.i;
    ret.r = x.r + y.r;
    return ret;
}
int main(){
    complex obj1(1,-2), obj2(3,4);
    cout << "Obj1: ";    obj1.print();
    cout << "Obj2: ";    obj2.print();
    complex sum = add(obj1, obj2),
	dif = sub(obj1, obj2);
    cout << "Sum: "; sum.print();
    cout << "Difference: "; dif.print();
    return 0;
}
