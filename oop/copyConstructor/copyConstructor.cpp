#include<iostream>
using namespace std;
class Test
{
    public:
    int i,j;
    Test();
    ~Test();
    void setIJ(int , int);
    Test(const Test &testB);

};
Test::Test()
{
    cout << "Constructor called \n";
    i = 0;
    j=0;
}

Test::~Test()
{
   cout << "Destructor " << i << " " << j << std::endl;
}

Test::Test(const Test &testB)
{
    cout <<"Copy constructor " << std::endl;
    i=1000;
    j=1000;

}


void Test::setIJ(int x, int y)
{
    cout << "set function called ";
    cout << x << " " << y << std::endl;
    i=x;
    j=y;
}

int main()
{
    int x1, x2;
    Test testA;
    testA.setIJ(1,1);
    Test testB= testA; 
return 0;
}
