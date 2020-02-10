#include "memoryAlloc.h"
#include <iostream>

using namespace std;

double average(int array[], const unsigned int &size)
{
    double sum = 0;
    for (unsigned int i = 0; i < size; ++i)
    {
        sum += array[i];
    }
    delete[] array;
    return sum / size;
}

Circle* create(const double &radius){

    Circle *circle = new Circle;

    circle->r = radius;

    return circle;
}

Rectangle* create(const double &width, const double &height){

    Rectangle *rectangle = new Rectangle;

    rectangle->x = width;
    rectangle->y = height;

    return rectangle;
}

void show(const Circle *circle){

    cout << "Radius of the circle: " << circle->r << endl <<endl;

}

void show(const Rectangle *rect){

    cout << "Rectangle parameters: " << endl <<endl;
    cout << "Width: "<< rect->x << endl;
    cout << "Height: "<< rect->y << endl << endl;

}
