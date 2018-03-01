#include<iostream>
using namespace std;
int main()
{
    //int *a = NULL;
    //char *b = NULL;
    //bool e = NULL;
    //callFunction(a);
    //callFunction(b);
    //const char* str = u8"HEELLO\u3042";
    //cout << str << std::endl;
    enum day
    {
        SUNDAY=0,  
        //SATURDAY=0,
        MONDAY,
        TUESDAY,
        WEDNESDAY,
        THURSDAY,
        FRIDAY
        //SATURDAY
    };
    enum weekend
    {
        SATURDAY=0,
        SUNDAY
    };

    weekend myDay=weekend::SUNDAY;
    if((myDay==weekend::SATURDAY) || (myDay==weekend::SUNDAY))
        cout << "enjoy your weekend \n";

    return 0;
}
