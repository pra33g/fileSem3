/*
22  WAP to demonstrate the concept of ‘this’ pointer.
class.  
*/
#include <iostream>
#include <stdlib.h>
using namespace std;
class T{
    int x;
public:
    T(){
	x = 30;
    }
    void print(){
	cout << this->x;
    }
    
};
int main(){
    T t;
    t.print();
    return 0;
}
