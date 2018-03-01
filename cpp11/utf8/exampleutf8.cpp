#include<iostream>
using namespace std;
int main()
{
    //int *a = NULL;
    //char *b = NULL;
    //bool e = NULL;
    //callFunction(a);
    //callFunction(b);
    const char* str = u8"HEELLO\u3042";
    cout << str << std::endl;

    return 0;
}
