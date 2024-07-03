#include<iostream>
#include<vector>
using namespace std;

bool divide(vector<int>arr)
{
    int prefix=0, total_sum=0, ans, n=arr.size();

    for(int i=0;i<n;i++)
    total_sum+=arr[i];


    for(int i=0;i<n;i++){
        prefix+=arr[i];
        ans=total_sum-prefix;
        if(prefix==ans)
        return 1;

    }
    return 0;
}

int main(){
    int n;
    cout<<"enter the size of arr: ";
    cin>>n;
    vector<int>v(n);
    cout<<"enter the element on array: ";
    for(int i=0;i<n;i++)
    cin>>v[i];
    cout<<divide(v); 
  
}

    
