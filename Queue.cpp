#include<iostream>
using namespace std;

class Queue
{
    int *arr;
    int front,rear,size;
    public:
    Queue(int n)
    {
        arr=new int[n];
        front=rear=-1;
        size=n;
    }

    bool IsEmpty()
    {
        return front==-1;
    }
    bool IsFull()
    {
        return rear==size-1;
    }
    void push(int x)
    {
        if(IsEmpty())
        {
            front=rear=0;
            arr[0]=x;
            return;
        }
        else if(IsFull())
        {
            cout<<"Queue overflow\n";
            return;
        }
        else
        {
            rear=rear+1;
            arr[rear]=x;
        }
    }
    void pop()
    {
        if(IsEmpty())
        {
            cout<<"Queue underflow\n";
            return;
        }
        else
        {
            if(front==rear)
            {
                front=rear=-1;
            }
            else
            {
                front=front+1;

            }
        }
    }
    int start()
    {
        if(IsEmpty())
        {
            cout<<"Queue is empty\n";
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
};
int main()
{
    Queue q(5);
    q.push(8);
    q.push(2);
    q.push(5);
    cout<<q.start()<<endl;
  
}