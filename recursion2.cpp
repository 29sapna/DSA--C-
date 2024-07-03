#include<iostream>
using namespace std;


int targetSum(int arr[],index,n,sum){
    if (sum==0)
    return 1;
    if (index==n||sum<0)
    return 0;

    return targetSum(arr,index+1,n,sum)+targetSum(arr,index,n,sum-arr[index])

}
int main(){
    int arr[]={2,3,4};
    int sum= 6;
    cout<<targetSum(arr,0,3,sum)

}



// void print(int arr[], int index, int n){
//     if(index==n)
//     return;

//     cout<<arr[index]<<" ";
//     print(arr,index+1,n);
// }
// int minelement(int arr[],int index, int n)
// {
//     if(index==n-1)
//     return arr[index];

//     return min(arr[index],minelement(arr,index+1,n));
// }
// int main(){
//     int arr[]={3,5,7,9,14};
//     cout<<minelement(arr,0,5)<<endl;
// }

bool cp(string str, int start, int end)
{
    if(start>=end)
    return 1;

    if(str[start]!=str[end])
    return 0;

    else
    cp(str,start+1,end-1);

}
int count(string str, int index)
{
    if(index==-1)
    return 0;

    if(str[index]=='a'||str[index]=='e'||str[index]=='i'||str[index]=='o'||str[index]=='u')
    return 1+count(str, index-1);

    else
    return count(str,index-1); 
}
void rev(string &str, int start, int end)
{
    if(start>=end)
    return;

    char c= str[start];
    str[start]=str[end];
    str[end]=c;
    rev(str,start+1,end-1);
}
void lowertoupper(string &str, int index)
{    

    if(index==-1)
    return;

    str[index] ='A'+str[index]-'a';
    lowertoupper(str,index-1);
     
}
bool linearSer(int arr[], int X, int index, int N)
{
    //Base case
    if(index==N)
    return 0;

    if(arr[index]==X)
    return 1;

    return linearSer(arr,X,index+1,N);


}
bool BS(int arr[], int start, int end, int X)
{
    if(start>end)
    return 0;

    int mid = start+(end-start)/2;
    if(arr[mid]==X)
    return 1;
    else if(arr[mid]<X)
    return BS(arr,mid+1,end,X);
    else
    return BS(arr,start,mid-1,X);
}

int main(){
    // string str ="naman";
    // // cout<<cp(str,0,4)<<endl;
    // string str="sapna";
    // rev(str,0,4);
    // cout<<str<<endl;

    // string str="rohit";
    // lowertoupper(str,4);
    // cout<<str<<endl;
    int arr[] ={2,4,6,8,10,12};
    int X =8;
    cout<<BS(arr,0,6,X)<<endl;
}

