#include<iostream>
#include<string>
#include<list>
using namespace std;

struct Employee{
string first_name,family_name;
int hiring_date;
short department;
};
struct Manager:public Employee
{
    list<Employee*> group;
    short level;
};
main()
{
}

void g(Manager mm,Employee ee)
{
 Employee *pe = &mm;
 Manager *pm = &ee;
pm = static_cast<Manager*>(pe);

pm->level=2;
}
