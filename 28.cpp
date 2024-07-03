#include<iostream>
using namespace std;
int main(){
    int n, max=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    max= arr[0];
    for(int i=0; i<n; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"max value in array: "<<max;
}