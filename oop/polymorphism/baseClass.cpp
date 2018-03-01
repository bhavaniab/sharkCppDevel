#include "baseClass.h"
/*Defining methods of base and derived classes */
BaseClass::BaseClass()
{
    cout <<"BaseClass Constructor \n";
    i=0;
    j=0;
}

BaseClass::BaseClass(int x=0,int y=0)
          :i(x),
           j(y)
{
}
BaseClass::~BaseClass()
{
    cout << "BaseClass Destructor \n";
}

void BaseClass::setIJ(int m, int n)
{
    i=m;
    j=n;
}

void BaseClass::displayBaseClass()
{
    cout << "Displaying base class " << std::endl;
    cout << " i : " <<  i << std::endl;
    cout << " j : " <<  j << std::endl;
}

void BaseClass::displayDerived()
{
    cout << "****calling displayDerived from base class " << std::endl;
}


d1::d1()
{
    cout << "DerivedClass constructor d1" << std::endl;
}

d1::~d1()
{
    cout << "Derived class destructor d1" << std::endl;
}

void d1::setD1(int m, int n)
{
    d11=m;
    d12=n;
}

void d1::displayDerived()
{
    cout << "*****Displaying derived class d1 " << std::endl;
    //cout << " d11 : " <<  d11 << std::endl;
    //cout << " d12 : " <<  d12 << std::endl;
}


d2::d2()
{
    cout << "DerivedClass constructor d2" << std::endl;
}

d2::~d2()
{
    cout << "Derived class destructor d2" << std::endl;
}

void d2::setD2(int m, int n)
{
    d21=m;
    d22=n;
}

void d2::displayDerived()
{
    cout << "**** Displaying derived class d2 " << std::endl;
    //cout << " d21 : " <<  d21 << std::endl;
    //cout << " d22 : " <<  d21 << std::endl;
}


d3::d3()
{
    cout << "DerivedClass constructor d3" << std::endl;
}

d3::~d3()
{
    cout << "Derived class destructor d3" << std::endl;
}

void d3::setD3(int m, int n)
{
    d31=m;
    d32=n;
}

void d3::displayDerived()
{
    cout << "**** Displaying derived class d3 " << std::endl;
    //cout << " d31 : " <<  d31 << std::endl;
    //cout << " d32 : " <<  d32 << std::endl;
}


