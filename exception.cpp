#include<iostream>
using namespace std;
class Customer
{
    string name;
    int balance, account;

    public:

    Customer(string name, int balance, int account)
    {
        this->name=name;
        this->account=account;
        this->balance=balance;
    };
    //deposit
    void deposit(int amount)
    {
    if(amount>0)
    {
        balance+=amount;
        cout<<amount<<" is created successfully\n";
    }
    else{
        throw "amount should be greater than 0";
    }
    }
  //withdraw
    void withdraw(int amount)
    {
    if(amount>0&&amount<=balance)
    {
        balance-=amount;
        cout<<amount<<" is debited succesfully ";
    }
    else if(amount<0)
    {
        throw "amount should be greater than 0\n";
    }
    else{
        throw "your balance is low\n";
    }
    };
};

int main(){
    Customer C1("Sapna", 5000, 10);

    try{
    C1.deposit(100);
    C1.withdraw(6000);
    }catch(const char *e)
    {
        cout<<"Exception Occured!"<<e<<endl;
    }

}
