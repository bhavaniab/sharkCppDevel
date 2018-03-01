#include<iostream>
using namespace std;
class myClass
{
    public:
    int x,y;
    myClass(int , int);
    static int staticVar;
    void show();
};
myClass::myClass(int a, int b)
{
    x=a;
    y=b;
    staticVar=staticVar+1;
}
int myClass::staticVar;
void myClass::show()
{
   cout << x << " " << y << " " << staticVar << std::endl;
}
int main()
{
    myClass cl1(100,200);
    cl1.show();
    myClass cl2(200,300);
    cl2.show();
    myClass cl3(1000,2000);
    cl3.show();
    return 0;
}
