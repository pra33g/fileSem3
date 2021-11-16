/*
28 WAP to overload +=, -=, multiple assignment, () using an appropriate 
class.
*/
#include <iostream>
#include <stdlib.h>
using namespace std;
class complex{
    float real, imag;
public:
    complex(): real(0), imag(0){}
    complex(float r, float i): real(r), imag(i){}
    void operator+= (complex& toAdd);
    void operator-= (complex& toSub);
    complex& operator= (complex set);
    complex operator() (complex s1, complex s2, complex s3);
    void dis(){
	printf("% -.2f%+-.2fi", real, imag);
    }
};
void complex::operator+= (complex& toAdd){
    imag = imag + toAdd.imag;
    real = real + toAdd.real;
}
void complex::operator-= (complex& toSub){
    imag = imag - toSub.imag;
    real = real - toSub.real;
}
complex& complex::operator= (complex set){
    this->real = set.real;
    this->imag = set.imag;
    return *this;
}
complex complex::operator() (complex s1, complex s2, complex s3){
    complex ret;
    imag = s1.imag + s2.imag + s3.imag;
    real = s1.real + s2.real + s3.real;
    return ret;
}
ostream& operator<< (ostream& out, complex c){
    c.dis();
    return out;
}
int main(){
    complex a(12,4), b(34,5), c(-1,-1), d(1,1);
    cout << "Initial Values: \n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;

    c += b;
    a -= b;
    cout << "\nAfter c+=b and a-=b: \n";
    cout << "a = " << a << endl;
    cout << "c = " << c << endl;
    
    d = a = c;
    cout << "\nAfter d = a = c:\n";
    cout << "a = " << a << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;

    c(a, b, d);
    cout << "\nAfter c(a,b,d) [Summation of the paren elements]:\n";
    cout << "c = " << c << endl;
    

    return 0;
}

