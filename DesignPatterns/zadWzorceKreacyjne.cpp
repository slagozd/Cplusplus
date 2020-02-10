#include <iostream>
#define PRINT(X) std::cout << X << std::endl

enum TOYTYPE{
    Barbie,
    TalkingDoll,
    RcCar,
    SpringCar
};

class Toy{

public:
    virtual void play()=0;

};

class Doll: public Toy{

    std::string hairColor;

public:

    virtual void play(){
        PRINT("Playing with Doll");
    }

};

class Car: public Toy{
    std::string carColor;

public:

    virtual void play(){
        PRINT("Playing with Car");
    }
};

class Barbie: public Doll{
public:

    virtual void play(){
        PRINT("Playing with Barbie Doll");
    }
};

class TalkingDoll: public Doll{

public:

    virtual void play(){
        PRINT("Playing with Talking Doll");
    }

};

class SpringCar: public Car{

    public:

    virtual void play(){
        PRINT("Playing with Spring Car");
    }

};

class RcCar : public Car{

    public:

    virtual void play(){
        PRINT("Playing with RC Car");
    }


};


class ToyFactory{
public:

    virtual Toy* createToy(TOYTYPE) = 0;

};

class DollFactory: public ToyFactory{
    Toy *doll;
public:
    virtual Toy* createToy(TOYTYPE type){

        if(type == 0){

            doll = new Barbie();

        }else if(type == 1){

            doll = new TalkingDoll;

        }

        return doll;

    }

};

class CarFactory: public ToyFactory{
    Toy *car;
public:
    virtual Toy* createToy(TOYTYPE type){

        if(type == 3){

            car = new RcCar();

        }else if(type == 4){

            car = new SpringCar();

        }


        return *doll;

    }
};


int main()
{

PRINT("Hello");

return 0;

}


//Zrobione przez instruktora

//#include<iostream>
//using std::cout;
//using std::endl;
//
//
//class Zabawka
//{
//    public:
//        virtual void zabawa() = 0;
//        virtual ~Zabawka(){}
//};
//
//class Lalka : public Zabawka
//{
//    public:
//        virtual ~Lalka(){}
//};
//
//class Autko : public Zabawka
//{
//    public:
//        virtual ~Autko(){}
//};
//
//class Sprezynowe : public Autko
//{
//    public:
//        virtual void zabawa() override
//        {
//            cout << "Autko sprezynowe" << endl;
//        }
//        virtual ~Sprezynowe(){}
//
//};
//
//class Sterowane : public Autko
//{
//    public:
//        virtual void zabawa() override
//        {
//            cout << "Autko sterowane" << endl;
//        }
//        virtual ~Sterowane(){}
//
//};
//
//
//class Barbie : public Lalka
//{
//    public:
//        virtual void zabawa() override
//        {
//            cout << "Lalka Barbie" << endl;
//        }
//        virtual ~Barbie(){}
//
//};
//
//class Gadajaca : public Autko
//{
//    public:
//        virtual void zabawa() override
//        {
//            cout << "Lalka gadajaca" << endl;
//        }
//        virtual ~Gadajaca(){}
//
//};
//
//class Fabryka
//{
//    public:
//        virtual Zabawka* stworzZabawke(int) = 0;
//        virtual ~Fabryka(){};
//};
//
//class FabrykaLalek : public Fabryka
//{
//    public:
//
//        virtual Zabawka* stworzZabawke(int r)
//        {
//            if(r == 0)
//                return new Barbie();
//            else if(r == 1)
//                return new Gadajaca();
//            else
//                return nullptr;
//
//        }
//
//        virtual ~FabrykaLalek(){};
//};
//
//
//class FabrykaAutek : public Fabryka
//{
//    public:
//
//        virtual Zabawka* stworzZabawke(int r)
//        {
//            if(r == 0)
//                return new Sprezynowe();
//            else if(r == 1)
//                return new Sterowane();
//            else
//                return nullptr;
//
//        }
//
//        virtual ~FabrykaAutek(){};
//};
//
//class FabrykaZabawek
//{
//    public:
//
//        virtual Zabawka* stworzZabawke(bool, int) = 0;
//        virtual ~FabrykaZabawek(){};
//};
//
//
//class KomboFabrykaZabawek : public FabrykaZabawek
//{
//    public:
//
//        virtual Zabawka* stworzZabawke(bool rodzaj, int typ)
//        {
//            /*
//            rodzaj
//                true -> auto
//                false -> lalka
//            */
//            Fabryka* f = nullptr;
//            if(rodzaj)
//                f = new FabrykaAutek();
//            else
//                f = new FabrykaLalek();
//
//            return f->stworzZabawke(typ);
//
//        }
//        virtual ~KomboFabrykaZabawek(){};
//};
//
//int main()
//{
//    Fabryka* f = new FabrykaLalek();
//    Zabawka* z = f->stworzZabawke(0);
//
//    if(z)
//        z->zabawa();
//
//    f = new FabrykaAutek();
//    z = f->stworzZabawke(0);
//
//    if(z)
//        z->zabawa();
//
//
//    FabrykaZabawek* fz = new KomboFabrykaZabawek();
//    z = fz->stworzZabawke(false, 1);
//
//    if(z)
//        z->zabawa();
//
//
//    return 0;
//}


