#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

typedef unsigned int u32;

void value(int i);
void val_by_refer(int &);
u32 maximum(const u32&, const u32&, const u32&);

int sizeBits(int i);
int sizeBits(float f);
int sizeBits(double d);
int sizeBits(char c);
int sizeBits(short sh);




#endif // FUNCTIONS_H_INCLUDED
