#include<iostream>
using namespace std;
class Engineer
{
    public:
    string specilization;

    void work(){
        cout<<"I have specilization in"<<specilization<<endl;
    }
};
class Youtuber
{
    public:
    int subscribers;

    void content(){
        cout<<"I have a subscriber base of "<<subscribers<<endl;
    }
};
class CodeTeacher: public Engineer, public Youtuber
{
    public:
    string name;
    CodeTeacher(string name, string specilization, int subscribers)
    {
        this->name=name;
        this->specilization=specilization;
        this->subscribers=subscribers;
    }

    void show(){
        cout<<"My name is "<<name<<endl;
        work();
        content();
    }
  
    
};
int main(){
    CodeTeacher A1("Sapna","CSE",5000);
    A1.show();

};