  #include <iostream>
using namespace std;
int main()
{
	cout<<"hello";
	return 0;
}
//reversing the linked list
//first by iteerativily
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
Node* reversethelistiterative(Node* &head)
{
	//if list is empty or only one element
	if(head==NULL&&head->next==NULL)
	{
		return head;
	}
	Node* prev=NULL;
	Node* curr=head;
	Node* forward=NULL;
	while(curr!=NULL)
	{
		forward=curr->next;
		curr->next=prev;
		prev=curr;
		curr=forward;
	}
	return prev;//for head
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
    head=reversethelistiterative(head);
    print(head);
    return 0;
}
//reccursively
void reverse(Node* &head,Node* &curr,Node prev)
{
	//base 
	if(curr=NULL)
	{
		head=prev;
		return;
	}
	Node* forward=curr->next;
	reverse(head,forward,curr);
	curr->next=prev;
}
Node* reverselinkedlist(Node* head)
{
	Node* curr==head;
	Node* prev=NULL;
	reverse(head,curr,prev);
	return head;
}*/
//doubly linked list ka reverse using iteration
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
Node* reverse(Node* head)
{   if(head==NULL||head->next==NULL)
    {
        return head;
    }
    Node* p=NULL;
    Node* curr=head;
    Node* forward=NULL;
    while(curr!=NULL)
    { 
         forward=curr->next;
         curr->next=p;
         curr->prev=forward;
         p=curr;
         curr=forward;
    }
    return p;
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
    //deleteNode(head,4);
    //deleteNode(head,1);
	print(head);
	head=reverse(head);
	print(head);
	return 0;
}*/
//find the middle of linked list(singly list)
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
Node* getmiddle(Node* head)
{
    if(head==NULL)//empty
    {
        return NULL;
    }
    if(head->next==NULL)//only one
    {
        return head;
    }
    if(head->next->next==NULL)//2 nodes me 2 ans dega
    {
        return head->next;
    }
    Node* slow=head;
    Node* fast=head->next;
    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
        }
        slow=slow->next;
    }
    return slow;
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
    cout<<"middle of list is "<<getmiddle(head)->data<<endl;
    insertionattail(tail,12);
    cout<<"middle of list is "<<getmiddle(head)->data<<endl;
    insertionattail(tail,15);
    cout<<"middle of list is "<<getmiddle(head)->data<<endl;
    insertionattail(tail,18);
    cout<<"middle of list is "<<getmiddle(head)->data<<endl;
    insertionattail(tail,100);
    cout<<"middle of list is "<<getmiddle(head)->data<<endl;
    print(head);
    insertatposition(tail,head,4,45);
    print(head);
    cout<<"middle of list is "<<getmiddle(head)->data<<endl;
    return 0;
}*/
//reversing the list[k-group]
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
Node* krevv(Node* head,int k)
{
    //base 
    if(head==NULL)
    {
        return NULL;
    }
    Node* nx=NULL;
    Node* curr=head;
    Node* prev=NULL;
    int cnt=0;
    while(curr!=NULL&&cnt<k)
    {
        nx=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nx;
        cnt++;
    }
    if(nx!=NULL)
    {
        head->next=krevv(nx,k);
    }
    return prev;
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
    //head=krevv(head,2);
    print(head);
    insertionattail(tail,15);
    insertionattail(tail,18);
    insertionattail(tail,100);
    print(head);
    insertatposition(tail,head,4,45);
    print(head);
    head=krevv(head,2);//you need to update the head pointer to the new head of the reversed list after each recursive call isliye head likha hai= me
    print(head);
    return 0;
}*/
//check if the list is circular or not
/*class Node
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
bool iscircular(Node* tail)
{
    if(tail==NULL)
    {
        return true;
    }
    Node* temp=tail->next;
    while(temp!=NULL&&temp!=tail)
    {
        temp=temp->next;
    }
    if(temp==tail)
    {
        return true;
    }
    return false;

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
    if(iscircular(tail))
    {
        cout<<"circular"<<endl;
    }
    else
    {
        cout<<"Not circular"<<endl;
    }
    cout<<"tail data "<<tail->data<<endl;
    return 0;
}*///using map funtion detection of inner loop in the list
/*#include<map>
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
bool detectloop(Node* head)
{
    if(head==NULL)
    {
        return true;
    }
    map<Node*,bool> visited;
    Node* temp=head;
    while(temp!=NULL)
    {
        if(visited[temp]==true)
        {
            return true;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return false;
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
    //tail->next=head->next->next->next;
    if(detectloop(head))
    {
        cout<<"present"<<endl;
    }
    else
    {
        cout<<"not present"<<endl;
    }
    return 0;
}*/
//inner loop using the floyd algo
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
Node* floyddetect(Node* head)//ham perticular node nhi print kar pa rhe bool se to isliye node liya 
{
    if(head==NULL)
    {
        return NULL;//if bool to return false
    }
    Node* fast=head;
    Node* slow=head;
    while(slow!=NULL&&fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
        }
        slow=slow->next;
        if(fast==slow)
        {
            //cout<<slow->data<<endl;//or fast ->data
            return slow; //or fast if bool so return true
        }
    }
    return NULL;
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
    tail->next=head->next->next->next;
     //bool walle case ke liye if
     //if(floyddetect(head))
     //{
       // cout<<"yes at "<<endl;
     //}
    //else
     //{
       // cout<<"not present"<<endl; 
      //}
    if(floyddetect(head)!=NULL)
    {
        cout<<"yes present at "<<floyddetect(head)->data<<endl;
    }
    else
    {
        cout<<"not present"<<endl;
    }
      
    return 0;
}*/
//printing the begning of loop and removing of loop from it
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
Node* floyddetect(Node* head)//ham perticular node nhi print kar pa rhe bool se to isliye node liya 
{
    if(head==NULL)
    {
        return NULL;//if bool to return false
    }
    Node* fast=head;
    Node* slow=head;
    while(slow!=NULL&&fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
        }
        slow=slow->next;
        if(fast==slow)
        {
            //cout<<slow->data<<endl;//or fast ->data
            return slow; //or fast if bool so return true
        }
    }
    return NULL;
}
void begningofloop(Node* head)
{
    if(head==NULL)
    {  
        return;
    }
    cout<<"the begning of the loop is from "<<floyddetect(head)->data<<endl;
}
void removingloop(Node* head)
{
    if(head==NULL)
    {
        return;
    }
    Node* intersection=floyddetect(head);
    Node* temp=floyddetect(head);
    while(temp->next!=intersection)
    {
        temp=temp->next;
    }
    temp->next=NULL;
    cout<<"now the loop is remove from your list"<<endl;
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
    tail->next=head->next->next->next;
    if(floyddetect(head)!=NULL)
    {
        cout<<"yes present at "<<floyddetect(head)->data<<endl;
    }
    else
    {
        cout<<"not present"<<endl;
    }
    begningofloop(head);
    removingloop(head);
    if(floyddetect(head)!=NULL)
    {
        cout<<"yes present at "<<floyddetect(head)->data<<endl;
    }
    else
    {
        cout<<"not present"<<endl;
    }
    return 0;
}*/
//removing the duplicate from sortedlist
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
         ~Node()
         {
             
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
Node* removeduplicate(Node* head)
{
    if(head==NULL)
    {
        return NULL;
    }
    Node* curr=head;
    Node* next_next=NULL;
    while(curr!=NULL && curr->next!=NULL)
    {
        if(curr->data==curr->next->data)
        {   next_next=curr->next->next;
            Node* nodetodelete=curr->next;
            delete(nodetodelete);
            curr->next=next_next;
        }
        else
        {
            curr=curr->next;
        }
    }

    return head;
}
void print(Node* &head)
{
    Node* temp=head;//new node temp jo ke ho ga head per
    while(temp!=NULL)
    {
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;
}
int main() {
    Node* node1=new Node(1);
    Node* head=node1;
    Node* tail=node1;
    insertionattail(tail,2);
    insertionattail(tail,2);
    insertionattail(tail,3);
    insertionattail(tail,3);
    insertionattail(tail,4);
    insertionattail(tail,4);
    print(head);
    removeduplicate(head);
    print(head);
    return 0;
}*/
//removing the duplicate from unsortedlist
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
         ~Node()
         {
    
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
Node* removeduplicate(Node* head)
{
    if(head == NULL)
    {
        return NULL;
    }
    Node* curr = head;
    Node* dup=NULL;
    while(curr != NULL&&curr->next !=NULL)
    {
        Node* temp = curr;
        while(temp->next !=NULL)
        {
            if(curr->data == temp->next->data)
            { 
                dup= temp->next;
                temp->next=temp->next->next;
                delete(dup);
            }
            else
            {
                temp = temp->next;
            }
        }
        curr = curr->next;
    }
    return head;
}
void print(Node* &head)
{
    Node* temp=head;//new node temp jo ke ho ga head per
    while(temp!=NULL)
    {
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;
}
int main() {
    Node* node1=new Node(4);
    Node* head=node1;
    Node* tail=node1;
    insertionattail(tail,4);
    insertionattail(tail,7);
    insertionattail(tail,2);
    insertionattail(tail,7);
    insertionattail(tail,4);
    insertionattail(tail,2);
    print(head);
    removeduplicate(head);
    print(head);
    return 0;
}*/
//sorting the given linked list in 0,1,2
/*class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertionAtHead(Node* &head, int data) {
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertionAtTail(Node* &tail, int data) {
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* tail, Node* head, int position, int data) {
    if (position == 1) {
        insertionAtHead(head, data);
        return;
    }

    Node* temp = head;
    int cnt = 1;
    while (cnt < position - 1) {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL) {
        insertionAtTail(tail, data);
        return;
    }

    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void insertAtTail(Node* &tail, Node* curr) {
    tail->next = curr;
    tail = curr;
}

Node* sortHead(Node* head) {
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    Node* curr = head;
    while (curr != NULL) {
        int value = curr->data;
        if (value == 0) {
            insertAtTail(zeroTail, curr);
        }
        else if (value == 1) {
            insertAtTail(oneTail, curr);
        }
        else if (value == 2) {
            insertAtTail(twoTail, curr);
        }
        curr = curr->next;
    }
    //merging 
    if (oneHead->next != NULL) {
        zeroTail->next = oneHead->next;
        if (twoHead->next != NULL) {
            oneTail->next = twoHead->next;
        }
    }
    else if (twoHead->next != NULL) {
        zeroTail->next = twoHead->next;
    }

    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    head = zeroHead->next;
    delete zeroHead;
    delete oneHead;
    delete twoHead;
    
    return head;
}

void print(Node* &head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* node1 = new Node(2);
    Node* head = node1;
    Node* tail = node1;

    insertionAtTail(tail, 2);
    insertionAtTail(tail, 1);
    insertionAtTail(tail, 0);
    insertionAtTail(tail, 1);
    insertionAtTail(tail, 0);
    insertionAtTail(tail, 2);

    cout << "Original Linked List: ";
    print(head);

    head = sortHead(head);

    cout << "Sorted Linked List: ";
    print(head);

    return 0;
}*/
/*#include<vector>
using namespace std;
//palindrome a list approach 1 
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
bool checkpalindrome(vector<int> arr)
{
    int n=arr.size();
    int s=0;
    int a=n-1;
    while(s<=a)
    {
        if(arr[s]!=arr[a])
        {
            return false;
        }
        s++;
        a--;
    }
    return false;
}
bool ispalindrome(Node* head)
{
    vector<int> arr;
    Node* temp=head;
    while(temp!=NULL)
    {
        arr.push_back(temp->data);
        temp=temp->next;
    }
    return checkpalindrome(arr);
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
    cout<<ispalindrome(head);
    return 0;
}*/
//checking palindrome it using approach 2
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
Node* getmiddle(Node* head)
{
    if(head==NULL)
    {
        return NULL;
    }
    Node* fast=head->next;
    Node* slow=head;
    while(fast!=NULL&&fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
Node* reverse(Node* head)
{
    Node* curr=head;
    Node* prev=NULL;
    Node* Next=NULL;
    while(curr!=NULL)
    {
        curr->next=Next;
        curr->next=prev;
        prev=curr;
        curr=Next;
    }
    return prev;
}
bool ispalindrome(Node* head)
{
    if(head==NULL)
    {
        return false;
    }
    if(head->next==NULL)
    {
        return true;
    }
    Node* middle=getmiddle(head);
    Node* temp=middle->next;
    middle->next=reverse(temp);
    Node* head1=head;
    Node* head2=middle->next;
    while(head2!=NULL)
    {
        if(head1->data!=head2->data)
        {
            return false;
        }
        head1=head1->next;
        head2=head2->next;
    }
    return true;
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
    Node* node1=new Node(1);
    Node* head=node1;
    Node* tail=node1;
    insertionattail(tail,2);
    insertionattail(tail,1);
    //insertionattail(tail,18);
    //insertionattail(tail,100);
   // print(head);
    //insertatposition(tail,head,4,45);
    print(head);
    cout<<ispalindrome(head);
    return 0;
}*/
//findiing the y node in linked list
//approach 1 with time o(n*m)
/*class Node
{
public:
    int data;
    Node *next;
};

Node *createNode(int data)
{
    Node *node = new Node();
    node->data = data;
    node->next = NULL;

    return node;
}

Node* findIntersectionNode(Node* head1, Node* head2) {
    Node* ptr1 = head1;
    Node* ptr2 = head2;
    while(ptr1 != NULL) {
        Node* currPtr = ptr2;
        while(currPtr != NULL){
            if(currPtr == ptr1) return currPtr;
            currPtr = currPtr->next;
        }
        ptr1 = ptr1->next;
    }
    return NULL;
}

int main()
{
    Node *newNode;

    // L1 = 9 -> 14 -> 11 -> 17 -> 15 -> 12 -> 3 -> 1
    // L2 = 7 -> 10 -> 12 -> 15 -> 12 -> 3 -> 1
    Node *head1 = createNode(9);

    Node *head2 = createNode(7);

    newNode = createNode(14);
    head1->next = newNode;

    newNode = createNode(11);
    head1->next->next = newNode;

    newNode = createNode(17);
    head1->next->next->next = newNode;

    newNode = createNode(10);
    head2->next = newNode;

    newNode = createNode(12);
    head2->next->next = newNode;

    newNode = createNode(15);
    head1->next->next->next->next = newNode;
    head2->next->next->next = newNode;

    newNode = createNode(12);
    head1->next->next->next->next->next = newNode;
    head2->next->next->next->next = newNode;

    newNode = createNode(3);
    head1->next->next->next->next->next->next = newNode;
    head2->next->next->next->next->next = newNode;

    newNode = createNode(1);
    head1->next->next->next->next->next->next->next = newNode;
    head2->next->next->next->next->next->next = newNode;

    Node *intersectionNode = findIntersectionNode(head1, head2);
    if (intersectionNode == NULL)
    {
        cout << "No Intersection Point" << endl;
    }
    else
        cout << "Intersection Point: Node with value " << intersectionNode->data << endl;
}*/
//findiing the y node in linked list 
//approach 2 wihh time o(n+m)
/*class Node
{
public:
    int data;
    Node *next;
};

Node *createNode(int data)
{
    Node *node = new Node();
    node->data = data;
    node->next = NULL;

    return node;
}
int findLength(Node* head) {
    int length = 0;
    Node* current = head;
    while (current != NULL) {
        length++;
        current = current->next;
    }
    return length;
}

Node* findIntersectionNode(Node* head1, Node* head2) {
    int len1 = findLength(head1);
    int len2 = findLength(head2);

    int diff = abs(len1 - len2);
    Node* longer = (len1 > len2) ? head1 : head2;
    Node* shorter = (len1 > len2) ? head2 : head1;

    for (int i = 0; i < diff; i++) {
        longer = longer->next;
    }

    while (longer != NULL && shorter != NULL) {
        if (longer == shorter) {
            return longer;
        }
        longer = longer->next;
        shorter = shorter->next;
    }

    return NULL;
}
int main()
{
    Node *newNode;

    // L1 = 9 -> 14 -> 11 -> 17 -> 15 -> 12 -> 3 -> 1
    // L2 = 7 -> 10 -> 12 -> 15 -> 12 -> 3 -> 1
    Node *head1 = createNode(9);

    Node *head2 = createNode(7);

    newNode = createNode(14);
    head1->next = newNode;

    newNode = createNode(11);
    head1->next->next = newNode;

    newNode = createNode(17);
    head1->next->next->next = newNode;

    newNode = createNode(10);
    head2->next = newNode;

    newNode = createNode(12);
    head2->next->next = newNode;

    newNode = createNode(15);
    head1->next->next->next->next = newNode;
    head2->next->next->next = newNode;

    newNode = createNode(12);
    head1->next->next->next->next->next = newNode;
    head2->next->next->next->next = newNode;

    newNode = createNode(3);
    head1->next->next->next->next->next->next = newNode;
    head2->next->next->next->next->next = newNode;

    newNode = createNode(1);
    head1->next->next->next->next->next->next->next = newNode;
    head2->next->next->next->next->next->next = newNode;

    Node *intersectionNode = findIntersectionNode(head1, head2);
    if (intersectionNode == NULL)
    {
        cout << "No Intersection Point" << endl;
    }
    else
        cout << "Intersection Point: Node with value " << intersectionNode->data << endl;
}*/



