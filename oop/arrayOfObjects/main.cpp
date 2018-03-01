#include<iostream>
using namespace std;
#include "arrayOfObj.h"
int main()
{
    simpleClass myClass[3];
    //Pointer to the class
    simpleClass *p;
    //Base class pointer points to the base address 
    // of the array of objects
    p=myClass;
    p=&myClass[0];
    int k;
    for(k=0;k<3;k++)
    {
        //myClass[k].setIJ(k*100, (k+5)*100);
        //alternative method using array of objects
        p->setIJ(k*100,(k+5)*100);
        p++;
    }
    cout << "Values of i are \n";
    p=myClass;
    for(k=0;k<3;k++)
    {
        //cout << myClass[k].getI() << std::endl;
        //alternative method using array of objects
        cout << p->getI() << std::endl;
        p++;
 
    }
    cout << "Values of j are \n";
    p=myClass;
    for(k=0;k<3;k++)
    {
        //cout << myClass[k].getJ() << std::endl;
        //alternative method using array of objects
        cout << p->getJ() << std::endl;
        p++;
    }

return 0;


}
