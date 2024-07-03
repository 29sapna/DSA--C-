#include<iostream>
using namespace std;
void swap(int *p1, int *p2)
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;

}
void fun(int **p1)
{
    *p1= *p1+1;
}
int main(){
    // int first=10;
    // int second=20;
    // swap(&first,&second);
    // cout<<first<<" "<<second;
    // int n=10;
    // int *p=&n;
    // int **p2 = &p;
    // cout<<p<<endl;
    // fun(p2);
    // cout<<p<<endl;

    int *ptr = new int;
    *ptr =5;
    cout<<*ptr;

    int n;
    cin>>n;

    int *p = new int[n];
    for(int i=0;i<n;i++)
    p[i]=i+1;

    for(int i=0;i<n;i++)
    cout<<p[i]<<endl;

    delete ptr;



}