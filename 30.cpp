#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;
    int s=sqrt(n);
    if(s*s==n){
        cout<<"Number is a perfect square"<<endl;

    }
    else{
        cout<<"not a perfect square"<<endl;
    }

}