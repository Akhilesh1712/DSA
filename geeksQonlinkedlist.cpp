#include <iostream>
using namespace std;
int main()
{
	cout<<"hello";
	return 0;
}
 /*int getNthFromLast(Node *head, int n)
    {
         if(head==NULL)
         {
             return -1;
         }
         Node* first=head;
         Node* second=head;
         int i=1;
         while(i<n)
         {
             second=second->next;
             if(second==NULL)
             {
                 return -1;
             }
             i++;
         }
         while(second!=NULL&&second->next!=NULL)
         {   
             second=second->next;
             first=first->next;
             
         }
         return first->data;
    }  */ 
	
/*class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        if(head==NULL)
        {
            return NULL;
        }
        if(head->next==NULL)
        {
            return head;
        }
        Node* curr=head;
        Node* prev=NULL;
        Node* bakward=NULL;
        while(curr!=NULL)
        {
            bakward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=bakward;
        }
        return prev;
    }
    
};	*/  
/*//findiing the y node in linked list
//approach 1
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
}*/
//findiing the y node in linked list 
//approach 2 wihh time o(n+m)
/*int findLength(Node* head) {
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
}*/
//another with swap y yalla hi
/*int getlength(Node* head)
{
    if(head==NULL)
    {
        return 0;
    }
    int len=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
}
Node* swap(Node* &head1,Node* &head2)
{
    Node* temp=head1;
    head1=head2;
    head2=temp;
    return head2;
}
int  intersectPoint(Node* head1, Node* head2) {

    int temp1=getlength(head1);
    int temp2=getlength(head2);
    int diff=abs(temp1-temp2);
    if(temp1<temp2)
    {
        swap(head2,head1);
    }
    while(diff>0)
    {
        head1=head1->next;
        diff--;
    }
    
    
    while(head1!=NULL&&head2!=NULL)
    {
        if(head1==head2)
        {
            return head1->data;
        }
        head1=head1->next;
        head2=head2->next;
    }
    return -1;
}*/
//Function to rotate a linked list.
   /* int getlength(Node* head)
    {
        if(head==NULL)
        {
            return 0;
        }
        Node* temp=head;
        int len=0;
        while(temp!=NULL)
        {
            temp=temp->next;
            len++;
        }
        return len;
    }
    Node* rotate(Node* head, int k)
    {   
        if(head==NULL&&k==0){
            return head;
        }
        int l=getlength(head);
        k=k%l;//for if k given was>l
        if(k==0)
        {
            return head;
        }
        int len=1;
        Node* g=head;
        while(len<k)
        {
            g=g->next;
            len++;
        }
        Node* newhead=g->next;
        g->next=NULL;
        Node* temp=newhead;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=head;
        return newhead;
        

    }*/
  /* //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
          if (head == NULL) {
                return NULL;
          }

          unordered_set<int> seen;
          Node* curr = head;
          Node* prev = NULL;

          while (curr != NULL) {
               if (seen.count(curr->data)) {
                    prev->next = curr->next;
                    delete curr;
               }
               else {
                      seen.insert(curr->data);
                       prev = curr;
                    }
                curr = prev->next;
            }
   
            return head;
    }*/ 
 //flatern the linked list   
