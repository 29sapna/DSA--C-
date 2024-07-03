#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter a year"<<endl;
    cin>>year;
    if(year%400==0 ){
        cout<<"Leap year"<<endl;
    }else if(year%100==0 ){
        cout<<"Nt a leap year"<<endl;
    }else if(year%4==0){
        cout<<" leap year"<<endl;
    }else
    cout<<"not a leap year";
}
