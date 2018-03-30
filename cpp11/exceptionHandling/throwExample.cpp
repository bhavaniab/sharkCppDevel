#include<iostream>
using namespace std;
int divideIntegers(int x, int y)
{
    try
    {
        if(y==0)
            throw 100;
        return x/y;
    }
    catch(int errorCode)
    {
        cout << "ERROR: There has been an error in the division with code " << errorCode << std::endl;
    }
}
int main()
{
    int x,y,z;
    cout << "Enter two numbers " << std::endl;
    cin >> x >> y;
    z=divideIntegers(x,y);
    cout << x << "/" << y << " is " << z << std::endl;

    return 0;
}
