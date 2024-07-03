#include<iostream>
#include <math.h>
using namespace std;

void swap(int &a, int &b){
    int c;
    c=a;
    a=b;
    b=c;
}
char convert(char name){
    char ans=name-'a'+'A';
    return ans;

}
int count(int n){
    int count=0;
    while(n){
        count++;
        n/=10;
    }
    return count;
}
bool Armstrong(int num, int digit){
    int n=num,ans=0,rem;
    while(n){
        rem=n%10;
        n/=10;
        ans=ans+pow(rem,digit);
    }
    if(ans==num)
    return 1;
    else
    return 0;
}
int main(){
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b<<" ";
    cout<<endl;
    char name;
    cin>>name;
    cout<<convert(name);
    cout<<endl;
    int num;
    cin>>num;
    int digit=count(num);
    cout<<Armstrong(num,digit)<<endl;

}
