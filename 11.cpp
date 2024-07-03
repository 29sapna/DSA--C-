#include<iostream>
using namespace std;
int main(){
    int n, i, f;
    cout<<"enter a number "<<endl;
    cin>>n;
    f=n;
    for( i=1; i<n; i++){
        cout<<f<<"*"<<i<<"=";
        f=f*i;
        cout<<f<<endl;
    }
    cout<<"fibonacci number is: "<<f;

}
