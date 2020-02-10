#ifndef OPERATORS_H_INCLUDED
#define OPERATORS_H_INCLUDED

struct Vector
{
    double dx, dy;

    Vector add(const Vector&);
};


#endif // OPERATORS_H_INCLUDED
