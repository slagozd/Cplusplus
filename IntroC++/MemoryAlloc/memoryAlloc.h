#ifndef MEMORYALLOC_H_INCLUDED
#define MEMORYALLOC_H_INCLUDED

using namespace std;

struct Circle
{
    double r;
};

struct Rectangle
{
    double x;
    double y;
};


double average(int array[], const unsigned int &size);
Circle* create(const double&);
Rectangle* create(const double&, const double&);

void show(const Circle*);
void show(const Rectangle*);


#endif // MEMORYALLOC_H_INCLUDED
