/* 1 . WAP to store and display the details of a student using a structure.
 */
#include <iostream>
#include <string>
using namespace std;
struct student{
    string name;
    int rno;
    student(){
	cout << "Name: "; 
	cin >> name;
	cout << "\nRno: ";
	cin >> rno;
    }
    void display(){
	cout << "Name: "<< name << "\nRno: "<< rno << endl; 
    }
};
int main(){
    student s;
    s.display();
    return 0;
}
