#include <iostream>
#include <string>

using namespace std;

int main(){

int number, diff, div_count, range,j;

cout << "Give me a number: ";
cin >> number;
cout << "Dividers of a " << number << " are: ";

for (int i=1; i <= number; i++){

     diff = number%i;

    if (diff == 0){
        cout << i << " ";
    }
}

cout << endl;

cout << "Prime numbers from 1 to " << number << " are: ";

range = number;

for (int i=1; i <= range; i++){
    div_count = 0;
    for (j=1;j<=i;j++){
//        cout << "i = " << i << " j = " << j << endl;
        diff = i%j;
        if (diff == 0){
            div_count++;
        }

    }
    if (div_count == 2){
//        cout << "div count = " << div_count << " " << endl;
        cout << i << " ";
    }
}



cout << endl;

return 0;
}
