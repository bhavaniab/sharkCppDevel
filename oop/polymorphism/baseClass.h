#include<iostream>
using namespace std;

/*Defining Base class
*/

class BaseClass {
    public:
    //base class with lot of variables. 
    int i,j;
    BaseClass();
    BaseClass(int x,int y);
    ~BaseClass();
        void setIJ(int ,int );
        void displayBaseClass();
        virtual void displayDerived();
};



/*Defining Derived Class*/


class d1:public BaseClass{
    public:
    int d11,d12;
    d1();
    ~d1();
        void setD1(int ,int );
        void displayDerived();
};

/*Defining Derived Class*/

class d2:public BaseClass{
    public:
    int d21,d22;
    d2();
    ~d2();
        void setD2(int ,int );
        void displayDerived();
};


class d3:public BaseClass{
    
    public:
    int d31,d32;
    d3();
    ~d3();
        void setD3(int ,int );
        void displayDerived();
};



