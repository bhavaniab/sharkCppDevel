#include<iostream>
using namespace std;
class Employee
{
    public:
        int employeeID;
        std::string employeeName;
        long long int employeeSSN;
        int hourlyRate;
        Employee();
        ~Employee();
        virtual void displayDetails();
        virtual void calculateSalary(int );
};
//class Manager final:public Employee
//final keyword is used when I don't want class derived
// to be inherited further
//class Manager final: public Employee
class Manager:public Employee
{
    public:
        int numberOfReportees;
        Manager();
        ~Manager();
        //Compiler indicates an error if the datatypes
        // are not matching. If override keyword is not
        //used, then the compiler does not find the implementation 
        // of the calculateSalarytion in the derived class and calls the base
        //class virtual calculateSalarytion. This is unique keyword in C++11
        virtual void calculateSalary(double );
        virtual void displayDetails();
        //virtual void calculateSalary(double ) override;
};
class Manager1:public Manager
{
    public:
        int x;
        Manager1();
        ~Manager1();
};
Employee::Employee()
{
    cout <<"constructing base " << std::endl;
}
Employee::Employee(name,id,snn)
{
    employeeName=name;
    employeeID=id;
    employeeSSN=ssn;
}
Employee::~Employee()
{
    cout <<"Destroying base " << std::endl;
}
void Employee::displayDetails()
{
    cout << "Employee Name is " << employeeName << std::endl;
    cout << "Employee ID is   " << employeeID << std::endl;
    cout << "Employee SSN is " << ssn << std::endl;
}
void Employee::calculateSalary(int hours)
{
    int hourlyRate=40;
    int salary;
    salary=hourlyRate*hours; 
    cout << "Salary calculated is  " << salary << std::endl;
}

Manager::Manager()
{
    cout <<"constructing derived " << std::endl;
}
Manager::Manager(name,id,snn,reportees)
{
    employeeName=name;
    employeeID=id;
    employeeSSN=ssn;
    numberOfReportees=reportees;
}
Manager::~Manager()
{
    cout <<"destroying derived " << std::endl;
}
void Manager::calculateSalary(double hours)
{
    int hourlyRate=70;
    double salary;
    salary=hourlyRate*hours;
    cout << "Salary Calculated is  " << salary << std::endl;
}
void Manager::displayDetails()
{
    cout << "Manager Name is " << employeeName << std::endl;
    cout << "Manager ID is   " << employeeID << std::endl;
    cout << "Manager SSN is " << ssn << std::endl;
    cout << "Number of reportees is " << numberOfReportees << std::endl;
}


int main()
{
    Employee *employee1;
    Manager obj1;
    baseptr=&obj1;
    baseptr->calculateSalary(5.256);


    return 0;
}
