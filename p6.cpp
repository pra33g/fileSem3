/* 6  WAP to add two time objects where the data members are hours,
minutes, seconds make use of validation check while entering the time.
 */
#include <iostream>
#include <stdlib.h>
using namespace std;
class T{
    int h,m,s;
public:
    T(int h_, int m_, int s_ ){
	
	h = h_;
	m = m_;
	s = s_;    
	if (!validateInput()){
	    cout << "Object creation failed. Please check whether the following limits are respected:\n m < 60 && m >= 0 &&\n s >= 0 && s < 60 &&\n h >= 0\n";
	    exit(1);
	}
	
    }
    bool validateInput(){
	if (m < 60 && m >= 0 && s >= 0 && s < 60 && h >= 0)
	    return true;
	else
	    return false;
    }
    void display(){
	printf("%02d:%02d:%02d\n", h, m, s);
    }
    T operator+ (T add){
	int rh = 0, rm = 0, rs = 0;
	int rem;

	rs = s + add.s;
	if (rs >= 60){
	    rm += rs / 60;
	    rs %= 60;
	}
	rm += m + add.m;
	if (rm >= 60){
	    rh += rm / 60;
	    rm %= 60;
	}
	rh += h + add.h;
        T ret(rh, rm, rs);
	return ret;
    }
};
int main(){
    cout << "Enter time for obj1: (format hh:mm:ss)\n";
    int h,m,s;
    scanf("%d:%d:%d", &h, &m, &s);
    T obj1(h, m, s);
    cout << "Enter time for obj2: (format hh:mm:ss)\n";
    scanf("%d:%d:%d", &h, &m, &s);
    T obj2(h, m, s);
    cout << "Added time: ";
    T sum = obj1 + obj2;
    sum.display();
    return 0;
}
