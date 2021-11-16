/* 
33. WAP to read numbers in an array. 
Write the even and odd numbers 
into two different files using 
command line arguments.
*/
#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;

int main(int count, char* args[]) {
    if (count != 3){
	cout << "\nUsage ./program OddFile EvenFile\n";
	exit(0);
    }
    fstream
	odd (args[1], ios::out | ios::in | ios::trunc),
	even(args[2], ios::out | ios::in | ios::trunc);
    cout << "Stored odd numbers in " << args[1]
	 << " and even numbers in " << args[2];
    for (int i = 0; i < 50; i++){
	if (i % 2){
	    odd << i << " ";
	}
	else even << i << " ";
    }
    cout << "\nContents of odd file: \n";
    odd.seekg(ios::beg);
    even.seekg(ios::beg);
    int val = 0;
    while(odd >> val){
    	cout << val << " ";
    }
    cout << "\nContents of odd file: \n";
    val = 0;
    while(even >> val){
    	cout << val << " ";
    }
    odd.close();
    even.close();
    return 0;
}

