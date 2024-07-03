#include<iostream>
using namespace std;

class Const{
    string name;
    int account_no;
    int balance;

    public:
    //default constructor
    Const()
    {
        // cout<<"sapan"<<endl;
        name="sapna";
        account_no=5;
        balance=2467;

    }
    //parametrized cnstructor
    Const(string name, int account_no, int balance)
    {
        this->name= name;
        this->account_no=account_no;
        this->balance=balance;
    }
    //constructor overloading
    Const(string a, int b)
    {
        name=a;
        account_no=b;
    }
    void display(){
        cout<<name<<" "<<account_no<<" "<<balance<<endl;
    }
    //copy constructor
    Const(Const &B)
    {
        name = B.name;
        account_no=B.account_no;
        balance=B.balance;
    }
    //Inline constructor
    inline Const(string a, int b, int c): name(a),account_no(b),balance(c){

    }
};
int main(){
    Const A1;
    Const A2("sona",34,7890);
    Const A3("bab", 45);
    Const A4(A3);
    A1.display();
    A2.display();
    A3.display();
    A4.display();
    Const A5;
    A5 = A3;
    A5.display();

}