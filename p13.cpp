/* 13  WAP to demonstrate the concept of dynamic initialization using fixed
deposit class having appropriate members.
 */
#include <iostream>
#include <stdlib.h>
using namespace std;
class fd{
    float r, ret;
    int y;
    void calcFD(){
	for (int i = 0; i < y; i++){
	    ret *= (1+r);
	}
    }
public:
    fd(float p_, float r_, int y_){
	ret = p_;
	r = r_;
	y = y_;
	calcFD();
    }
    void printFD(){
	cout << "FD is: " << ret << endl;
    }
};
int main(){
    float p, r;
    int y;
    cout << "Enter principal, rate and years: ";
    cin >> p >> r >> y;
    cout << "\n Object created during runtime with the required values.\n";
    fd f(p,r,y);
    f.printFD();
    return 0;
}
