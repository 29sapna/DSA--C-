#include<iostream>
#include<vector>
using namespace std;

int main(){
    //create vector, declare
    vector<int>v;
    vector<int>v1(5,1);
    //size and capacity
    cout<<"Size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;
    //update value
    v[1]=5;
    cout<<"Size of v1: "<<v1.size()<<endl;
    cout<<"Capacity of v1: "<<v1.capacity()<<endl;
    v1.push_back(8);
    cout<<"Size of v1: "<<v1.size()<<endl;
    cout<<"Capacity of v1: "<<v1.capacity()<<endl;
    vector<int>v3 ={5,7,1,9};
    cout<<v3.size();
    //delete value from vector
    vector<int>ans;
    ans.push_back(4);
    ans.push_back(9);
    ans.push_back(2);
    ans.push_back(6);
    ans.pop_back();
    cout<<ans.front()<<endl;
    cout<<ans.back()<<endl;
    cout<<"Size of ans:"<<ans.size()<<endl;
    ans.erase(ans.begin()+1);
    cout<<"Size of ans: "<<ans.size()<<endl;
    cout<<"Capacity of ans: "<<ans.capacity()<<endl;
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
    ans.insert(ans.begin()+1,50);
    cout<<endl;
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";

    vector<int>a;
    a=ans;
    cout<<endl;
    cout<<a.size()<<endl;

    for(auto i: ans)
    cout<<i<<" ";

    sort(ans.begin(),ans.end(),greater<int>());
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";







}