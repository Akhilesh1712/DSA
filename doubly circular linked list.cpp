#include <iostream>
using namespace std;
/*int main()
{
	cout<<"hello";
	return 0;
}*/
//
class Node
{
public:
    int data;
    Node* prev;
    Node* next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
    ~Node()
    {
        if(this->next!=NULL&&this->prev!=NULL)
        {
            delete next;
            delete prev;
            next=NULL;
            prev=NULL;
        }
    }
};

void insertAtPosition(Node*& tail, int element, int d)
{
    // if empty list
    if (tail == NULL)
    {
        Node* nodetoinsert = new Node(d);
        tail = nodetoinsert;
        // for circular
        nodetoinsert->next = nodetoinsert;
        nodetoinsert->prev = nodetoinsert;
    }
    else
    {
        // assuming the element is present
        Node* curr = tail->next;
        while (curr->data != element)
        {
            curr = curr->next;
            // if we have traversed the entire list and not found the element
            if (curr == tail->next)
            {
                cout << "Element not found." << endl;
                return;
            }
        }
        Node* temp = new Node(d);
        temp->next = curr->next;
        temp->prev = curr;
        curr->prev = temp;
        curr->next = temp;
        // updating the tail if the new node is inserted at the end
        if (curr == tail)
            tail = temp;
    }
}
void deletenode(Node* &tail,int value)
{
    if(tail==NULL)
    {
        cout<<"empty list"<<endl;
        return;
    }
    Node* p=tail;
    Node* curr=p->next;
    while(curr->data!=value)
    {
        p=curr;
        curr=curr->next;
    }
    p->next=curr->next;
    curr->next->prev=p;
    if(tail==curr)//jb curr last per hai to matlab last node delete ke time
    {
        tail=p;
    }
    if(curr==p)
    {
        tail==NULL;
    }
    curr->next=NULL;
    curr->prev=NULL;
    delete curr;
}
void print(Node* tail)
{
    // if empty
    if (tail == NULL)
    {
        cout << "Empty" << endl;
        return;
    }
    Node* temp = tail->next;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail->next);
    cout << endl;
}

int main()
{
    Node* tail = NULL;
    print(tail);
    insertAtPosition(tail, 5, 3);
    print(tail);
    insertAtPosition(tail, 3, 8);
    print(tail);
    insertAtPosition(tail, 8, 9);
    print(tail);
    insertAtPosition(tail, 9, 90);
    print(tail);
    insertAtPosition(tail, 8, 7);
    print(tail);
    insertAtPosition(tail, 3, 80);
    print(tail);
    deletenode(tail,80);
    print(tail);
    cout<<"tail data "<<tail->data<<endl;
    return 0;
}
