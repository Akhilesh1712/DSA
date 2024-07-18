#include <iostream>
using namespace std;
int main()
{
	cout<<"hello";
	return 0;
}
//creation of the linked list node
/*class Node
{
    public:
         int data;
         Node* next;
         //construter
         Node(int data)
         {
             this ->data=data;
             this ->next=NULL;
         }
};
int main() {
    Node* node1=new Node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
    return 0;
}*/
//insertion in the list at head and tail
/*#include <iostream>
using namespace  std;
class Node
{
    public:
         int data;
         Node* next;
         //construter
         Node(int data)
         {
             this ->data=data;
             this ->next=NULL;
         }
};
//at head
void insertionathead(Node* &head,int d)
{
    //new node creation
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
//at tail
void insertionattail(Node* &tail,int d)
{
    //new node
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
//for print(traversal) the linjked list
void print(Node* &head)
{
    Node* temp=head;//new node temp jo ke ho ga head per
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main() {
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    print(head);
    /*insertionathead(head,12);
    insertionathead(head,15);
    insertionathead(head,19);
    insertionathead(head,170);
    insertionathead(head,129);*/
   /* insertionattail(tail,12);
    insertionattail(tail,15);
    insertionattail(tail,18);
    insertionattail(tail,100);
    print(head);
    return 0;
}*/
//now insertion at pertiular position(genricprograme for all the position)
/*class Node
{
    public:
         int data;
         Node* next;
         //construter
         Node(int data)
         {
             this ->data=data;
             this ->next=NULL;
         }
};
void insertionathead(Node* &head,int d)
{
    //new node creation
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void insertionattail(Node* &tail,int d)
{
    //new node
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void insertatposition(Node* tail,Node* head,int position,int d)
{
    //insert at head
    if(position==1)
    {
        insertionathead(head,d);
        return;
    }
    //temp ko age badha ne liye
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
    //for updating the temp next value to
    //null if we add at last position 
    if(temp->next==NULL)
    {
        insertionattail(tail,d);
        return;
    }
    //now for adding at the middle
    Node* nodetoinsert=new Node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
    
}
void print(Node* &head)
{
    Node* temp=head;//new node temp jo ke ho ga head per
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main() {
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    insertionattail(tail,12);
    insertionattail(tail,15);
    insertionattail(tail,18);
    insertionattail(tail,100);
    print(head);
    insertatposition(tail,head,4,45);
    print(head);
    return 0;
}*/
//for deleting the node
/*class Node
{
    public:
      int data;
      Node* next;
      //contructer
      Node(int data)
      {
        this->data=data;
        this->next=NULL;
      }
      ~Node()
      {
          if(this->next!=NULL)
          {
              delete next;
              this->next=NULL;
          }
      }
      
};
void insertionathead(Node* &head,int d)
{
    //new node creation
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void insertionattail(Node* &tail,int d)
{
    //new node
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void insertatposition(Node* tail,Node* head,int position,int d)
{
    //insert at head
    if(position==1)
    {
        insertionathead(head,d);
        return;
    }
    //temp ko age badha ne liye
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
    //for updating the temp next value to
    //null if we add at last position 
    if(temp->next==NULL)
    {
        insertionattail(tail,d);
        return;
    }
    //now for adding at the middle
    Node* nodetoinsert=new Node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
    
}
void print(Node* &head)
{
    Node* temp=head;//new node temp jo ke ho ga head per
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
//Now for deleting the node
void deletenode(Node* &head,int position)
{
    //deleting the first node
    if(position==1)
    {
        Node* temp=head;
        head=head->next;
        //memory free
        temp->next=NULL;
        delete temp;
    }
    else
    {
        //deleting middle or last element
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;    
        while(cnt<position)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

int main() {
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    insertionattail(tail,12);
    insertionattail(tail,15);
    insertionattail(tail,18);
    insertionattail(tail,100);
    print(head);
    insertatposition(tail,head,4,45);
    print(head);
    deletenode(head,3);
    print(head);
    return 0;
}*/






