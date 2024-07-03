#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int>q;
    q.push(2);
    q.push(4);
    q.push(8);
    q.pop();
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    cout<<q.empty()<<endl;
    cout<<q.back()<<endl;
}
//STL=standard templete library