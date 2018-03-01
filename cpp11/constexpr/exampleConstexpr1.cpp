#include<iostream>
#include<type_traits>
using namespace std;

/*
    constexpr, which allows the user to guarantee that a function 
    or object constructor is a compile-time constant
    Conditions:
    1.First, the function must have a non-void return type.
    2.Second, the function body cannot declare 
      variables or define new types.
    3.The body may contain only declarations, 
      null statements and a single return statement. 

*/

constexpr int getFive()
{
    return 5;
}
int main()
{
    int a[getFive() + 2];
    a[2]=5;
    cout << "a[2] " << a[2] << std::endl;
    return 0;
}
