/*
26 WAP to overload the operators +, >, < for a class called string having appropriate members.
 */
#include <cstdint>
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
	size++;
	txt = new char[size]();
	strncpy(txt, txt_, size);
    }
    friend ostream& operator<< (ostream& out, ustring& u);
    ustring operator+ (ustring& concat);
    ~ustring(){
	if (txt) {
	    //	     printf("\n(%s deleted)\n", txt);
	    free(txt);   
	}
    }
    bool operator> (ustring& cmp);
    bool operator< (ustring& cmp);
};

ostream& operator<< (ostream& out, ustring& u){
    if (u.txt) out << u.txt;
    else out << "(null)";
    return out;
}
bool ustring::operator< (ustring& cmp){
    size_t cmpsize = (size < cmp.size) ? size : cmp.size;
    for (int i = 0; i < cmpsize-1; i++){
	if (txt[i] == cmp.txt[i]) continue;
	return ((txt[i] < cmp.txt[i] ) ?  true :  false);
    }
    return false;
}
bool ustring::operator> (ustring& cmp){
    if (*this < cmp) return false;
    else return true;
}
ustring ustring::operator+ (ustring& concat){
    char *buf = new char[size + concat.size - 1];
    strncpy(buf, txt, size);
    strncat(buf, concat.txt, concat.size);
    ustring ret(buf);
    free(buf);
    return ret;
}
int main(){
    ustring s("hello"), ss("hi");
    ustring added = s + ss;
    cout << added << endl;
    if (s < ss) cout << "'" <<s << "' is lesser than '" << ss << "'\n";
    else cout << "'" <<s << "' is greater than '" << ss << "'\n"; 
    return 0;
}

