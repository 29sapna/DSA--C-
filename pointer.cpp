#include<iostream>
using namespace std;
int main(){
    // int a=10;
    // cout<<&a<<endl;
    // int *ptr=&a;
    // cout<<ptr<<endl;
    // char c=100;
    // char *ptr1=&c;

    // int s=10;
    // int *ptr2=&s;
    // cout<<ptr2<<endl;
    // cout<<*ptr2<<endl;

    // int d=20;
    // ptr=&d;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;

    // int arr[4]={1,2,3,4};
    // int *ptrr =arr;
    // cout<<arr<<endl;
    // cout<<arr+0<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<ptrr<<endl;

    // cout<<arr+1<<endl;
    // cout<<&arr[1]<<endl;

    // cout<<arr[0]<<endl;
    // cout<<*arr<<endl;
    // cout<<*(arr+0)<<endl;
    // cout<<*ptrr<<endl;

    // for(int i=0;i<5;i++)
    // cout<<arr+i<<endl;

    // for(int i=0;i<5;i++)
    // cout<<*arr+i<<endl;

    // for(int i=0;i<5;i++)
    // cout<<ptr[i]<<" ";

    // for(int i=0;i<5;i++){
    // cout<<*ptr<<" ";
    // ptr++;
    // }

    // ptr=ptr+3;
    // cout<<*ptr<<endl;

    char arr[5] ="1234";
    char *ptr = arr;
    cout<<(void*)arr<<endl;
    cout<<(void*)ptr<<endl;

    char name='a';
    char *ptr1 = &name;
    cout<<static_cast<void*>(arr)<<endl;
    cout<<(void*)&name;
    cout<<(void*)ptr1;

    
}