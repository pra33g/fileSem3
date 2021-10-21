/* 9  WAP where you have two classes, “first” and “second”, each class has one
integer value as its data member. Class “first” is a friend class of class
“second” and vice versa. WAP to input values of both data members
through member functions of  st class display both the values through
member function of  nd class.
 
 
 */
#include <iostream>
#include <stdlib.h>
using namespace std;
class second;
class first{
    int f;
    friend class second;
public:
    int getDat(){return f;}
    void inputFS(second &);
};
class second{
    int s;
    friend class first;
public:
    int getDat(){return s;}
    void printFS(first &f);
};
void first::inputFS(second &X) { cin >> f >> X.s; }
void second::printFS(first &F) { cout << "first::f = " <<F.f << "\nsecond::s = " << s; }
int main(){
    first f;
    second s;
    cout << "Enter first::f and second::s through first::getFS(second &):\n";
    f.inputFS(s);
    cout << "Printing both through second::printFS(first &)\n";
    s.printFS(f);
    cout << endl;
    return 0;
}
