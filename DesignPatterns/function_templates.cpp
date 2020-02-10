#include <iostream>
#define PRINT(X) std::cout << X << std::endl

void show_float(float f){

PRINT("float: "<< f);

}

//to not create many implementations of function above we can create template like below:

template <typename T> void show(T f){

PRINT(f);

}

template <typename T> T func(T value){

    PRINT("v:"<<value);
    return value;

}

template <typename T, class U> U func1(T value, U value1){//zamiast template mozna uzyc class w <>

    PRINT("v:"<<value);


    return value1;

}


int main()
{

PRINT("Hello");

show_float(7.9);
//nie trzeba juz nawiasow <> ale mozna

show<int>(5);
show(45.67);
show("one");

PRINT("");

int v = func(6);
float f = func(6.6);
std::string s = func("top");

PRINT("");

v = func1 (5.0,3);
f = func1 ("czesc", 9.7);
s = func1 (45.998, "cool");

PRINT(v << " " << f << " " << s);

return 0;

}
