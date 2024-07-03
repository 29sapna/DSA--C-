#include<iostream>
using namespace std;
class Human{

    string Religion, color;
    public:
    string name;
    int age,weight;

    public:
    Human(){

    };

    
};
class Student:protected Human
{
    private:
    int roll_no, fees;

    public:
    Student(string name, int age, int weight, int roll_number, int fees)
    {
        this->name=name;
        this->age=age;
        this->weight=weight;
        this->roll_no=roll_no;
        this->fees=fees;
    }
    // void fun(string n, int a, int w)
    // {
    //     name =n;
    //     age = a;
    //     weight= w;
    // }
    void display()
    {
        cout<<name<<" "<<age<<" "<<weight<<" "<<roll_no<<" "<<fees;
    }
};
class Teacher:public Human{
    int salary;

    public:
    Teacher(int salary, string name, int age )
    {
        this->salary=salary;
        this->age=age;
        this->name=name;
    }
    void display()
    {
        cout<<name<<" "<<age<<" "<<salary<<endl;
    }

};
int main(){
    Student A("sapna",10,50,34,67);
    // A.fun("sapna",10,50,34,67);
    A.display();
    Teacher B;
    B.name =("sonal",23,300);
    B.display();

}