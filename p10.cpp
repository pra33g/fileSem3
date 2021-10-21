/* 10  WAP to demonstrate the use of return by reference in a function. 
 */
#include <iostream>
#include <stdlib.h>
using namespace std;
struct s{
    int a = 20, b = 40;
    void display(){
	printf("\nPrinting struct values through <<\n a, b = %d, %d\n", a, b);
    }
};
ostream &operator<< (ostream &o, s obj){
    obj.display();
    return o;
}
int main(){
    cout <<" Return by reference is useful while overloading << operator. We return a reference to the left operand of type ostream.\n This in turn allows cascading of << operator.";
    s obj;
    cout << obj;
    return 0;
}
