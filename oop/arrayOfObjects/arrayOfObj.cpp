#include<iostream>
using namespace std;
#include "arrayOfObj.h"
simpleClass::simpleClass()
{
    cout << "constructor" << std::endl;
}

simpleClass::~simpleClass()
{
    cout << "Destructor" << std::endl;
}

void simpleClass::setIJ(int x, int y)
{
    i=x;
    j=y;
}
int simpleClass::getI()
{
    return i;
}

int simpleClass::getJ()
{
    return j;
}
