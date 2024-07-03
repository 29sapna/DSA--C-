#include<iostream>
using namespace std;
int main(){
    int a;
    a=12;
    cout<<"size of int"<<sizeof(a)<<endl;

    float b;
    cout<<"size of float"<<sizeof(b)<<endl;

    char c;
    cout<<"size of char"<<sizeof(c)<<endl;

    bool d;
    cout<<"size of bool"<<sizeof(d)<<endl;

    short int si;
    long int li;
    cout<<"size of shortint"<<sizeof(si)<<endl;
    cout<<"size of longint"<<sizeof(li)<<endl;

    int amount1;
    cin>>amount1;

    int amount2;
    cin>>amount2;

    int sum=amount1+amount2;
    cout<<"sum\n";
    cout<<sum;

    int savings;
    cin>>savings;

    if(savings>5000){
        cout<<"neha\n";
    }else{
        cout<<"rani\n";
    }


    int a,b,n;
    cin>>a>>b>>n;

    if(a>b){
        if(a>n){
            cout<<a<<endl;
        }
        else{
            cout<<n<<endl;
        }
    }
    else{
        if(b>n){
            cout<<b<<endl;
        }
        else{
            cout<<n<<endl;
        }
    }
    return 0;
}