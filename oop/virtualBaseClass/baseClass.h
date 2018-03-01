#include<iostream>
using namespace std;

/*Defining Base class
*/

class BaseClass {
    public:
    int i,j;
    BaseClass();
    ~BaseClass();
        void setIJ(int ,int );
        void displayBaseClass();
};

/*Defining Derived Class*/

class d1:virtual public BaseClass{
    public:
    int d11,d12;
    d1();
    ~d1();
        void setD1(int ,int );
        void displayDerivedClass();
};

/*Defining Derived Class*/

class d2:virtual public BaseClass{
    public:
    int d21,d22;
    d2();
    ~d2();
        void setD2(int ,int );
        void displayDerivedClass();
};


class d3:public d1,public d2{
    
    public:
    int d31,d32;
    d3();
    ~d3();
        void setD3(int ,int );
        void displayDerivedClass();
};



