/*
32. Create two files “Country” and “Capitals”. Read values in both files using appropriate functions. Simultaneously read from both files an print countries along with their capitals.
*/
#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;
#define size 2
int main(){
    
    fstream
	country("country", ios::out | ios::trunc | ios::in ),
	capital("capital", ios::out | ios::trunc | ios::in );
    cout << "Enter " << size << " countries and capitals:\n";
    
    for (int i = 0; i < size; i++){
        string buf;
        cout << "Country: ";
        getline(cin, buf);
        country << buf << "\n";
        cout << "Capital: ";
        getline(cin, buf);
        capital << buf << "\n";
    }
    country.seekg(ios::beg);
    capital.seekg(ios::beg);
    string c, cc;
    while(getline(country, c) && getline(capital, cc)){
	    cout << c << " " << cc << endl;
    }
    country.close();
    capital.close();
    return 0;
}

