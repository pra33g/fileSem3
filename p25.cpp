/*
25 WAP to overload +, - operators for complex number classes.
*/
#include <iostream>
#include <stdlib.h>
using namespace std;
class complex{
    float real, imag;
public:
    complex() : real(0), imag(0){};
    complex(float, float);
    void display();
    complex operator+(complex& toAdd);
    complex operator-(complex& toSub);
};
void complex::display(){
    printf("%-.2f%+-.2fi\n", real, imag);
}
complex::complex(float r, float i){
	real = r;
	imag = i;
}
complex complex::operator+(complex& toAdd){
    float
	r = real + toAdd.real,
	i = imag + toAdd.imag;
    complex ret(r, i);
    return ret;
}
complex complex::operator-(complex& toSub){
    float
	r = real - toSub.real,
	i = imag - toSub.imag;
    complex ret(r, i);
    return ret;
    
}
int main(){
    complex
	c1(20,-50),
	c2(30,40);
    complex
	c = c1 + c2,
	d = c1 - c2;
    c.display();
    d.display();
    return 0;
}

