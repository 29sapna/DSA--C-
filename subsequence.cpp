#include<iostream>
#include<vector>
using namespace std;

void ss(int arr[], int index, int n, vector<vector<int>>&ans, vector<int>temp)
{
    if(index==n){
        ans.push_back(temp);
        return;
    }
    //not included
    ss(arr,index+1,n,ans,temp);
    //included
    temp.push_back(arr[index]);
    ss(arr,index+1,n,ans,temp);
}
int main(){
    int arr[]={1,2,3};
    vector<vector<int>>ans;
    vector<int>temp;
    ss(arr,0,3,ans,temp);
    for(int i=0;i<ans.size();i++)
    {   
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
