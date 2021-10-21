/* 5  WAP to demonstrate the use of array of objects.
ng for calculating area 
 */
#include <iostream>
#include <stdlib.h>
using namespace std;
using namespace std;
struct student{
    string name;
    int rno;
    student(){
	cout << "Name: "; 
	cin >> name;
	cout << "Rno: ";
	cin >> rno;
    }
    void display(){
	cout << "Name: "<< name << ", Rno: "<< rno << endl; 
    }
};
int main(){
    cout << "Store and display the information of 5 students using array of objects\n";
    student s[5];
    for (int i = 0; i < 5; i++)
	s[i].display();
    return 0;
}


