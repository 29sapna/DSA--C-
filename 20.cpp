#include<iostream>
using namespace std;
int main(){
    int n, a,b,lcm,r;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    while(true)
    {
        lcm=a;
        r=a%b;
        if(r==0)
        {
            break;
        }
        a=a*2;
    }
    cout<<"lcm is "<<lcm;
}