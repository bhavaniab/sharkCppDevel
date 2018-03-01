#include<iostream>
using namespace std;
#include "baseClass.h"
int main()
{
    int sum=0;
    //DerivedClass derivedObjectFirst;
    //Base class ptr can point to derived class object. 
    //BaseClass *basePtr;
    //basePtr->setIJ(10,100);
    //basePtr->displayBaseClass();    
    

    d3 d3obj;

    d3obj.setD2(20,200);
    d3obj.setD1(30,300);
    //can be solved using scope resolution operator. 
    //d3obj.d1::i=10;
    d3obj.i=10;
    d3obj.setIJ(10,100);

    sum = d3obj.i + d3obj.d21 + d3obj.d11;
    //can be solved using scope resolution operator 
    //sum = d3obj.d1::i + d3obj.d21 + d3obj.d11;

    cout << "sum : " << sum << std::endl;
    //Derived Class ptr cannot point to base class object
    //BaseClass baseObj;
    //DerivedClass *derivedPtr;
    //derivedPtr =&baseObj;
    //DerivedClass derivedObjectSecond;
    //derivedObjectFirst.setXY(10,100);
    //derivedObjectFirst.setIJ(30,300);
    //derivedObjectFirst.displayBaseClass();
    //derivedObjectSecond.setXY(20,200);
    
    //derivedObjectFirst.displayDerivedClass();
    //derivedObjectSecond.displayDerivedClass();

    return 0;
}
