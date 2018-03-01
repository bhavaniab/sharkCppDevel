#include<iostream>
using namespace std;
int main()
{
    int x;
    int y;
    cin >> x >> y;
    swap(x,y);
    cout << "The swapped x " << x << " the swapped y " << y << std::endl;

    return 0;
}

//pass the reference of the variable as an argument
// instead of the pointer 
void swap(int &a,int &b)
{
    int temp;
    temp = b;
    b = a;
    a=temp;
}
