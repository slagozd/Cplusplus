#include <iostream>
#include <cstdlib>
#include <ctime>
#include "memoryAlloc.h"

using namespace std;

int main()
{

    int size;

    cout << "Give me a tab size: ";
    cin >> size;

    srand (time(NULL));
    unsigned short random;

    int *p = new int[size];

    for (int i=0;i<size;i++){
        random = rand() % 101;
        p[i] = random;
    }

    cout << "Print tab p = [ ";

    for (int i=0;i<size;i++){
        cout << p[i] << ", ";
    }

    cout << "]" << endl << endl;

    cout << "Average of tab values: " << average(p,size) << endl << endl;

    cout << "Address of the last element: " << &p[size-1] << ", value: " << p[size-1] << endl << endl;

    cout << "Address of the first element: " << &p << ", value: " << *p << endl << endl;

    cout << "Print tab after AVERAGE p = [ ";

    for (int i=0;i<size;i++){
        cout << p[i] << ", ";
    }
    cout << "]" << endl << endl;

    Circle *cir = create(4.0);
    Rectangle *rect = create(4.5,6.7);

    show(cir);
    show(rect);

    delete cir;
    delete rect;



    return 0;
}
