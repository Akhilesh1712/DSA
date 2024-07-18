#include<iostream>
#include<queue>
using namespace std;
//bst creation 
class bst{
    public:
       int data;
       bst* left;
       bst* right;
       bst(int d)
       {
           this->data=d;
           this->left=NULL;
           this->right=NULL;
       }
};
bst* insert(bst* &root,int d)
{
    if(root==NULL)
    {
        root=new bst(d);
        return root;
    }
    if(d > root->data)
    {
        root->right=insert(root->right,d);
    }
    else if(d < root->data)
    {
        root->left=insert(root->left,d);
    }
    return root;
}
void takeinput(bst* &root)
{
    int data;
    cin>>data;
    while(data!=-1)
    {
        root=insert(root,data);
        cin>>data;
    }
}
void levelordertravelsal(bst* root)
{
    queue<bst*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        bst* temp=q.front();
        q.pop();
        if(temp==NULL)
        {
            cout<<endl;//enter
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout<<temp->data<<" ";
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}    
int main()
{
    bst* root=NULL;
    cout<<" enter data"<<endl;
    takeinput(root);
    levelordertravelsal(root);
    return 0;
}
//delete node
/*bst* minival(bst* root)
{
    bst* temp=root;
    while(temp->left!=NULL)
    {
        temp=temp->left;
    }
    return temp;
}
bst* deletenode(bst* root, int val)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == val)
    {
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        if (root->left != NULL && root->right == NULL)
        {
            bst* temp = root->left;
            delete root;
            return temp;
        }
        if (root->left == NULL && root->right != NULL)
        {
            bst* temp = root->right;
            delete root;
            return temp;
        }
        if (root->left != NULL && root->right != NULL)
        {
            int mini = minival(root->right)->data;
            root->data = mini;
            root->right = deletenode(root->right, mini);
            return root;
        }
    }
    else if (root->data > val)
    {
        root->left = deletenode(root->left, val);
    }
    else
    {
        root->right = deletenode(root->right, val);
    }
    return root; 
}*/
//findng minimum element in the bst
/*int minValue(Node* root) {
    
    if(root==NULL)
    {
        return -1;
    }
    Node* temp=root;
    while(temp->left!=NULL)
    {
        temp=temp->left;
    }
    return temp->data;
}*/
//Function to check whether a Binary Tree is BST or not.
   /* bool m(Node* root,int min,int max)
    {
        if(root==NULL)
        {
            return true;
        }
        if(root->data > min && root->data < max)
        {
            bool left=m(root->left,min,root->data);
            bool right=m(root->right,root->data,max);
            return left&&right;
        }
        else
        {
            return false;
        }
    }
    bool isBST(Node* root) 
    {
        return m(root,INT_MIN,INT_MAX);
    }*/
//Predecessor and Successor
    /*void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->key==key)
        {
            if(root->left!=NULL)
            {
                Node* temp=root->left;
                while(temp->right!=NULL)
                {
                    temp=temp->right;
                }
                pre=temp;
            }
            if(root->right!=NULL)
            {
                Node* temp=root->right;
                while(temp->left!=NULL)
                {
                    temp=temp->left;
                }
                suc=temp;
            }
            return;
        }
        if(root->key > key)
        {
            suc=root;
            findPreSuc(root->left,pre,suc,key);
        }
        if(root->key < key)
        {
            pre=root;
            findPreSuc(root->right,pre,suc,key);
        }
    } */
//kth smallest using morris o(1)
/*int kthsmallest(Node* root , int k)
{
    int count =0;
    int kth=INT_MAX;
    Node* curr=root;
    while(curr!=NULL)
    {
        if(curr->left==NULL)
        {
            count++;//here we used to print it 
            if(count==k)
            {
                kth=curr->data;
            }
            curr=curr->right;
        }
        else
        {
            Node* pre=curr->left;
            while(pre->right!=NULL && pre->right!=curr)
            {
                pre=pre->right;
            }
            if(pre->right==NULL)
            {
                pre->right=curr;
                curr=curr->left;
            }
            else
            {
                count++; //here also
                if(count==k)
                {
                    kth=curr->data;
                }
                pre->right=NULL;
                curr=curr->right;
                
            }
        }
    }
    return kth;
}*/
//recursion walla
/*void solve(BInarySearchTree<int> * root , int &i,int k)
{
	//base
	if(root==NULL)
	{
		return;
	}
	sove(root->left,i,k);
	i++;
	if(i==k)
	{
		cout<<root->data;
	}
	slove(root->right,i,k);
}
void kthsamllest(BinarySeachTree<int>*root,int k)
{
	int i=0;
	solve(root,i,k);
}*/
//kth kargest element in BST o(1)
/*int kthsmallest(Node* root , int k)
{
    int count =0;
    int kth=INT_MAX;
    Node* curr=root;
    while(curr!=NULL)
    {
        if(curr->right==NULL)
        {
            count++;//here we used to print it 
            if(count==k)
            {
                kht=curr->data;
            }
            curr=curr->left;
        }
        else
        {
            Node* succ=curr->right;
            while(succ->left!=NULL && succ->left!=curr)
            {
                succ=succ->left;
            }
            if(succ->left==NULL)
            {
                succ->left=curr;
                curr=curr->right;
            }
            else
            {
                count++; //here also
                if(count==k)
                {
                    kth=curr->data;
                }
                succ->left=NULL;
                curr=curr->left;
                
            }
        }
    }
    return kth;
}*/	 
//recursion se 
/*void solve(BInarySearchTree<int> * root , int &i,int k)
{
	//base
	if(root==NULL)
	{
		return;
	}
	sove(root->right,i,k);
	i++;
	if(i==k)
	{
		cout<<root->data;
	}
	slove(root->left,i,k);
}
void kthlargest(BinarySeachTree<int>*root,int k)
{
	int i=0;
	solve(root,i,k);
}*/
//isme space complesity bhi a gye 0(n)
/*	void reverse_inorder( Node * root , vector<int> &ans){
           
           if(root == NULL){
               return;
           }
           
           reverse_inorder(root->right , ans);
           ans.push_back(root->data);
           reverse_inorder(root->left , ans);
       }
    int kthLargest(Node *root, int K)
    {
       vector<int> ans;                       
                                             
       reverse_inorder(root , ans);           
                                              
                                              
       if( K > ans.size()){                   
           return -1;
       }
       
       return ans[K-1];
    } */
 //lCA in the BST    
  /*  Node* LCA(Node *root, int n1, int n2)
        {
            if (root == NULL)
            { 
                 return NULL;
             }
              // If both n1 and n2 are smaller
            // than root, then LCA lies in left
           if (root->data > n1 && root->data > n2)
           {
               return LCA(root->left, n1, n2);
            }
               // If both n1 and n2 are greater than
                  // root, then LCA lies in right
          if (root->data < n1 && root->data < n2)
          {
             return LCA(root->right, n1, n2);
          }
          return root;
        }*/
//Find a pair with given target in BST
/*void vect(struct Node * root ,vector<int> &ans, int target)
    {
        if(root==NULL)
        {
            return;
        }
        vect(root->left,ans,target);
        ans.push_back(root->data);
        vect(root->right,ans,target);
    }
    int isPairPresent(struct Node *root, int target)
    {
         vector<int> ans;
         vect(root , ans , target);
         int i=0;
         int j= ans.size() - 1;
         while(i < j)
         {
             int sum = ans[i] + ans[j];
             if(sum == target)
             {
                 return 1;
             }
             else if(sum > target)
             {
                 j--;
             }
             else
             {
                 i++;
             }
         }
         return 0;
    } */
//flattern a BST to linked list
/*void push(TreeNode<int> * root, vector<int> &in)
{
    if(root==NULL)
    {
        return;
    }
    push(root->left,in);
    in.push_back(root->data);
    push(root->right,in);
}
TreeNode*<int> flattern(TreeNode<int>*root)
{
    vector<int> in;
    push(root,in);
    int n=in.size();
    TreeNode<int> * newroot=new TreeNode<int>(in[0]);
    TreeNode<int> curr=newroot;
    for(int i=0;i<n;i++)
    {
        TreeNode<int> *temp=new TreeNode<int>(in[i]);// nyi node bani pade gi pahale har bar
        curr->left=NULL;
        curr->right=temp;
        curr=temp;
    }
    //last node ke liye
    curr->left=NULL;
    curr->right=NULL;
    return newroot;
} */
//BST to Balanced BST
/*Node* buildBalancedTree(Node* root)
    {
    	// Code here
      vector<Node*> list;
        inorder(root, list);
        return bbst(list, 0, list.size() - 1);
    }

    void inorder(Node* node, vector<Node*>& list) {
        if (node == NULL) return;
        inorder(node->left, list);
        list.push_back(node);
        inorder(node->right, list);
    }

    Node* bbst(vector<Node*>& list, int a, int b) {
        if (a > b) return NULL;
        int c = (a + b) / 2;

        Node* root = list[c];
        root->left = bbst(list, a, c - 1);
        root->right = bbst(list, c + 1, b);
        return root;
    }*/
//Construct Tree from Preorder Traversal
/*struct Node *solve(vector<int> pre,int min,int max,int &i)
{
    if(i >= n)
    {
        return NULL;
    }
    if(pre[i] < min || pre[i] > max)
    {
        return NULL;
    }
    struct Node* root=new Node(pre[i++]);
    root->left=solve(n,pre,min,root->data,i);
    root->right=solve(n,pre,root->data,max,i);
    return root;
}
struct Node *constructTree( vector<int> pre)
{
    int min= INT_MIN;
    int max= INT_MAX;
    int i=0;
    return solve(pre,min,max,i);
}*/
//gfg per ase given tha ak preln or tha jis me tha vo leaf node hai ya nhi
//to us ki help se ase ker lege ham
/*struct Node *solve(int n, int pre[], char preLN[], int &i)
{
    if (i >= n)
    {
        return NULL;
    }

    struct Node *root = new Node(pre[i]);

    if (preLN[i] == 'L') {
        // If preLN[i] is 'L', it's a leaf node, so both left and right child should be NULL.
        root->left = NULL;
        root->right = NULL;
        i++;
    } else {
        // If preLN[i] is 'N', it's a non-leaf node, so we need to recursively build its children.
        i++;
        root->left = solve(n, pre, preLN, i);
        root->right = solve(n, pre, preLN, i);
    }

    return root;
}

struct Node *constructTree(int n, int pre[], char preLN[])
{
    int i = 0;
    return solve(n, pre, preLN, i);
}*/
//Merge two BST 's
    /*void inorder(Node* root , vector<int> &v)
    {
        if(root==NULL)
        {
            return ;
        }
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
    }
    vector<int> mergetwoarray(vector<int> &v1,vector<int> &v2)
    {   
        vector<int> ans3(v1.size() + v2.size());
        int i=0,j=0,k=0;
        while(i < v1.size() && j < v2.size())
        {
            if( v1[i] > v2[j])
            {
                ans3[k++]=v2[j];
                j++;
            }
            else
            {
                ans3[k++]=v1[i];
                i++;
            }
        }
        while(i < v1.size())
        {
            ans3[k++]=v1[i];
            i++;
        }
        while(j < v2.size())
        {
            ans3[k++]=v2[j];
            j++;
        }
        return ans3;
    }
    Node* inordertobst(int s , int e, vector<int> &ans)
    {
        if(s > e)
        {
            return NULL;
        }
        int mid=(s+e)/2;
        Node* root=new Node(ans[mid]);
        root->left=inordertobst(s,mid - 1,ans);
        root->right=inordertobst(mid + 1,e,ans);
        return root;
    }
    Node* merge(Node *root1, Node *root2)
    {
       vector<int> v1,v2;
       inorder(root1,v1);
       inorder(root2,v2);
       vector<int> ans= mergetwoarray(v1,v2);
       int s=0 , e=ans.size() - 1;
       return inordertobst(s,e,ans);
       
    }*/
//convert bst to doubly linked list
/*void converttodll(TreeNode<int> *root, TreeNode<int> * &head)
{
    if(root==NULL)
    {
        return;
    }
    converttodll(root->right,head);
    root->right=head;
    if(head!=NULL)
    {
        head->left=root;
    }
    head=root;
    converttodll(root->left,head);
}*/		 
//and is ko dusre treke se bhi ker sakte phale inorder nikal lo fir us se linked list bana lo doubly jesse binary ka kia tha
/* void inorder(Node* root,vector<int> &ans)
    {
        if(root==NULL)
        {
            return ;
        }
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
    }
    Node * bToDLL(Node *root)
    {
        vector<int> ans;
        inorder(root,ans);
        Node* listhead=new Node(ans[0]);
        Node* temp=listhead;
        temp->left=NULL;
        for(int i=1;i<ans.size();i++)
        {
            Node* temp2=new Node(ans[i]);
            temp->right=temp2;
            temp2->left=temp;
            temp=temp2;
        }
        temp->right=NULL;
        return listhead;
    }*/
//sorted linked list to bst
/*TreeNode<int> * sortedlltoBST(TreeNode<int> * &head) 
{    
    TreeNode<int> *temp=head;
	int n=0;
	while(temp!=NULL)
	{   n++;  
	    temp=temp->next;
    }
    if(n <= 0 || root==NULL)
    {
        return NULL;
    }
    TreeNode<int> * left=sortedllbst(head,n/2);
    TreeNode<int> *root=head;
    root->left=left;
    head=head->next;
    root->right=sortedllbst(head,n - n/2 - 1);
    return root;
}*/
//another method has sc 0(n)
/*TNode* sortedListToBSTRecur(vector<int>& vec, int start, int end){
    if(start > end) return NULL;
    int mid = start + (end-start)/2;
    if((end - start)%2 != 0) mid = mid+1;
    TNode* root = new TNode(vec[mid]);
    root->left = sortedListToBSTRecur(vec, start, mid-1);
    root->right = sortedListToBSTRecur(vec, mid+1, end);
    return root;
}
 
TNode* sortedListToBST(LNode* head){
    vector<int> vec;
    LNode* temp = head;
    while(temp != NULL){
        vec.push_back(temp->data);
        temp = temp->next;
    }
    return sortedListToBSTRecur(vec, 0, vec.size()-1);
}*/	
//largest bst in the binary tree
/*class info{
    public:
       int max;
       int min;
       bool isbst;
       int size;
};
class Solution{
    public:
    info solve(Node* root,int &ans)
    {
        //base case
        if(root==NULL)
        {
            return {INT_MIN,INT_MAX,true,0};
        }
        info left = solve(root->left,ans);
        info right = solve(root->right,ans);
        info currnode;
        currnode.size=left.size + right.size + 1;
        currnode.max=max(root->data,right.max);
        currnode.min=min(root->data,left.min);
        if(left.isbst && right.isbst && (root->data > left.max && root->data < right.min) )
        {
            currnode.isbst=true;
        }
        else
        {
            currnode.isbst=false;
        }
        if(currnode.isbst)
        {
            ans=max(ans,currnode.size);
        }
        return currnode;
    }
    int largestBst(Node *root)
    {
        int maxsize=0;
        info temp=solve(root,maxsize);
        return maxsize;
    }*/		      
