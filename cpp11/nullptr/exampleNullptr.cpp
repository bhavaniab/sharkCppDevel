#include<iostream>
using namespace std;
void callFunction(int  )
{
    cout << "In Integer function " << std::endl;
}
void callFunction(char * )
{
    cout << "In Character function " << std::endl;
}

int main()
{
    //int *a = NULL;
    //char *b = NULL;
    //bool e = NULL;
    //callFunction(a);
    //callFunction(b);
    callFunction(NULL);

    return 0;
}
