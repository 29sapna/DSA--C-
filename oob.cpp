#include<iostream>
using namespace std;
class Student
{
    private:
    string name;
    int age, roll_number;
    string grade;
    public:
    void setname(string s){
        name=s;
    }
    void getname(){
        cout<<name<<endl;
    }
};

int main(){
    Student s1;
    s1.setname("sonal");
    s1.getname();
    // s1.name="sapna";
    // s1.age=13;
    // s1.roll_number=54;
    // s1.grade="A+";

    // cout<<s1.age<<" ";

}