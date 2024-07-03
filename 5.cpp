#include<iostream>
using namespace std;
int main(){
    for(int i=20; i>=2; i-=2){
        cout<<i<<endl;

    }
    int i=20;
    while(i>=2){
        cout<<i<<endl;
        i-=2;
    }
    int i=20;
    do{
        cout<<i<<endl;
        i-=2;
    }
    while(i>=2);
}