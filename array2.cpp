#include<iostream>
using namespace std;
void fun(int a[],int n)
{
    cout<<sizeof(a)<<endl;
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}

int main()
{
    int arr[5]= {3,5,6,1,8};
    cout<<sizeof(arr)<<endl;
    fun(arr,5);

}
