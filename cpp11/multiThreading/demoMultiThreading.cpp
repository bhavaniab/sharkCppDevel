#include<thread>
#include<iostream>
using namespace std;
void showMessage()
{
    cout << "Welcome to Multithreading " << std::endl;
}


int main()
{
    //Create the thread myThread and attach
    //Thread function to the thread
    thread myThread(showMessage);
    //If the thread is not joined to the 
    //function, then the thread does not wait for 
    // the function to finish and terminates early which 
    // causes errors in the code. 
    if(myThread.joinable())
    {
        myThread.join();
    }
    
    return 0;
}
