/* 4  WAP to demonstrate the use of function overloading for calculating area
of square, rectangle, circle, and triangle (without class).
 
 
 */
#include <iostream>
#include <stdlib.h>
// sq
int area(int side){
    return side*side;
}
// tri
float area(float height, float base){
    return base * height * 0.5;  
}
// circle
float area(float radius){
    #define PI 3.14
    return PI * radius * radius;
}
// rec
int area(int length, int breadth){
    return length * breadth;
}
using namespace std;
int main(){
    int dim1,dim2;
    float dimf1, dimf2;
    cout << "Enter square side: ";
    cin >> dim1;
    cout << area(dim1) << endl;
    cout << "Enter rectangle side: ";
    cin >> dim1 >> dim2;
    cout << area(dim1, dim2) << endl;
    cout << "Enter circle radius: ";
    cin >> dimf1;
    cout << area(dimf1) << endl;
    cout << "Enter triangle base and height: ";
    cin >> dimf1 >> dimf2;
    cout << area(dimf1, dimf2) << endl;
    return 0;
}
