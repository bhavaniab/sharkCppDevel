#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    std::map<int,std::string> employee;
    int empId;
    std::string employeeName;
    map<int,std::string>::iterator iter;

    //Associating a name of an employee to the employee ID 
    employee[500]="Roger";
    employee[501]="Sarah";
    employee[502]="Vishnu";
    employee[503]="Mike";
    employee[504]="Maria";

    for(iter=employee.begin();iter!=employee.end();++iter)
        cout << iter->first << "->" << iter->second << std::endl;

   //find in map
   iter=employee.find(500);
   cout << "employee name is " << iter->second << std::endl;
   employee.erase(iter);

   cout << std::endl << "Employee list is " << std::endl;

   for(iter=employee.begin();iter!=employee.end();++iter)
       cout << iter->first << "->" << iter->second << std::endl;


    //Inserting names into the map 

    employee.insert (std::pair<int,std::string>(505,"Vijay"));
    employee.insert (std::pair<int,std::string>(506,"Prabhakar"));

   cout << std::endl << "Employee list is " << std::endl;

   for(iter=employee.begin();iter!=employee.end();++iter)
       cout << iter->first << "->" << iter->second << std::endl;



   return 0;
}
