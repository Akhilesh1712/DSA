#include <iostream>
using namespace std;
/*int main()
{
	cout<<"hello";
	return 0;
}*/
//circular linked list
//is me head ke jarut nhi
class Node
{
    public:
       int data;
       Node* next;
       Node(int d)
       {
        this->data=d;
        this->next=NULL;
       }
       ~Node()
       {
          if(this->next!=NULL)
          {
            delete next;
            next=NULL;
          } 
       }
};
void insertnode(Node* &tail,int element,int d)
{
    //empty list
    if(tail==NULL)
    {
        Node* nodetoinsert=new Node(d);
        tail=nodetoinsert;
        //for circular
        nodetoinsert->next=nodetoinsert;

    }
    else
    {
        //assuming the element is present
        Node* curr=tail;
        while(curr->data!=element)
        {
            curr=curr->next;
        }
        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
    
}
void deletenode(Node* &tail,int value)
{
    //empty list
    if(tail==NULL)
    {
        cout<<"list is empty"<<endl;
        return;
    }
    else
    {
        //assuming value is present
        Node* prev=tail;
        Node* curr=prev->next;
        while(curr->data!=value)
        {
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        if(tail==curr)//jb curr last per hai to matlab last node delete ke time
        {
            tail=prev;
        }
        if(curr==prev)
        {
            tail=NULL;
        }
        curr->next=NULL;
        delete curr;
    }
}
void print(Node* tail)
{   //if empty list
    if(tail==NULL)
    {
        cout<<"list is empty";
        return;
    }
    Node* temp=tail;
    do
    {
        cout<<tail->data<<" ";
        tail=tail->next;
    } while (tail!=temp);
    cout<<endl;
    
}
int main()
{
    Node* tail=NULL;
    insertnode(tail,5,3);//element hai hi nhi to ase hi kar dega
    print(tail);
    insertnode(tail,3,5);
    print(tail);
    insertnode(tail,5,7);
    print(tail);
    insertnode(tail,3,8);
    print(tail);
    cout<<"tail data "<<tail->data<<endl;
    return 0;
}



