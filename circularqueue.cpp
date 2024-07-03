#include<iostream>
using namespace std;
class circularQ
{
    int *arr;
    int front,rear,size;

    public:
    circularQ(int n)
    {
        arr= new int [n];
        front=rear=-1;
        size=n;  
    }
    bool IsEmpty()
    {
        return front=-1;
    }
    bool IsFull()
    {
        return (rear+1)%size==front;
    }
    void push(int x)
    {
        if(IsEmpty())
        {
            cout<<"Pushed0 "<<x<<" into the Queue\n";
            front=rear=0;
            arr[0]=x;
        }
        else if (IsFull())
        {
            cout<<"Queue is Overflow\n";
            return;
        }
       else{
            rear=(rear+1)%size;
            arr[rear]=x;
            cout<<"Pushed "<<x<<" into the Queue\n";
        }
    }
   
    void pop()
    {
        if(IsEmpty())
       {
            cout<<"Queue is underflow\n";
            return;
        }
        else{

            if(front==rear)
            {   
                cout<<"Popped"<<arr[front]<<"into the Queue\n";
                front=rear=-1;
            }
            else{
                cout<<"Popped" <<arr[front]<< "into the queue\n";
                front=(front+1)%size;
            }
        }
    }
};
int main()
{
    circularQ q(5);
    q.push(23);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(12);
    q.pop();
    q.push(6);

}  