#include<iostream>
using namespace std;

int Sum(int m, int n){
    int ans=m+n;
    return ans;
}
int mul(int m, int n){
    int ans=m*n;
    return ans;
}
bool Prime(int n){
    if(n<2)
    return 0;

    for(int i=2;i<=n;i++){
        if(n%i==0)
        return 0;
    }
    return 1;
}
int Fact(int n){
    int ans=1;
    for(int i=1;i<=n;i++)
    ans=ans*i;
       
       
    return ans;
    
}


void fun()
{
    cout<<"Sapna Tiwari\n";
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<Sum(a,b);
    cout<<endl;
    fun();
    int ans=mul(a,b);
    cout<<ans;
    cout<<endl;
    cout<<Prime(a);
    cout<<endl;
    cout<<Fact(a);
    cout<<endl;
}






