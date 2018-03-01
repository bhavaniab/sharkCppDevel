#include<iostream>
#include <list>
using namespace std;
int main()
{

    std::list<int> myList1;
    std::list<int> myList2;
    std::list<int>::iterator iter;
    int i;
    const int listSize1=10;
 
    //push back pushes values into list
    for(i=0;i<listSize1;i++)
        myList1.push_back(i*100);

    //size returns the size of a list. 
    std::cout << "Size is :" << myList1.size() << std::endl;

    //Returns the front of a list
    std::cout << "Front is " << myList1.front() << std::endl;

    //Returns the back of a list
    std::cout << "Back is " << myList1.back() << std::endl;



    //Print the elements of the list 1 using iterator
    for(iter=myList1.begin();iter!=myList1.end();++iter)
        std::cout << *iter << " " ;
    
     myList1.pop_front();

    std::cout << std::endl << "Popped list is " << std::endl;
    for(iter=myList1.begin();iter!=myList1.end();++iter)
        std::cout << *iter << " " ;


     myList1.reverse();

    std::cout << std::endl << "Reveresed list is " << std::endl;
    for(iter=myList1.begin();iter!=myList1.end();++iter)
        std::cout << *iter << " " ;

    std::cout << std::endl;

    for(iter=myList2.begin();iter!=myList2.end();++iter)
        std::cout << *iter << " " ;

    std::cout << "size: " << (int) myList1.size() << '\n';



    std::cout << std::endl;
    
   return 0;
}
