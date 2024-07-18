#include <iostream>
using namespace std;
int main()
{
	cout<<"hello";
	return 0;
}
//doubly linked list 
/*class Node
{
    public:
       int data;
       Node* prev;
       Node* next;
       Node(int data)
       {
          this->data=data;
          this->prev=NULL;
          this->next=NULL;
       }
       ~Node()
       {
         if(next!=NULL)
         {
            delete next;
            next=NULL;
         }
       }
};
void insertathead(Node* &head,int d)
{
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void insertattail(Node* &tail,int d)
{
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
void  insertatposition(Node* &head,Node* & tail,int position,int d)
{
    //insert at head
    if (position==1)
    {
        insertathead(head,d);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
    //inserting at last position
    if(temp->next==NULL)
    {
        insertattail(tail,d);
        return;
    }
    Node* nodetoinsert=new Node(d);
    nodetoinsert->next=temp->next;
    temp->next->prev=nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert->prev=temp;
    
}
void deleteNode(Node* &head,int position)
{
    //deleting the head
    if (position==1)
    {
       Node* temp=head;
       temp->next->prev=NULL;
       head=temp->next;
       temp->next=NULL;
       delete temp;
    }
    else
    {
        //middle or the last one
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<position)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
    
}
void print(Node* head)
{

    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{   Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    insertathead(head,599);
    insertathead(head,699);
    insertattail(tail,6);
    insertattail(tail,700);
    insertatposition(head,tail,2,50);
    insertatposition(head,tail,1,400);
    insertatposition(head,tail,8,760);
    insertatposition(head,tail,5,790);
    deleteNode(head,4);
    deleteNode(head,1);
	print(head);
	return 0;
}*/
//this case if the list was empty starting se
/*class Node
{
    public:
       int data;
       Node* prev;
       Node* next;
       Node(int data)
       {
          this->data=data;
          this->prev=NULL;
          this->next=NULL;
       }
       ~Node()
       {
         if(next!=NULL)
         {
            delete next;
            next=NULL;
         }
       }
};
void insertathead(Node* &head,Node* &tail,int d)
{   //ya per hogi uski coding kyuki yha per head ka previuos to null hai
    if(head==NULL)
	{
	   Node* temp=new Node(d);
	   head=temp;
	   tail=temp;	
	}
	else
	{
		Node* temp=new Node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;
	} 
    
}
void insertattail(Node* &head,Node* &tail,int d)
{   //ya per bhi
    if(head==NULL)
    {
        Node* temp=new Node(d);
		tail=temp;
		head=temp;	
	}
	else
    {
    	Node* temp=new Node(d);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
	}
}
void  insertatposition(Node* &head,Node* & tail,int position,int d)
{
    //insert at head
    if (position==1)
    {
        insertathead(head,tail,d);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
    //inserting at last position
    if(temp->next==NULL)
    {
        insertattail(head,tail,d);
        return;
    }
    Node* nodetoinsert=new Node(d);
    nodetoinsert->next=temp->next;
    temp->next->prev=nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert->prev=temp;
    
}
void deleteNode(Node* &head,int position)
{
    //deleting the head
    if (position==1)
    {
       Node* temp=head;
       temp->next->prev=NULL;
       head=temp->next;
       temp->next=NULL;
       delete temp;
    }
    else
    {
        //middle or the last one
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<position)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
    
}
void print(Node* head)
{

    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{   //Node* node1=new Node(10);
    Node* head=NULL;
    Node* tail=NULL;
    insertathead(head,tail,599);
    insertathead(head,tail,699);
    insertattail(head,tail,6);
    insertattail(head,tail,700);
    insertatposition(head,tail,2,50);
    insertatposition(head,tail,1,400);
    insertatposition(head,tail,7,760);
    insertatposition(head,tail,5,790);
    deleteNode(head,4);
    deleteNode(head,1);
	print(head);
	return 0;
}*/
