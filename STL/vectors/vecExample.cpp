#include<iostream>
#include <vector>
using namespace std;
int main()
{

    std::vector<int> myVec1;
    std::vector<int> myVec2;
    std::vector<int>::iterator iter;
    int i;
    const int vecSize1=5;
 
    //push back pushes values into vector
    for(i=0;i<vecSize1;i++)
        myVec1.push_back(i+1);

    myVec2.resize(5);
    for(i=0;i<vecSize1;i++)
        myVec2[i]=i+5;
    //size returns the size of a vector. 
    std::cout << "Size is :" << myVec1.size() << std::endl;

    //Returns the front of a vector
    std::cout << "Front is " << myVec2.front() << std::endl;

    //Returns the back of a vector
    std::cout << "Back is " << myVec2.back() << std::endl;



    //Print the elements of the vector 1 using iterator
    for(iter=myVec1.begin();iter!=myVec1.end();++iter)
        std::cout << *iter << " " ;

    std::cout << std::endl;

    for(iter=myVec2.begin();iter!=myVec2.end();++iter)
        std::cout << *iter << " " ;

    std::cout << "size: " << (int) myVec1.size() << '\n';
    std::cout << "capacity: " << (int) myVec1.capacity() << '\n';
    std::cout << "max_size: " << (int) myVec1.max_size() << '\n';



    std::cout << std::endl;
    
   return 0;
}
