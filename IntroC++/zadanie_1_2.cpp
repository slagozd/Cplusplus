#include <iostream>
#include <string>

#define PI 3.14
#define AREA(r) (PI*(r)*(r))

using namespace std;

int main(){

int i = 2;

cout << i << " " <<AREA(i) << endl;
cout << i+1 << " " << AREA(i+1) << endl;
cout << i++ << " " << AREA(i++) << endl;
cout << ++i << " " << AREA(++i) << endl;


return 0;
}
