#include<iostream>
using namespace std;
class Human{

    string Religion, color;
    public:
    string name;
    int age,weight;
    
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
    int salary, id;
};
int main(){
    Student A("sapna",10,50,34,67);
    // A.fun("sapna",10,50,34,67);
    A.display();
    Teacher B;
    B.name ="sonal";

}