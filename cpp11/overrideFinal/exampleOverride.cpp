#include<iostream>
using namespace std;
class Base
{
    public:
        Base();
        ~Base();
        virtual void func(int );
};
//class Derived final:public Base
//final keyword is used when I don't want class derived
// to be inherited further
//class Derived final: public Base
class Derived:public Base
{
    public:
        int i,j;
        Derived();
        ~Derived();
        //Compiler indicates an error if the datatypes
        // are not matching. If override keyword is not
        //used, then the compiler does not find the implementation 
        // of the function in the derived class and calls the base
        //class virtual function. This is unique keyword in C++11
        virtual void func(double );
        //virtual void func(double ) override;
};
class Derived1:public Derived
{
    public:
        int x;
        Derived1();
        ~Derived1();
};
Base::Base()
{
    cout <<"constructing base " << std::endl;
}
Base::~Base()
{
    cout <<"Destroying base " << std::endl;
}
void Base::func(int i)
{
    cout << "base virtual func called " << std::endl;
    cout << i+10 << std::endl;
}

Derived::Derived()
{
    cout <<"constructing derived " << std::endl;
}
Derived::~Derived()
{
    cout <<"destroying derived " << std::endl;
}
void Derived::func(double i)
{
    cout << "derived virtual func called " << std::endl;
    cout << i+100 << std::endl;
}
Derived1::Derived1()
{
    cout <<"constructing derived1 " << std::endl;
}
Derived1::~Derived1()
{
    cout <<"destroying derived1 " << std::endl;
}




int main()
{
    Base *baseptr;
    Derived obj1;
    baseptr=&obj1;
    baseptr->func(5.256);


    return 0;
}
