#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

template <typename Data, int size> class Stack{
    Data *data;
    int top;
public:
    Stack();
    bool isEmptyStck();
    void push(Data);
    Data pop();
    ~Stack();
};

//Constructor
template <typename Data, int size> Stack<Data,size>::Stack(){
    data = new Data[size];
    top=0;
}

template <typename Data, int size> void Stack<Data,size>::push(Data _data)
{
    if(top < (size-1)){
        data[top]=_data;
        top++;
    }else{
        cout << "Stack is full"<<endl<<endl;
    }
}
template <typename Data, int size> Data Stack<Data,size>::pop(){
    if(top!=0)
    {
        Data d;
        d = data[top];
        top--;
        return d;
    }else{
        cout << "Stack is empty, no element to pop"<<endl<<endl;
    }
}

template <typename Data, int size> bool Stack<Data,size>::isEmptyStck(){
    if(top=0){
        return true;
    }else{
        return false;
    }
}


template <typename Data, int size> Stack<Data,size>::~Stack(){
    delete data;
}

int main()
{

   Stack<string,5> stck;

    stck.push("Hello");
    stck.push("my");
    stck.push("little");
    stck.push("friend");
    stck.push("!");

//    delete stck;
    while( !stck.isEmptyStck() )
    {
        cout<<stck.pop()<<" ";
    }






    return 0;
}
