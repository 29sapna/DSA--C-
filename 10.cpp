#include<iostream>
using namespace std;
int main(){
    int n1=0;
    int n2=1;
    int n3;
    cout<<n1<<n2;
    for(int i=1;i<=10;i++){
        n3=n1+n2;
        n1=n2;
        n2=n3;
        cout<<n3;
    }
}