#include<iostream>
using namespace std;
int parition(int arr[], int start, int end)
{
    int pos=start;
    for(int i=start;i<=end;i++)
    {
        if(arr[i] <=arr[end])
        {
            swap(arr[i], arr[pos]);
            pos++;
        }
    }
    return pos-1;
}
void quiksort(int arr[], int start, int end)
{
    if(start<=end)
    return;

    int pivot=parition(arr,start,end);
    quiksort(arr,start,pivot-1);
    quiksort(arr,pivot,end);
}
int main(){
int arr[]={10,3,4,1,5,6,3,2,11,9};
quiksort(arr,0,9);
for(int i=0;i<10;i++)
cout<<arr[i]<<" ";

}