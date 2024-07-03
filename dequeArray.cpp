#include<iostream>
using namespace std;

class Deque
{
    int front,rear,size;
    int *arr;
    public:
    Deque(int n)
    {
        front=rear=-1;
        size=n;
        arr = new int[n];
    }
    bool Isempty(){
        return front==-1;
    }
    bool Isfull(){
        return (rear+1)%size==front;
    }
    void push_front(int x)
    {
        if(Isempty())
        {
            front=rear=0;
            cout<<"pushed "<<x<<" in front\n";
            arr[0]=x;
            return;
        }
        else if(Isfull())
        {
            cout<<"Deque Overflow";
            return;
        }
        else{
            front=(front-1+size)%size;
            arr[front]=x;
            cout<<"pushed "<<x<<" in front\n";
            return;
        }
        
    }
    void push_back(int x)
    {
        if(Isempty()){
            front=rear=0;
            arr[0]=x;
            return;
        }
        else if(Isfull())
        {
            cout<<"Deque Overflow";
            return;
        }
        else{
            rear=(rear+1)%size;
            arr[rear]=x;
            cout<<"pushed "<<x<<" in back\n";
            return;
        }
        
    }
    void pop_front()
    {
        if(Isempty())
        {
            cout<<"Deque Underflow";
            return;
        }
        else{
            cout<<"poped"<<arr[front]<<"from dequeue\n";
            if(front==rear)
            front=rear=-1;
            else
            front=(front+1)%size;
        }
    }
    void pop_back()
    {
        if(Isempty())
        {
            cout<<"Deque Underflow";
            return;
        }
        else{
            cout<<"poped"<<arr[front]<<"from dequeue\n";
            if(front==rear)
            front=rear=-1;
            else
            rear=(rear-1+size)%size;
        }

    }
    int start(){

        if(Isempty())
        return -1;
        else
        return arr[front];
    }
    int end(){
        if(Isempty())
        return -1;
        else
        return arr[rear];
    }
   

};

int main()
{
    Deque d(5);
    d.push_front(3);
    d.push_back(7);
    d.push_back(8);
    
}