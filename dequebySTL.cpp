#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int>d;
    d.push_back(8);
    d.push_back(9);
    d.push_front(2);
    d.push_front(1);
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

}
