#include<iostream>
using namespace std;
class Customer{
    string name;
    int account_no, balance;
    static int total_cust;
    static int total_bal;
    public:

    // static int total_cust;
    Customer(string name,int account_number, int balance)
    {
        this->name=name;
        this->account_no=account_no;
        this->balance=balance;
        total_cust++;
        total_bal++;

    }
    static void acceStatic()
    {
        cout<<total_cust<<endl;
        cout<<total_bal<<endl;
    }
    void deposit(int amount){
        if(amount>0)
        {
            balance+=amount;
            total_bal+=amount;
        }
    }
    void display()
    {
        cout<<name<<" "<<account_no<<" "<<balance<<" "<<total_cust<<" "<<total_bal;
    }
    void display_total()
    {
        cout<<total_cust<<endl;
    }
    void withdraw(int amount)
    {
        if(amount<=balance&&amount>0)
        {
            balance-=amount;
            total_bal-=amount;
        }
    }

};
int Customer::total_cust=0;
int Customer::total_bal=0;
int main(){
    Customer A1("Sapna", 1, 100);
    Customer A2("apna", 1, 10);
    A1.display_total();
    A2.display_total();
    Customer::acceStatic();
    withdraw();
    Customer::acceStatic();

}