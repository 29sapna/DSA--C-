#include<iostream>
using namespace std;
class Cone
{
    string name;
    int *data;

    public:
    Cone(){
        name="4";
        cout<<"const is all"<<endl;
    }
    // Cone()
    // {
    //     name ="sona";
    //     data = new int;
    //     *data =10;
    //     cout<<"constructor is called\n";
    //}
    Cone(string name)
    {
        this->name=name;
        cout<<"consturctor is"<<name<<endl;
    }
    //Destructor
    ~Cone()
    {
        delete data;
        cout<<"Destructor is"<<name<<endl;
    }
};
int main(){

Cone A1("1"),A2("2"),A3("3");
Cone *A4 = new Cone;
delete A4;
}