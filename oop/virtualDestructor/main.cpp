#include<iostream>
using namespace std;
#include "baseClass.h"
int main()
{
    //int sum=0;
     // derivedObjectFirst;
    //Base class ptr can point to derived class object. 
    BaseClass *basePtr;
//    BaseClass baseObj;
    d1 d1obj;
//    d2 d2obj;
 //   d3 d3obj;
    basePtr = &d1obj;
    //basePtr = &baseObj;
    basePtr->displayDerived();
    delete(basePtr);    

    //basePtr->setIJ(10,100);
    //basePtr->displayBaseClass();    
    


    return 0;
}
