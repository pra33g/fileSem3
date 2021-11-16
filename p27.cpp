/*
27 WAP to overload the operators >> and << for a class called string 
having appropriate members.
*/
#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;
class ustring{
    char* txt;
    size_t size;
public:
    static const size_t MAX_STRINGSIZE = INT32_MAX;
    ustring(): txt(NULL), size(0){}
    ustring(const char* txt_){
	size = strnlen(txt_, MAX_STRINGSIZE);
	size++;
	txt = new char[size]();
	strncpy(txt, txt_, size);
    }
    friend ostream& operator<< (ostream& out, ustring& u);
    friend istream& operator>> (istream& in, ustring& i);
    ustring operator+ (ustring& concat);
    ~ustring(){
	if (txt) {
	    //	    printf("\n(%s deleted)\n", txt);
	    free(txt);   
	}
    }
};

ostream& operator<< (ostream& out, ustring& u){
    if (u.txt) out << u.txt;
    else out << "(null)";
    return out;
}
istream& operator>> (istream& in, ustring& u){
    if (u.txt) {
	delete (u.txt);
	u.txt = NULL;
    }
    char buf[500];
    cin >> buf;
    if (strnlen(buf, ustring::MAX_STRINGSIZE) > 499){
	cout << "(Err:Too long string)";
	return in;
    }
    ustring *created = new ustring(buf);
    u.txt = created->txt;
    u.size = created->size;
    return in;
}
int main(){
    ustring u;
    cin >> u;
    cout << u << endl;
    cin >> u;
    cout << u;
    return 0;
}

