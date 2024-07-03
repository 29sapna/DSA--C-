#include<iostream>
using namespace std;
int main(){
    int n;
    int i, j;
    int count=0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(int i=1; i<n; i++){
        for(j=2; j<i; j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            if(n%i==0){
                cout<<i<<endl;
                count++;
            }
        }
    }
    if(count ==0){
        cout<<"Not  found any prime factors";
    }

}