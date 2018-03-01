#include<iostream>
using namespace std;

int getFive()
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
