#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int myArray[6]={1,2,3,4,5,6};
    int i;
    vector<int> myVec;
    for(i=0;i<5;i++)
        myVec.push_back(i);

    int newArray[6];
    for(int &x : myArray)
    {
        //newArray[x]=myArray[x] + 5;
        cout << x << std::endl;
    }
    cout << "Vector contents are " << std::endl;
    for(int &i : myVec)
    {
        //newArray[x]=myArray[x] + 5;
        cout << i << std::endl;
    }


    return 0;
}