/*Node* merge(Node* left, Node* right) {
    if (left == NULL) {
        return right;
    }
    if (right == NULL) {
        return left;
    }

    Node* ans = NULL;
    if (left->data < right->data) {
        ans = left;
        ans->bottom = merge(left->bottom, right);
    } else {
        ans = right;
        ans->bottom = merge(left, right->bottom);
    }
    return ans;
}

Node* flatten(Node* root) {
    if (root == NULL || root->next == NULL) {
        return root;
    }

    // Flatten the next linked list (right)
    root->next = flatten(root->next);

    // Merge the current linked list (root) with the flattened next linked list
    root = merge(root, root->next);

    return root;
}*/
//clone
/*Node* insertAtTail(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
    return head;
}

Node* copyList(Node* head)
{
    if (head == NULL)
        return NULL;

    // Step 1: Insert new nodes in between the original nodes
    Node* current = head;
    while (current != NULL)
    {
        Node* next = current->next;
        Node* newNode = new Node(current->data);
        newNode->next = next;
        current->next = newNode;
        current = next;
    }

    // Step 2: Update the random pointers of the new nodes
    current = head;
    while (current != NULL)
    {
        if (current->arb != NULL)
            current->next->arb = current->arb->next;
        current = current->next->next;
    }

    // Step 3: Separate the original and cloned lists
    Node* cloneHead = head->next;
    Node* cloneCurrent = cloneHead;
    current = head;
    while (current != NULL)
    {
        current->next = current->next->next;
        if (cloneCurrent->next != NULL)
            cloneCurrent->next = cloneCurrent->next->next;
        current = current->next;
        cloneCurrent = cloneCurrent->next;
    }

    return cloneHead;
}*/
 //Function to sort the given linked list using Merge Sort.
    /*Node* middle(Node* head)
    {
        Node* slow=head;
        Node* fast=head->next;
        while(fast!=NULL&&fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
    Node* merge(Node* &left,Node* &right)
    {
        if(left==NULL)
        {
            return right;
        }
        if(right==NULL)
        {
            return left;
        }
        Node* ans=new Node(-1);
        Node* temp=ans;
        while(left!=NULL&&right!=NULL)
        {
            if(left->data < right->data)
            {
                temp->next=left;
                temp=left;
                left=left->next;
            }
            else
            {
                temp->next=right;
                temp=right;
                right=right->next;
            }
        }
        while(left!=NULL)
        {
                temp->next=left;
                temp=left;
                left=left->next;
        }
        while(right!=NULL)
        {
                temp->next=right;
                temp=right;
                right=right->next;
        }
        ans=ans->next;
        return ans;
    }
    Node* mergeSort(Node* head) {
        
        if(head==NULL||head->next==NULL)
        {
            return head;
        }
        Node* mid=middle(head);
        Node* left=head;
        Node* right=mid->next;
        mid->next=NULL;
        left=mergeSort(left);
        right=mergeSort(right);
        Node* result=merge(left,right);
        return result;
    }*/
    //Function to add two numbers represented by linked list.
    /*void insertattail(Node* &anshead,Node* &anstail,int val)
    {
        Node* temp=new Node(val);
        if(anshead==NULL)
        {
            anshead=temp;
            anstail=temp;
            return;
        }
        else
        {
            anstail->next=temp;
            anstail=temp;
        }
    }
    struct Node* add( struct Node* first,struct Node* second)
    {
        int carry=0;
        Node* anshead=NULL;
        Node* anstail=NULL;
        while(first!=NULL||second!=NULL||carry!=NULL)
        {
            int val1=0;
            if(first!=NULL)
            {
                val1=first->data;
            }
            int val2=0;
            if(second!=NULL)
            {
                val2=second->data;
            }
            int sum= carry + val1 + val2;
            int digit=sum%10;
            insertattail(anshead,anstail,digit);
            carry=sum/10;
            if(first!=NULL)
            {
                first=first->next;
            }
            if(second!=NULL)
            {
                second=second->next;
            }
        }
        return anshead;
    }
    Node* reverse( Node* first)
    {
        Node* prev=NULL;
        Node* curr=first;
        Node* am=NULL;
        while(curr!=NULL)
        {
            am=curr->next;
            curr->next=prev;
            prev=curr;
            curr=am;
        }
        return prev;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        first=reverse(first);
        second=reverse(second);
        Node* ans=add(first,second);
        ans=reverse(ans);
        return ans;
    }    */
        //Function to delete a node without any reference to head pointer. and in it we cannot delete last node
   /* void deleteNode(Node *del)
    {
       if(del==NULL||del->next==NULL)
       {
           return;
       }
       Node* temp=del->next;
       del->data=del->next->data;
       del->next=del->next->next;
       delete temp;
       
    }*/
        //deteting node having greater value
   /* Node* reverse(Node* head)
    {
       if(head==NULL || head->next==NULL)
       {
           return head;
       }
       Node* curr=head;
       Node* prev=NULL;
       Node* forward=NULL;
       while(curr!=NULL)
       {
           forward=curr->next;
           curr->next=prev;
           prev=curr;
           curr=forward;
       }
       return prev;
    }
    Node* deletenode(Node* head)
    {
        if(head==NULL ||head->next==NULL)
        {
            return head;
        }
        Node* max=head;
        Node* curr=head;
        Node* temp;
        while(curr!=NULL&&curr->next!=NULL)
        {
            if(curr->next->data < max->data)
            {
                temp=curr->next;
                curr->next=temp->next;
                temp->next=NULL;
                delete temp;
            }
            else
            {
                curr=curr->next;
                max=curr;
            }
        }
        return head;
    }
    Node *compute(Node *head)
    { 
        head=reverse(head);
        head=deletenode(head);
        return reverse(head);
    }*/
//Function to find the length of a loop in the linked list.
/*int countNodesinLoop(struct Node *head)
{   if(head==NULL)
    {
        return 0;
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
        if(fast==slow)
        {
            break;
        }
    }
    if(fast==NULL)
    {
        return 0;
    }
    else
    {
        int count=1;
        Node* temp=slow;
        while(temp->next!=slow)
        {
            temp=temp->next;
            count++;
        }
        return count;
    }

}*/
//printing intersections of two node in another linked list
/*Node* findIntersection(Node* head1, Node* head2) {
    Node* ptr1 = head1;
    Node* ptr2 = head2;
    Node* head = NULL;
    Node* tail = NULL;

    while (ptr1 != NULL && ptr2 != NULL) {
        if (ptr1->data == ptr2->data) {
            if (head == NULL) {
                head = tail = ptr1; // Link to the original node in list1
            } else {
                tail->next = ptr1; // Link to the original node in list1
                tail = tail->next;
            }
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        } else if (ptr1->data > ptr2->data) {
            ptr2 = ptr2->next;
        } else {
            ptr1 = ptr1->next;
        }
    }

    // Set the tail->next to NULL to terminate the intersection list.
    if (tail != NULL) {
        tail->next = NULL;
    }

    return head;
}*/
//Function to check whether two linked lists are identical or not. 
/*bool areIdentical(struct Node *head1, struct Node *head2)
{
    Node* ptr1=head1;
    Node* ptr2=head2;
    int cout1=0;
    int cout2=0;
    while(ptr1!=NULL)
    {
        ptr1=ptr1->next;
        cout1++;
    }
    while(ptr2!=NULL)
    {
        ptr2=ptr2->next;
        cout2++;
    }
    if(cout1!=cout2)
    {
        return false;
    }
    
    ptr1=head1;
    ptr2=head2;
    int arr[cout1];
    int x=0;
    while(ptr1!=NULL&&ptr2!=NULL)
    
    {
        if(ptr1->data==ptr2->data)
        {
            
            arr[x]=1;
            x++;
        }
        else
        {
            arr[x]=0;
            x++;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    for(int i=0;i<cout1;i++)
    {
        if(arr[i]==0)
        {
            return false;
        }
    }
}*/


