/*
29 WAP to overloading of arrow (->) operator.
*/
#include <iostream>
#include <stdlib.h>
using namespace std;
class password{
    long hash;
    string txt;
public:
    password(): hash(0x0){}
    password(string txt_);
    void hashify();
    void unhashify();
    void print(){
	cout << txt;
    }
    password* operator-> ();
};
password* password::operator-> (){
    return this;
}
password::password(string txt_){
    txt = txt_;
    hash = txt.length();
    hashify();
}
void password::hashify(){
    size_t len = txt.length();
    for (int i = 0; i < len; i++){
	txt[i] += hash;
    }
}
void password::unhashify(){
    size_t len = txt.length();
    hash = -hash;
    for (int i = 0; i < len; i++){
	txt[i] += hash;
    }
}
int main(){
    password p("\nhello\n");
    p.print();
    p->unhashify();
    p.print();
    return 0;
}

