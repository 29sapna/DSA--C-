#include <iostream>
#include <climits>
using namespace std;

void printcol(int arr[][4], int row, int col){
    for(int j=0;j<col;j++)
    for(int i=0;i<row;i++)
    cout<<arr[i][j]<<" ";
}

void printrowmax(int arr[][4],int row,int col){
    int index= -1, sum =INT_MIN;


    for(int i=0;i<row;i++)
    {
       int total =0;
       for(int j=0;j<col;j++){
        total+=arr[i][j];

        if(sum<total)
        {
        sum=total;
        index=-1;
        } 
        } 

    }  
    cout<<index<<" ";
}
void wave(int arr[][4], int row, int col){
    for(int j=0;j<col;j++)
    {
        if(j%2==0)
        {
            for(int i=0;i<row;i++)
            cout<<arr[i][j]<<" ";
        }
        else{
            for(int i=row-1;i>=0;i--)
            cout<<arr[i][j]<<" ";
        }
    }
}

int main(){

    int arr1[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int ans[3][4];

    for(int row=0;row<3;row++)
    for(int col=0;col<4;col++)
    cout<<arr2[row][col]<<" ";

    printcol(arr2,3,4);
    // int X=7;
    // for(int row=0;row<3;row++)
    // for(int col=0;col<4;col++){
    // //     if(arr[row][col]==X)
    //     {
    //         cout<<"Yes";
    //         return 0;
    //     }
    // }
    // cout<<"No";
    //    ans[row][col]= arr1[row][col]+arr2[row][col];
    // }

    // for(int row=0;row<3;row++)
    // for(int col=0;col<4;col++)
    // cout<<ans[row][col]<<" ";

    wave(arr1,3,4);
    // for(int i=0;i<n;i++)
    // for(int j=0;j<n;j++)
    // cout<<arr[i][j]<<" ";



        
    
}