#include<iostream>
using namespace std;
class myClass
{
    public:
        int x,y;
        myClass();
        ~myClass();
};

myClass::myClass()
{
    cout << "constructor called" << std::endl;
}

myClass::~myClass()
{
    cout << "destructor called" << std::endl;
}

//Declaration of trailing return types in C++11
template<typename T, typename U>
auto add(T t, U u) -> decltype(t + u) // return type depends on template parameters
{
    return t+u;
}
int main()
{
    int var1;
    double k;
    decltype(var1) var2;
    myClass obj1;
    decltype(obj1) obj2;
    obj2.x=5;
    obj2.y=20;
    //cout << decltype(var1) << std::endl;
    k=add(2.4,5.7);
    cout << k << std::endl;
    return 0;

}
