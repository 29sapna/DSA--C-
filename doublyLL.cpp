#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int value)
    {
        data =value;
        next= prev=NULL;

        createDLL(int arr[], int index, int size, Node *back)
        {
            if(index==size)
            return NULL;


            Node *temp =new Node(arr[index]);
            temp->prev= back;
            temp->next= createDLL(arr,index+1,size,temp);
            return temp;
        }

    }
};

int main()
{
    Node *head =NULL, *tail =NULL;
    //Create doubly LL
    int arr[] ={1,2,3,4,5};
    //create it with recursion

    head= createDLL(arr,0,5,NULL);


    for(int i=0;i<5;i++)
    {
        //LL doesnt exist
        if(head==NULL)
        {
            head=new Node(arr[i]);
            tail=head;

        }
        //exist karti h
        else{
            Node *temp =new Node(arr[i]);
            tail->next =temp;
            temp->prev =tail;
            tail= temp;
        }
    }

 
    //insert at start

    //ll doesnot exist 
    if(head==NULL)
    {
        head = new Node(5);
    }
    //already exist
    else{
        Node *temp =new Node(5);
        temp->next =head;
        head->prev= temp;
        head= temp;
    }
    //Delete at start
    if(head!=NULL)
    {
        if(head->next==NULL)
        {
            delete head;
            head=NULL;
        }
        else{
            Node *temp =head;
            head=head->next;
            delete temp;
            head->prev =NULL;
        }
    
    }
    //Delete at end
    if(head!=NULL)
    {
        if(head->next==NULL)
        {
            delete head;
            head =NULL;
        }
        else{
            Node *curr =head;
            while(curr->next)
            curr=curr->next;

            curr->prev->next =NULL;
            delete curr; 
        }
    }
    //delete at given position
    int pos =3;

    if(pos==1)
    {
        //delete at start
    }
    else{
        Node *curr = head;
        while(--pos)
        curr=curr->next;
        //delete at end
        if(curr->)
        //delete at middle
    }

    //#3 insert at any given position
    int pos=2;

    //insert at start
    if(pos==0)
    {
        //LL not exist
        if(head==NULL)
        {
            head=new Node(5);

        }
        //exist
        else{
            Node *temp =new Node(5);
            temp->next =head;
            head->prev =temp;
            head=temp;
        }


    }
    else{
        Node *curr =head;
        while(--pos)
        {
            curr=curr->next;
        };

    
        //insert at end
        if(curr->next==NULL)
        {
            Node *temp =new Node(5);
            temp->prev =curr;
            curr->next =temp;
        }

        //insert at middle
        else{
            Node *temp =new Node(5);
            temp->next =curr->next;
            temp->prev =curr;
            curr->next = temp;
            temp->next->prev =temp;
        }

    }


    Node *trav =head;
    while(trav)
    {
        cout<<trav->data<<" ";
        trav = trav->next;
    }

}