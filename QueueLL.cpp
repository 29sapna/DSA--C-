#include<iostream>
using namespace std;

class Node
{ 
    public:
    int data;
    Node *next;

    
    Node(int value)
    {
        data=value;
        next=NULL;
    }
};
class Queue
{
    Node *front;
    Node *rear;
    public:

    Queue()
    {
        front=NULL;
        rear=NULL;
    }

    bool IsEmpty()
    {
        return front==NULL;
    }
    void push(int x)
    {
        if(IsEmpty())
        {    
            cout<<"pushed"<<x<<"into the queue\n";
            front=rear=new Node(x);    
            return;
        }
        else{
            cout<<"pushed"<<x<<"into the queue\n";
            rear->next = new Node(x);
            rear = rear->next;
        }
    }
    void pop()
    {
        if(IsEmpty())
        {
            cout<<"Queue underflow\n";
            return;
        }
        else{
            cout<<"popped"<<front->data<<" from the queue\n";
            Node *temp=front;
            front=front->next;
            delete temp;
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
        return front->data;
        
    }

};

int main()
{
    Queue q;
    q.push(3);
    q.push(5);
    q.push(7);
    q.pop();
    cout<<q.start()<<endl;


}