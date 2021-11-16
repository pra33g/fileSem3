/*
31 WAP for binary operator overloading using two objects, one object
and value, value and one object. 
*/
#include <iostream>
#include <stdlib.h>
using namespace std;
class C{
    int a=10,b=20;
public:
    friend C operator+ (int o, C obj);
    friend C operator+ (C o, C obj);
    friend C operator+ (C o, int obj);
    void dis(){
	cout << "a: " << a << ", b: " << b << endl ;
    }
};
C operator+ (int i, C obj){
    C ret;
    ret.a = obj.a + i;
    ret.b = obj.b + i;
    return ret;
}
C operator+ (C i, C obj){
    C ret;
    ret.a = i.a + obj.a;
    ret.b = obj.b + i.b;
    return ret;
}
C operator+ (C obj, int i){
    C ret;
    ret.a = obj.a + i;
    ret.b = obj.b + i;
    return ret;
}


int main(){
    cout << "Initially:\n";
    C obj;
    obj.dis();
    cout << "Calling obj + 2:\n";
    C sum = obj + 2;
    sum.dis();
    cout << "Calling obj + obj2:\n";
    C sum2 = sum + obj;
    sum2.dis();
    cout << "Calling -2 + obj:\n";
    sum2 = -2 + obj;
    sum2.dis();
    
    return 0;
}

