#include<iostream>
#include<cstdlib>
using namespace std;
class Test
{
    public:
    int i,j;
    Test();
    Test(int, int);
    ~Test();
    void setIJ(int , int);
    void setIJ(double , double);
    void *operator new(size_t size);
    void operator delete(void *p);


};
Test::Test()
{
    cout << "Constructor called \n";
}

Test::~Test()
{
   cout << "Destructor called\n";
}

Test::Test(int m, int n)
{
    i = m;
    j=n;
}
void Test::setIJ(int x, int y)
{
    cout << "set integer function is called \n";
    cout << x << " " << y << std::endl;
    i=x;
    j=y;
}

void Test::setIJ(double x, double y)
{
    cout << "set integer double function is called \n";
    cout << x << " " << y << std::endl;
    i=x;
    j=y;
}

void *Test::operator new(size_t size)
{
    cout << "Overloading new operator " << std::endl;
    void *p;
    p=malloc(size);
    return p;

}
void Test::operator delete(void *p)
{
   cout << "Overloading Delete operator " << std::endl; 
   free(p);
}

int main()
{
    //int x1, x2;
    //cin >> x1 >> x2;
    Test *testptr;
    testptr = new Test();
    testptr->setIJ(100,200);
    testptr->setIJ(100.25,90.15);
    delete(testptr);
  

return 0;
}
