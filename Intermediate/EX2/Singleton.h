#ifndef SINGLETON_H_INCLUDED
#define SINGLETON_H_INCLUDED

#include <string>

using namespace std;

class Singleton
{
public:
    static Singleton& instance()
    {
        static Singleton singleton;
        return singleton;
    }
    void print(const string&);
private:
    Singleton() {}
    Singleton(const Singleton&) {}
    void operator= (const Singleton&) {}
    ~Singleton() {}
};


#endif // SINGLETON_H_INCLUDED
