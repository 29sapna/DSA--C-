#include<iostream>
using namespace std;

class Node
{ 
    public:
    int data;
    Node *prev, *next;

    Node(int value)
    {
        data = value;
        prev=next=NULL;
    }
};
class deque
{
    Node *front,*rear;
    public:
    deque()
    {
        front=rear=NULL;
    }


    void push_front(int x)
    {
        if(front==NULL)
        {
            front=rear=new Node(x);
            cout<<"Pushed "<<x<<" into the deque\n";
            return;
        }
        else{
            Node *temp=new Node(x);
            temp->next=front;
            front->prev=temp;
            front=temp;
            cout<<"Pushed "<<x<<" into the deque\n";
            return;

        }


    }
    void push_back(int x)
    {
        if(front==NULL)
        {
            front=rear=new Node(x);
            cout<<"Pushed "<<x<<" into the deque\n";
            return;
        }
        else{
            Node *temp=new Node(x);
            rear->next=temp;
            temp->prev=rear;
            temp=rear;
            return;

        }
    }
    void pop_front()
    {
        if(front==NULL){
            cout<<"dequeue underflow\n";
            return;
        }
        else{
            Node *temp=front;
            cout<<"Poped "<<temp->data<<" from the deque\n";
            front=front->next;
            delete temp;
            // greater than 1 node
            if(front)
            front->prev=NULL;
            //1 node
            else
            rear=NULL;
        }
    }
    void pop_back()
    {
        if(front==NULL)
        return;
        else{
            Node *temp=rear;
            cout<<"Poped "<<temp->data<<" from the deque\n";
            rear=rear->prev;
            delete temp;
            if(rear)
            rear->next=NULL;
            else
            front=NULL;

        }
    }
    int start()
    {
        if(front==NULL)
        return -1;
        else{
            return front->data;
        }
    }
    int end()
    {
        if(front==NULL)
        return -1;
        else{
            return rear->data;
        }
    }

};
int main()
{
    deque d;
    d.push_back(5);
    d.push_front(8);
    cout<<d.start()<<endl;
    d.pop_back();

}