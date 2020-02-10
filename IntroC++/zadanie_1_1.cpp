#include <iostream>
#include <string>

using namespace std;

int main(){

short s = 50;
int i = 100;
double d = 15.5;

cout << "short s: " << s << " | " << &s << " | " << sizeof(s) << endl;
cout << "int i: " << i << " | " << &i << " | " << sizeof(i) << endl;
cout << "double d: " << d << " | " << &d << " | " << sizeof(d) << endl << endl;

short *shortP = &s;
int *intP = &i;
double *doubleP = &d;

cout << "short s ptr: " << shortP << " | " << &shortP << " | " << sizeof(shortP) << endl;
cout << "int i ptr: " << intP << " | " << &intP << " | " << sizeof(intP) << endl;
cout << "double d ptr: " << doubleP << " | " << &doubleP << " | " << sizeof(doubleP) << endl << endl;

short &shortReference = s;
int &intReference = i;
double &doubleReference = d;

cout << "short s ref: " << shortReference << " | " << &shortReference << " | " << sizeof(shortReference) << endl;
cout << "int i ref: " << intReference << " | " << &intReference << " | " << sizeof(intReference) << endl;
cout << "double d ref: " << doubleReference << " | " << &doubleReference << " | " << sizeof(doubleReference) << endl << endl;



return 0;
}
