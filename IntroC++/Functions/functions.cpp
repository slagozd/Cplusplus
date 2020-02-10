#include <iostream>
#include <string>

using namespace std;
typedef unsigned int u32;



void value(int i){
    cout << "int i: " << i << " | " << &i << " | " << sizeof(i) << endl;
    ++i;
    cout << "int i: " << i << " | " << &i << " | " << sizeof(i) << endl;
}

void val_by_refer(int &i){
    cout << "int i: " << i << " | " << &i << " | " << sizeof(i) << endl;
    ++i;
    cout << "int i: " << i << " | " << &i << " | " << sizeof(i) << endl;
}

u32 maximum(const u32 &i, const u32 &j, const u32 &k){

    int max_num = 0;

    if(i>j){
        max_num = i;
    }else{
        max_num = j;
    }

    if(max_num<k){
        max_num = k;
    }

return max_num;
}

int sizeBits(int i){

return sizeof(i);

}
int sizeBits(float f){

return sizeof(f);

}
int sizeBits(double d){

return sizeof(d);

}
int sizeBits(char c){

return sizeof(c);

}
int sizeBits(short sh){

return sizeof(sh);

}


