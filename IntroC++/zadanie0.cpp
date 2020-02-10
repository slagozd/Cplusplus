#include <iostream>
#include <string>

using namespace std;

int main(){

    int a=2;
    double half = 1/double(a);
    double *ptr = &half;
    double *prt2 = NULL;  // null typu pointerowego

    enum DAY {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
    };

    string name, name2;


    cout << "================================================================" << endl << endl;
    cout << endl;
    cout << "Half of a " << a << " is: " << half << endl;
    cout << endl;
    cout << "address is: " << &half << ", pointer equals: " << ptr <<  endl;
    cout << endl;
    cout << "value by pointer is: " << *ptr << endl;
    cout << endl;
    cout << "================================================================" << endl << endl;


    cout << "================================================================" << endl << endl;
    cout << "Is weekend yet?" << endl << endl;

    DAY day = Monday;

    if (day > Friday){
        cout << "Weekend!" << endl << endl;
    }
    else{
        cout << "NOT Weekend!" << endl << endl;
        cout << "It is " << day << endl << endl;

    }
    cout << "================================================================" << endl << endl;


    //INPUT

 //   cout << "What's your name?" << endl;

 //   cin >> name; //sczytuje do pierwszego bialego znaku

 //   cout << endl << "Hello " << name << endl << endl;

    cout << "What's your name?" << endl;
 //   cin >> name2;
    getline(cin, name2);
    cout << endl << "Hello " << name2 << endl << endl;



    return 0;
}
