#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
Node* CreateLinkedList(int arr[], int index, int size)
{
    //Base case
    if(index==size)
    return NULL;

    Node *temp;
    temp= new Node(arr[index]);
    temp->next=CreateLinkedList(arr,index+1,size);

    return temp;
}
Node* CreateLinkedList(int arr[], int index, int size, Node* prev){
    if(index==size)
    {
        return prev;
    }
    Node *temp;
    temp=new Node(arr[index]);
    temp->next=prev;
    return CreateLinkedList(arr,index+1,size,temp);

}
int main()
{
    Node *Head, *Tail;
    Tail= Head = NULL;
    Head=CreateLinkedList(arr,0,5);
    Head=CreateLinkedList(arr,0,5,Head);
    //delete first node
    if(Head!=NULL)
    {
        Node *temp =Head;
        Head = Head->next;
        delete temp;
    }
    //delete a node at end
    if(Head!=NULL)
    {
        //only one node is present
        if(Head->next==NULL)
        {
            Node *temp=Head;
            delete temp;
            Head =NULL;
        }
        //MOre than 1 node is present
        {
            Node *curr =Head;
            Node *prev =NULL;

            //curr->next is not NULL
            while(curr->next!=NULL)
            {
                prev=curr;
                curr =curr->next;
            }
            delete curr;
            prev->next=NULL;

        }
    }

    // cout << Head->data << endl;
    // cout << Head->next << endl;

    int arr[] = {2, 4, 6, 8, 10};
    int x=3;
    int value=30;

    Node *temp =Head;
    x--;
    while(x--)
    {
        temp=temp->next;
    };

    Node *temp2 =new Node(value);
    temp2->next = temp->next;
    temp->next = temp2;



    // Insert the node at end

    // Linked list is empty
    for (int i = 0; i < 5; i++)
    {
        if (Head == NULL)
        {
            Head = new Node(arr[i]);
            Tail =Head;
        }

        // linked list exist
        else
        {
           Tail->next = new Node(arr[i]);
           Tail = Tail->next;
        }
    }
    //print the vlue
    Node *temp =Head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    };
}