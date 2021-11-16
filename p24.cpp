/*
24 NEW.
WAP to demonstrate the concept of dynamic constructor and dynamic 
destructor using strings
*/
#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;
class ustring{
    char* txt;
    size_t size;
public:
    static const size_t MAX_STRINGSIZE = INT32_MAX;
    ustring(): txt(NULL), size(0){}
    ustring(const char* txt_){
	size = strnlen(txt_, MAX_STRINGSIZE);
	txt = new char[size]();
	strncpy(txt, txt_, size);
    }
    ~ustring(){
	if (txt) free(txt);
    }
    void dis(){
        cout << txt << endl;
    }
};
int main(){
    ustring s("hello");
    s.dis();
    return 0;
}

