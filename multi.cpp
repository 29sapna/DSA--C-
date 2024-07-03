#include<iostream>
using namespace std;
class person
{
    protected:
    string name;

    public:
    void intro(){
        cout<<"my name  is: "<<name<<endl;
    }
};
class Employee: public person{
    protected:
    int salary;

    public:
    void month_salary()
    {
        cout<<"My monthly salary: "<<salary<<endl;
    }
};
class Manager: public Employee{
    public:
    string department;

    Manager(string name, int salary, string department)
    {
        this->name=name;
        this->department=department;
        this->salary=salary;
    };

    void work(){
        cout<<"I am leading the department"<<department<<endl;
    }
};
int main(){
    Manager A1("Sapna",3000,"Finance");
    A1.month_salary();
    A1.intro();

}