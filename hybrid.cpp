#include<iostream>
using namespace std;
class Student
{
    public:
    void print()
    {
        cout<<"I am Student\n";
    }
};

class Boy: public Student, public Male
{
    public:
    void BoyPrint()
    {
        cout<<"I am Boy\n";
    }
};
class Girl: public Student, public FeMale
{
    public:
    void GirlPrint()
    {
        cout<<"I am Girl\n";
    };
};
class Male
{
    public:
    void Maleprint(){
        cout<<"I am Male\n";
    }
};
class FeMale
{
    public:
    void  FeMaleprint(){
        cout<<"I am FeMale\n";
    }
};
int main(){
    Girl G1;
    G1.print();
    Boy B1;
    B1.Maleprint();

}