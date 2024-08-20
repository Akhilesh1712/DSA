//binary tree creation programe 1
#include <iostream>
using namespace std;
class node
{
    
    public:
      int data;
      node* left;
      node* right;
      node(int data)
      {
          this->data=data;
          this->left=NULL;
          this->right=NULL;
      }
};      
node* buildefromtree(node* root)
{
  cout<<"enter the data"<<endl;
  int data;
  cin>>data;
  root=new node(data);
          
  if(data == -1)
  {
    return NULL;
   }
   cout<<"enter the left data"<<data<<endl;
   root->left=buildefromtree(root->left);
   // cout<<"enter the right data"<<endl;
   cout<<"enter the right data"<<data<<endl;
   root->right=buildefromtree(root->right);
    return root;
}      

int main() {
    node* root=NULL;
     root= buildefromtree(root);
    return 0;
}
//creation program 2(without reccursion)
/*#include<queue>
void buildfromlevelorder(node* &root)
{
    queue<node*> q;
    cout<<" enter the root"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);
    while(!q.empty())
    {
        node* temp=q.front();
        q.pop();
        cout<<" enter the left data"<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata!=-1)
        {
            temp->left=new node(leftdata);
            q.push(temp->left);
        }
        cout<<" enter the right data"<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;
        if(rightdata!=-1)
        {
            temp->right=new node(rightdata);
            q.push(temp->right);
        }
    }
}*/
//level ordertrevalsal
/*#inlcude<queue>
using namespace std;
class node
{
    
    public:
      int data;
      node* left;
      node* right;
      node(int data)
      {
          this->data=data;
          this->left=NULL;
          this->right=NULL;
      }
}; 
node* buildefromtree(node* root)
{
  cout<<"enter the data"<<endl;
  int data;
  cin>>data;
  root=new node(data);
          
  if(data == -1)
  {
    return NULL;
   }
   cout<<"enter the left data"<<data <<endl;
   root->left=buildefromtree(root->left);
   // cout<<"enter the right data"<<endl;
   cout<<"enter the right data"<<data <<endl;
   root->right=buildefromtree(root->right);
    return root;
}      

void levelordertravelsal(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node* temp=q.front();
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
int main() {
    node* root=NULL;
     root= buildefromtree(root);
    levelordertravelsal(root); 
    return 0;
}*/
//reverse levelorder
/*#include<stack>
vector<int> reverseLevelOrder(Node* root) {
    vector<int> result;//result valle is liye kyuki retrun me v int hai node nhi
    if (!root)
        return result;

    vector<Node*> v;
    stack<Node*> s;
    v.push_back(root);

    while (!v.empty()) {
        Node* temp = v.front();
        v.erase(v.begin());
        s.push(temp);

        if (temp->right) {
            v.push_back(temp->right);
        }
        if (temp->left) {
            v.push_back(temp->left);
        }
    }

    while (!s.empty()) {
        Node* temp = s.top();
        s.pop();
        result.push_back(temp->data);
    }

    return result;
}*/
//onorder travalsasl
/*vector<int> inOrder(Node* root) {
       vector<int> v;
       if(root==NULL)
       {
           return v ;
       }
       vector<int> leftSubtree = inOrder(root->left);
       v.insert(v.end(), leftSubtree.begin(), leftSubtree.end());
       v.push_back(root->data);
       vector<int> rightSubtree = inOrder(root->right);
       v.insert(v.end(), rightSubtree.begin(), rightSubtree.end());
       return v;
    }*/
//Function to return a list containing the postorder traversal of the tree.
/*vector <int> postOrder(Node* root)
{
    vector<int> v;
    if(root==NULL)
    {
        return v;
    }
    vector<int> lefttree=postOrder(root->left);
    v.insert(v.end(),lefttree.begin(),lefttree.end());
    vector<int> righttree=postOrder(root->right);
    v.insert(v.end(),righttree.begin(),righttree.end());
    v.push_back(root->data);
    return v;
}*/
//Function to return a list containing the preorder traversal of the tree.
/*vector <int> preorder(Node* root)
{
  vector<int> v;
  if(root==NULL)
  {
      return v;
  }
  v.push_back(root->data);
  vector<int> lefttree=preorder(root->left);
  v.insert(v.end(),lefttree.begin(),lefttree.end());
  vector<int> righttree=preorder(root->right);
  v.insert(v.end(),righttree.begin(),righttree.end());
  return v;
}*/
//inorder using iteration
/*#include<stack>
vector<int> inorder(node* root)
{
    stack<node*> s;
    vector<int> v;
    node* temp=root;
    while(true)
    {
        if(temp!=NULL)
        {
            s.push(temp);
            temp=temp->left;
        }
        else
        {
            if(s.empty()==true)
            {
                break;
            }
            temp=s.top();
            s.pop();
            v.push_back(temp->value);
            temp=temp->right;
        }
    }
    return v;
}*/
//preorder using iteration
/*#include<stack>
void preorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    stack<Node*> s;
    Node* temp=root;
    while(!s.empty()||temp!=NULL)
    {
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            if(temp->right)
            {
                s.push(temp->right);
            }
            temp=temp->left;
        }
        if(!s.empty())
        {
            temp=s.top;
            s.pop();
        }
    }
}*/

//post-order using iteration
/*#include<stack>
void postorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    stack<Node*> s1,s2;
    s1.push(root);
    Node* node;
    while(!s1.empty())
    {
        node=s1.top();
        s1.pop();
        s2.push(node);
        if(node->left)
        {
            s1.push(node->left);
        }
        if(node->right)
        {
            s1.push(node->right);
        }
    }
    while(!s2.empty())
    {
        node=s2.top;
        s2.pop();
        cout<<node->data<<" ";
    }
}*/
//count no of leaf node
/*void inorder(node* root,int &count)
{
    if(root==NULL)
    {
        return ;
    }
    inorder(root->left,count);
    if(root->left==NULL&&root->right==NULL)
    {
        count++;
    }
    inorder(root->right,count);
}
int leafnode(node* root)
{
    int cnt=0;
    inorder(root,cnt);
    return cnt;
}*/
//count no of non leaf nodes
/*int countNonLeafNodes(Node* root) {
        
        //base case
        if(root==NULL||(root->left==NULL&&root->right==NULL))
        {
            return 0;
        }
        return 1 + countNonLeafNodes(root->left) + countNonLeafNodes(root->right);
    }*/
// function should return the sum of all the 
// leaf nodes of the binary tree
/*void in(Node* root, int &v1)
{
    if(root==NULL)
    {
        return ;
    }
    in(root->left,v1);
    if(root->left==NULL&&root->right==NULL)
    {
        v1=v1 + root->data;
    }
    in(root->right,v1);
}
int sumLeaf(Node* root)
{
    int v=0;
    in(root,v);
    return v;
}*/
//Function to find the height of a binary tree.
    /*int height(struct Node* node){
        if(node==NULL)
        {
            return 0;
        }
        int left=height(node->left);
        int right=height(node->right);
        int ans=max(left,right) + 1 ;
        return ans;
    }*/
//deleting node in the binary tree    
/*void remove_node(Node* root,Node* n)
{
    if(root==NULL)
    {
        return;
    }
    if(root==n)
    {
        delete n;
        root=NULL;
        return;
    }
    if(root->left==n)
    {
        delete n;
        root->left=NULL;
        return;
    }
    if(root->right==n)
    {
        delete n;
        root->right=NULL;
        return;
    }
    remove_node(root->left,n);
    remove_node(root->right,n);
}
struct Node* deletionBT(struct Node* root, int key)
{
   if(root==NULL)
   {
       return NULL;
   }
   if(root->left==NULL && root->right==NULL) // if single node only
   {
       if(root->data==key)
       {
           delete root;
           root=NULL;
       }
       return root;
   }
   
   queue<Node*> q;
   q.push(root);
   Node* key_node=NULL;
   Node* curr_node=NULL;
   
   while(!q.empty())
   {
       curr_node=q.front();
       q.pop();
       if(curr_node->data==key)
       {
           key_node=curr_node;
       }
       if(curr_node->left)
       {
           q.push(curr_node->left);
       }
       if(curr_node->right)
       {
           q.push(curr_node->right);
       }
   }
   
   if(key_node)
   {
       key_node->data=curr_node->data;
       // remove curr_node
       remove_node(root,curr_node);
   }
   
   return root; // Moved outside the while loop
} */   
// Function to return the diameter of a Binary Tree.
  /*  int height(Node* root){
        if(root==NULL)
        {
            return 0;
        }
        int left=height(root->left);
        int right=height(root->right);
        int ans=max(left,right) + 1 ;
        return ans;
    }
    int diameter(Node* root) {
        if(root==NULL)
        {
            return 0;
        }
        int op1=diameter(root->left);
        int op2=diameter(root->right);
        int op3=height(root->left) + height(root->right) + 1;
        int ans=max(op1,max(op2,op3));
        return ans;
    }   */ 
    
//diameter using pair sum
/*#include<utility>
pair <int,int> diameterfirst(Node* root)
{
    if(root==NULL)
    {
        pair<int,int> p = make_pair(0,0);
        return p;
    }
    pair<int,int> left=diameterfirst(root->left);
    pair<int,int> right=diameterfirst(root->right);
    int op1=left.first;
    int op2=right.first;
    int op3=left.second + right.second + 1;
    pair<int,int> ans;
    ans.first=max(op1,max(op2,op3));
    ans.second=max(left.second,right.second) + 1;
    return ans;
}
int diameter(Node* root)
{
    return diameterfirst(root).first;
} */
//Function to check whether a binary tree is balanced or not.
   /*int height(Node* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int left=height(root->left);
        int right=height(root->right);
        int ans=max(left,right) + 1;
        return ans;
    }
    bool isBalanced(Node *root)
    {
        if(root==NULL)
        {
            return true;
        }
        bool left=isBalanced(root->left);
        bool right=isBalanced(root->right);
        bool vh=abs(height(root->left) - height(root->right)) <= 1;
        if(left&&right&&vh)
        {
            return true;
        }
        else
        {
            return false;
        }
    }*/
//using pair sum
   /* #include<utility>
    pair<bool,int> isfirst(Node* root)
    {
        if(root==NULL)
        {
            pair<bool,int> p=make_pair(true,0);
            return p;
        }
        pair<bool,int> left=isfirst(root->left);
        pair<bool,int> right=isfirst(root->right);
        bool leftans=left.first;
        bool rightans=right.first;
        bool diff=abs(left.second - right.second) <=1;
        pair<bool,int> ans;
        ans.second=max(left.second , right.second) + 1;
        if(leftans&&rightans&&diff)
        {
            ans.first=true;
        }
        else
        {
            ans.first=false;
        }
        return ans;
    }
    bool isBalanced(Node* root)
    {
        return isfirst(root).first;
    }*/
//Function to check if two trees are identical.
   /* bool isIdentical(Node *r1, Node *r2)
    {
        if(r1==NULL&&r2==NULL)
        {
            return true;
        }
        if(r1==NULL&&r2!=NULL)
        {
            return false;
        }
        if(r1!=NULL&&r2==NULL)
        {
            return false;
        }
        bool left=isIdentical(r1->left,r2->left);
        bool right=isIdentical(r1->right,r2->right);
        bool val=r1->data==r2->data;
        if(left&&right&&val)
        {
            return true;
        }
        else
        {
            return false;
        }
    }	*/
//Sum Tree 
/*#include<utility>
    pair<bool,int> v1(Node* root)
    {
        if(root==NULL)
        {
            pair<bool,int> p=make_pair(true,0);
            return p;
        }
        if(root->left==NULL&&root->right==NULL)
        {
            pair<bool,int> p=make_pair(true,root->data);
            return p;
        }
        pair<bool,int> left=v1(root->left);
        pair<bool,int> right=v1(root->right);
        bool leftans=left.first;
        bool rightans=right.first;
        bool b=root->data==left.second + right.second;
        pair<bool,int> ans;
        if(leftans&&rightans&&b)
        {
            ans.first=true;
            ans.second=root->data + left.second + right.second;
        }
        else
        {
            ans.first=false;
        }
        return ans;
    }
    bool isSumTree(Node* root)
    {
        return v1(root).first;
    }*/
//Function to store the zig zag order traversal of tree in a list.
    /*vector <int> zigZagTraversal(Node* root)
    {
    	vector<int> ans;
        if(root==NULL)
       {
          return ans;
        }
        queue<Node*> q;
        q.push(root);
        bool lefttoright=true;
        while(!q.empty())
        {
           int size=q.size();//for loop ke lye and index me
           vector<int> ans1(size);
           for(int i=0;i<size;i++)
          {
            Node* frontnode=q.front();
            q.pop();
            int index=lefttoright?i:size - i - 1;
            ans1[index]=frontnode->data;
            if(frontnode->left)
            {
                q.push(frontnode->left);
            }
            if(frontnode->right)
            {
                q.push(frontnode->right);
            }
        }
        lefttoright=!lefttoright;//direction change
        for( auto & i:ans1)
        {
            ans.push_back(i);
        }
    }
    return ans;
    }  */
//Function to return a list containing the level order traversal in spiral form.
/*#include<queue>
vector<int> findSpiral(Node *root)
{
    vector<int> ans;
    if(root==NULL)
    {
        return ans;
    }
    queue<Node*> q;
    q.push(root);
    int lefttoright=1;
    while(!q.empty())
    {
        int size=q.size();//for loop ke lye and index me
        vector<int> ans1(size);
        for(int i=0;i<size;i++)
        {
            Node* frontnode=q.front();
            q.pop();
            int index=(lefttoright%2==0)?i:size - i - 1;
            ans1[index]=frontnode->data;
            if(frontnode->left)
            {
                q.push(frontnode->left);
            }
            if(frontnode->right)
            {
                q.push(frontnode->right);
            }
        }
        lefttoright++;//direction change
        for( auto & i:ans1)
        {
            ans.push_back(i);
        }
    }
    return ans;*/
		  
 //function for Boundary Traversal of binary tree
   /* void traverseleft(Node* root,vector<int> &ans)
    {
        if(root==NULL||root->left==NULL&&root->right==NULL)
        {
            return;
        }
        ans.push_back(root->data);
        if(root->left)
        {
            traverseleft(root->left,ans);
        }
        else
        {
            traverseleft(root->right,ans);
        }
    }
    void traverseleaf(Node* root,vector<int> &ans)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->left==NULL&&root->right==NULL)
        {
            ans.push_back(root->data);
            return;
        }
        traverseleaf(root->left,ans);
        traverseleaf(root->right,ans);
    }
    void traverseright(Node* root,vector<int> &ans)
    {
        if(root==NULL||root->left==NULL&&root->right==NULL)
        {
            return;
        }
        if(root->right)
        {
            traverseright(root->right,ans);
        }
        else
        {
            traverseright(root->left,ans);
        }
        ans.push_back(root->data);
    }
    vector <int> boundary(Node *root)
    {
        vector<int> ans;
        if(root==NULL)
        {
            return ans;
        }
        ans.push_back(root->data);
        //left part
        traverseleft(root->left,ans);
        //leaf
        //left
        traverseleaf(root->left,ans);
        //right
        traverseleaf(root->right,ans);
        //right part
        traverseright(root->right,ans);
        return ans;
    }*/
//Function to find the vertical order traversal of Binary Tree.
   /* vector<int> verticalOrder(Node *root)
    {
        vector<int> ans;
        map<int,map<int,vector<int> > > nodes;
        queue<pair<Node*,pair<int,int> > > q;
        if(root==NULL)
        {
            return ans;
        }
        q.push(make_pair(root,make_pair(0,0)));
        while(!q.empty())
        {
            pair<Node*,pair<int,int> > temp=q.front();
            q.pop();
            Node* frontnode=temp.first;
            int hd=temp.second.first;
            int lvl=temp.second.second;
            nodes[hd][lvl].push_back(frontnode->data);
            if(frontnode->left)
            {
                q.push(make_pair(frontnode->left,make_pair( hd - 1,lvl + 1)));
            }
            if(frontnode->right)
            {
                q.push(make_pair(frontnode->right,make_pair(hd + 1,lvl + 1)));
            }
        }
        for(auto i: nodes)
        {
            for(auto j: i.second)
            {
                for(auto k: j.second)
                {
                    ans.push_back(k);
                }
            }
        }
        return ans;
        
    }	  */
//Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
   /* vector<int> topView(Node *root)
    {
        vector<int> ans;
        if(root==NULL)
        {
            return ans;
        }
        map<int,int> topnode;
        queue<pair<Node*,int> > q;
        q.push(make_pair(root,0));
        while(!q.empty())
        {
            pair<Node*,int> temp=q.front();
            q.pop();
            Node* frontnode=temp.first;
            int hd=temp.second;
            //1:1 mapping
            if(topnode.find(hd)==topnode.end())
            {
                topnode[hd]=frontnode->data;
            }
            if(frontnode->left)
            {
                q.push(make_pair(frontnode->left,hd - 1));
            }
            if(frontnode->right)
            {
                q.push(make_pair(frontnode->right,hd + 1));
            }
        }
        for(auto i: topnode)
        {
            ans.push_back(i.second);
        }
        return ans;
    }*/
//Bottom View of Binary Tree    
 /*vector<int> bottomView(Node *root)
    {
        vector<int> ans;
        if(root==NULL)
        {
            return ans;
        }
        map<int,int> topnode;
        queue<pair<Node*,int> > q;
        q.push(make_pair(root,0));
        while(!q.empty())
        {
            pair<Node*,int> temp=q.front();
            q.pop();
            Node* frontnode=temp.first;
            int hd=temp.second;
            //1:1 mapping
            topnode[hd]=frontnode->data;
            if(frontnode->left)
            {
                q.push(make_pair(frontnode->left,hd - 1));
            }
            if(frontnode->right)
            {
                q.push(make_pair(frontnode->right,hd + 1));
            }
        }
        for(auto i: topnode)
        {
            ans.push_back(i.second);
        }
        return ans;
    }*/
//Function to return a list containing elements of left view of the binary tree.
/*void solve(Node* root,vector<int> &ans,int lvl)
{
   if(root==NULL)
   {
       return ;
   }
   if(lvl==ans.size())
   {
       ans.push_back(root->data);
   }
   solve(root->left,ans,lvl + 1);
   solve(root->right,ans,lvl + 1);
}
vector<int> leftView(Node *root)
{
   vector<int> ans;
   solve(root,ans,0);
   return ans;
}   */
//or
//Function to return list containing elements of left view of binary tree.
  /*  vector<int> rightView(Node *root)
 {
    vector<int> res;
    if (!root)
        return res;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; i++) {
            Node* curr = q.front();
            q.pop();

            // Only add the lefttmost element of this level to the result
            if (i == size )
                res.push_back(curr->data);

            if (curr->left)
                q.push(curr->left);
            if (curr->right)
                q.push(curr->right);
        }
    }

    return res;
 } */
 //Function to return list containing elements of right view of binary tree.
   /* void solve(Node* root,vector<int> &ans,int lvl)
{
   if(root==NULL)
   {
       return ;
   }
   if(lvl==ans.size())
   {
       ans.push_back(root->data);
   }
   solve(root->right,ans,lvl + 1);
   solve(root->left,ans,lvl + 1);
}
vector<int> rightView(Node *root)
{
   vector<int> ans;
   solve(root,ans,0);
   return ans;
}*/
//or
//Function to return list containing elements of right view of binary tree.
  /*  vector<int> rightView(Node *root)
 {
    vector<int> res;
    if (!root)
        return res;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; i++) {
            Node* curr = q.front();
            q.pop();

            // Only add the rightmost element of this level to the result
            if (i == size - 1)
                res.push_back(curr->data);

            if (curr->left)
                q.push(curr->left);
            if (curr->right)
                q.push(curr->right);
        }
    }

    return res;
 }	*/
//Diagonal Traversal of Binary Tree
/*vector<int> diagonal(Node* root) {
    vector<int> ans;
    
    if (root == NULL) {
        return ans;
    }
    
    queue<Node*> q;
    q.push(root);
    
    while (!q.empty()) {
        Node* frontnode = q.front();
        q.pop();
        
        // Traverse the current diagonal
        while (frontnode) {
            ans.push_back(frontnode->data);
            
            // Push the left child if it exists
            if (frontnode->left) {
                q.push(frontnode->left);
            }
            
            // Move to the right child (if it exists) within the same diagonal
            frontnode = frontnode->right;
        }
    }
    
    return ans;
} */
//Sum of nodes on the longest path from root to leaf node
  /*  void solve(Node* root,int sum,int &maxsum,int len,int& maxlen)
    {
        if(root==NULL)
        {
            if(len>maxlen)
            {
                maxlen=len;
                maxsum=sum;
            }
            else if(len==maxlen)
            {
                maxsum=max(sum,maxsum);
            }
            return;
        }
        sum=sum + root->data;
        solve(root->left,sum,maxsum,len + 1,maxlen);
        solve(root->right,sum,maxsum,len + 1,maxlen);
    }
    int sumOfLongRootToLeafPath(Node *root)
    {
       int len=0;
       int maxlen=0;
       int sum=0;
       int maxsum=INT_MIN;
       solve(root,sum,maxsum,len,maxlen);
       return maxsum;
    }  */
//Function to return the lowest common ancestor in a Binary Tree.
  /*  Node* lca(Node* root ,int n1 ,int n2 )
    {
       if(root==NULL)
       {
           return NULL;
       }
       if(root->data==n1 || root->data==n2)//if root is n1 or root is n2
       {
           return root;
       }
       Node* leftans=lca(root->left,n1,n2);
       Node* rightans=lca(root->right,n1,n2);
       if(leftans!=NULL&& rightans!=NULL)
       {
           return root;
       }
       else if(leftans!=NULL && rightans==NULL)
       {
           return leftans;
       }
       else if(leftans==NULL && rightans!=NULL)
       {
           return rightans;
       }
       else
       {
           return NULL;
       }
    }*/			
    //Given a binary tree and an integer K. Find the number of paths in the tree which have their sum equal to K.
    /*void solve(Node* root,int k,int &count,vector<int> path)
    {
        if(root==NULL)
        {
            return;
        }
        path.push_back(root->data);
        solve(root->left,k,count,path);
        solve(root->right,k,count,path);
        int size=path.size();
        int sum=0;
        for(int i=size - 1;i>=0;i--)
        {
            sum+=path[i];
            if(sum==k)
            {
                count++;
            }
        }
        path.pop_back();
    }
    int sumK(Node *root,int k)
    {
        vector<int> path;
        int count=0;
        solve(root,k,count,path);
        return count;
    }*/	
//kth ancestor     
/*int kthAncestor(Node* root, int k, int node) {
    // Initialize a stack to keep track of the path from the root to the target node
    stack<Node*> s;
    vector<int> ancestors;
    bool found = false;
 
    // Traverse the binary tree from the root node
    while (root != NULL || !s.empty()) {
        // If the current node is not NULL, push it onto the stack and move to its left child
        if (root != NULL) {
            s.push(root);
            root = root->left;
        }
        // If the current node is NULL, pop the top element from the stack
        // If the top element is the target node, break out of the loop
        // Otherwise, move to its right child
        else {
            Node* temp = s.top();
            s.pop();
            if (temp->data == node) {
                found = true;
                break;
            }
            if (temp->right != NULL) {
                root = temp->right;
            }
        }
    }
 
    // If the target node is not found, return -1
    if (!found) {
        return -1;
    }
 
    // Pop elements from the stack and add their values to the ancestors vector
    // until we reach the kth ancestor or the stack becomes empty
    while (!s.empty() && k > 0) {
        Node* temp = s.top();
        s.pop();
        ancestors.push_back(temp->data);
        k--;
    }
 
    // If the stack becomes empty before we reach the kth ancestor, return -1
    if (k > 0) {
        return -1;
    }
 
    // Return the value of the kth ancestor
    return ancestors.back();
}*/
//second approach
/*Node* solve(Node* root,int &k,int node)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==node)
    {
        return root;
    }
    Node* leftans=solve(root->left,k,node);
    Node* rightans=solve(root->right,k,node);
    if(leftans!=NULL&&rightans==NULL)
    {
        k--;
        if(k<=0)
        {
            k=INT_MAX;
            return root;
        }
        return leftans;
    }
    if(rightans!=NULL&&leftans==NULL)
    {
        k--;
        if(k<=0)
        {
            k=INT_MAX;
            return root;
        }
        return rightans;
    }
    return NULL;
    
}
int kthAncestor(Node* root, int k, int node) {
    Node* ans=solve(root,k,node);
    if(ans==NULL || ans->data==node)
    {
        return -1;
    }
    else
    {
        return ans->data;
    }
}*/
 //Function to return the maximum sum of non-adjacent nodes.
    /*pair<int,int> solve(Node* root)
    {
        if(root==NULL)
        {
            pair<int,int> p=make_pair(0,0);
            return p;
        }
        pair<int,int> left=solve(root->left);
        pair<int,int> right=solve(root->right);
        pair<int,int> res;
        res.first=root->data + left.second + right.second;
        res.second=max(left.first,left.second) + max(right.first,right.second);
        return res;
    }
    int getMaxSum(Node *root) 
    {
        pair<int,int> ans=solve(root);
        return max(ans.first,ans.second);
    }*/
//approach 1 Construct Tree from Inorder & Preorder
   /*     int Findposition(int in[] ,int inorderStart , int inorderEnd , int element ,int  n){
        for(int i = inorderStart ; i<=inorderEnd ;i++){
            if(in[i]==element){
                return i ; 
            }
        }
        return -1 ;
    }
    Node* solve(int in[],int pre[], int &index ,int inorderStart , int inorderEnd , int n){
        if(index>=n || inorderStart>inorderEnd){
            return NULL ;
        }
        
        int element = pre[index++] ; // At every interation index is increasing
        Node* root  = new Node(element); 
        int position  = Findposition(in , inorderStart , inorderEnd ,element, n);
        
        root->left = solve(in , pre , index  , inorderStart , position-1 ,n);
        root->right = solve(in , pre , index , position+1 , inorderEnd ,n);
        
        return root ;
        
    }
    public:
    
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
         int preorderindex  = 0 ;  //Pre order is NLR so First element is root .
         
         Node* ans = solve(in , pre , preorderindex , 0  , n-1 , n );
         return ans ;
    }*/
//Function to return a tree created from postorder and inoreder traversals.
/*int Findposition(int in[] ,int inorderStart , int inorderEnd , int element ,int  n){
        for(int i = inorderStart ; i<=inorderEnd ;i++){
            if(in[i]==element){
                return i ; 
            }
        }
        return -1 ;
}    
Node* solve(int in[],int post[], int &index ,int inorderStart , int inorderEnd , int n){
        if(index>=n || inorderStart>inorderEnd){
            return NULL ;
        }
        
        int element = post[index--] ; // At every interation index is increasing
        Node* root  = new Node(element); 
        int position  = Findposition(in , inorderStart , inorderEnd ,element, n);
        
        root->right = solve(in , post , index , position+1 , inorderEnd ,n);
        root->left = solve(in , post , index  , inorderStart , position-1 ,n);
        return root ; 
}    
Node *buildTree(int in[], int post[], int n) {
     int postrderindex  = n - 1 ;  //Pre order is NLR so First element is root .
         
     Node* ans = solve(in , post , postrderindex , 0  , n-1 , n );
     return ans ;
}*/	
//Burning Tree
  /*  Node* createmapping(Node* root,int target,map<Node*,Node*> &nodetoparent)
    {
        Node* res=NULL;//tergetnode
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            Node* front=q.front();
            q.pop();
            nodetoparent[root]=NULL;
            if(front->data==target)
            {
                res=front;
            }
            if(front->left)
            {
                nodetoparent[front->left]=front;
                q.push(front->left);
            }
            if(front->right)
            {
                nodetoparent[front->right]=front;
                q.push(front->right);
            }
        }
        return res;
    }
    int burntree(Node* root,map<Node*,Node*> &nodetoparent)
    {
        map<Node*,bool> visited;
        queue<Node*> q;
        q.push(root);
        int ans=0;
        visited[root]=true;
        while(!q.empty())
        {   bool flag=0;
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                Node* front=q.front();
                q.pop();
                if(front->left && !visited[front->left])
                {
                    flag=1;
                    q.push(front->left);
                    visited[front->left]=true;
                }
                if(front->right && !visited[front->right])
                {
                    flag=1;
                    q.push(front->right);
                    visited[front->right]=true;
                }
                if(nodetoparent[front] && !visited[nodetoparent[front]])
                {
                    flag=1;
                    q.push(nodetoparent[front]);
                    visited[nodetoparent[front]]=true;
                }
            }
            if(flag==1)
            {
                ans++;
            }
        }
        return ans;
    }
    int minTime(Node* root, int target) 
    {
        int ans=0;
        map<Node*,Node*> nodetoparent;
        Node* tergetnode=createmapping(root,target,nodetoparent);
        int ans1=burntree(tergetnode,nodetoparent);
        return ans1;
    }*/   
//morris inorder
/*void morris(Node* root)
{
    Node* curr=root;
    if(root==NULL)
    {
        return ;
    }
    while(curr!=NULL)
    {
        if(curr->left==NULL)
        {
            cout<<curr->data;
            curr=curr->right;
        }
        else
        {
            Node* pre=curr->left;
            while(pre->right!=NULL&&pre->right!=curr)
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
                pre->right=NULL;
                cout<<curr->data;
                curr=curr->right;
            }
        }
    }
} */
//Flatten binary tree to linked list
   /* void flatten(Node *root)
    {
        Node* curr=root;
        if(root==NULL)
        {
            return;
        }
        while(curr!=NULL)
        {
            if(curr->left!=NULL)
            {
                Node* pre=curr->left;
                while(pre->right!=NULL&&pre->right!=curr)
                {
                    pre=pre->right;
                }
                pre->right=curr->right;
                curr->right=curr->left;
                curr->left=NULL;
            }
            curr=curr->right;
        }
    }  */
 //morris se preorder traversal 1 way
   /* vector<int> preOrder(Node* root)
    {
        vector<int> ans;
        Node* curr=root;
        if(root==NULL)
        {
            return ans;
        }
        while(curr!=NULL)
        {
            if(curr->left!=NULL)
            {
                Node* pre=curr->left;
                while(pre->right!=NULL&&pre->right!=curr)
                {
                    pre=pre->right;
                }
                pre->right=curr->right;
                curr->right=curr->left;
                //curr->left=NULL;
            }
            ans.push_back(curr->data);
            curr=curr->right;
        }
        return ans;
    }	*/
//morris pereorder 2 way
/*void morris(Node* root)
{
    Node* curr=root;
    if(root==NULL)
    {
        return ;
    }
    while(curr!=NULL)
    {
        if(curr->left==NULL)
        {
            cout<<curr->data;
            curr=curr->right;
        }
        else
        {
            Node* pre=curr->left;
            while(pre->right!=NULL&&pre->right!=curr)
            {
                pre=pre->right;
            }
            if(pre->right==NULL)
            {
                pre->right=curr;
                cout<<curr->data;
                curr=curr->left;
            }
            else
            {
                pre->right=NULL;
                curr=curr->right;
            }
        }
    }
}*/
// morris Postorder Traversal 1 way 
    /*vector<int> postOrder(Node* node) {
        
        vector<int> ans;
        Node* curr=node;
        if(node==NULL)
        {
            return ans;
        }
        while(curr!=NULL)
        {
            if(curr->right!=NULL)
            {
                Node* pre=curr->right;
                while(pre->left!=NULL&&pre->left!=curr)
                {
                    pre=pre->left;
                }
                pre->left=curr->left;
                curr->left=curr->right;
                //curr->left=NULL;
            }
            ans.push_back(curr->data);
            curr=curr->left;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    
    }*/
//morris post 2 way
/*vector<int> morris(Node* root)
{
    Node* curr=root;
    vector<int> ans;
    if(root==NULL)
    {
        return  ans;
    }
    while(curr!=NULL)
    {
        if(curr->right==NULL)
        {
            ans.push_back(curr->data);
            curr=curr->right;
        }
        else
        {
            Node* pre=curr->right;
            while(pre->left!=NULL&&pre->left!=curr)
            {
                pre=pre->left;
            }
            if(pre->left==NULL)
            {
                pre->left=curr;
                ans.push_back(curr->data);
                curr=curr->right;
            }
            else
            {
                pre->left=NULL;
                curr=curr->left;
            }
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}*/	
//Function to convert binary tree to doubly linked list and return it.
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
		   
      // function to construct tree from string
  /*  map<int,int> mp;
    void mapping(string str){
        stack<int> st;
        for(int i=0;i<str.size();i++){
            if(str[i] == '('){
                st.push(i);
            }
            else if(str[i] == ')'){
                mp[st.top()] = i;
                st.pop();
            }
        }
    }
    bool isDigit(char s){
       return (s >= '0' && s <= '9');
    }
    Node* tree(string str,int st,int end){
        if(st>end) return NULL;
        int num = 0;
        while(st < str.size() && isDigit(str[st])){
            int x = str[st] - '0';
            num = num*10 + x;
            st++;
        }
        st--;
        Node* root = new Node(num);
        int y = -1;
        if(st + 1<= end&& str[st + 1] == '('){
            y = mp[st + 1];
        }
        if(y!= -1){
            root->left = tree(str,st + 2,y - 1);
            root->right = tree(str,y + 2,end - 1);
        }
        return root;
    }
    Node *treeFromString(string str){
         mapping(str);
         int st = 0;
         int end = str.size() - 1;
         Node* ans = tree(str,st,end);
         return ans;
    }*/
//Invert Binary Tree(mirror)
 /*TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr) {
        return nullptr;
    }
    
    // Recursively invert the left and right subtrees
    TreeNode* left = invertTree(root->left);
    TreeNode* right = invertTree(root->right);
    
    // Swap the left and right children
    root->left = right;
    root->right = left;
    
    return root;
    }*/
//Construct String from Binary Tree			   
 /*string tree2str(TreeNode* root) {
        if(root == NULL){
            return "";
        }
        string result = to_string(root->val);
        string left = tree2str(root->left);
        string right = tree2str(root->right);
        if(root->left == NULL && root->right == NULL){
            return result;
        }
        if(root->left == NULL && root->right != NULL){
            return result + "()" + "(" + right + ")";
        }
        if(root->left != NULL && root->right == NULL){
            return result + "(" + left + ")";
        }
        return result + "(" + left + ")" + "(" + right + ")";
    }*/
//Transform to Sum Tree
/*int gh(Node *root){
        if(root == NULL) return 0;
        int old_val = root->data;
        root->data = gh(root->left) + gh(root->right);
        return old_val + root->data;
    }
    void toSumTree(Node *root)
    {
        if(root == NULL) return ;
        gh(root);
    }*/
//Minimum swap required to convert binary tree to binary search tree
/*void inorder(vector<int>& A, vector<int>& in, int index) {
    if (index >= A.size()) return;
    inorder(A, in, 2 * index + 1);
    in.push_back(A[index]);
    inorder(A, in, 2 * index + 2);
   }
    
    int mino(vector<int>& in, int n) {
        vector<pair<int, int>> vp(n);
        for (int i = 0; i < n; i++) {
            vp[i] = {in[i], i};
        }
        sort(vp.begin(), vp.end());
        int swaps = 0;
    
        for (int i = 0; i < n; i++) {
            while (vp[i].second != i) {
                swaps++;
                swap(vp[i], vp[vp[i].second]);
            }
        }
        return swaps;
    }
    
    int minSwaps(vector<int>& A, int n) {
        vector<int> in;
        inorder(A, in, 0);
        return mino(in, n);
    }*/	
//Find Duplicate Subtrees
/*string solve(TreeNode* root,vector<TreeNode*> &ans,unordered_map<string,int> &mp){
        if(root == NULL){
            return "N";
        }
        string s = to_string(root->val) + "," + solve(root->left,ans,mp) + "," + solve(root->right,ans,mp);
        if(mp[s]==1){
           ans.push_back(root);
        }
        mp[s]++;
        return s;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        vector<TreeNode*> ans;
        unordered_map<string,int> mp;
        solve(root,ans,mp);
        return ans;
    }*/	
//Leaves at Same Level or Not
 /*void solve(Node* root,int &check,int h,int &ans){
        if(root == NULL) return ;
        if(ans == 0) return ;
        if(root->left == NULL && root->right == NULL){
            if(check == -1){
                check = h;
            }
            else{
                if(check != h){
                    ans = 0;
                }
            }
            return ;
        }
        solve(root->left,check,h + 1,ans);
        solve(root->right,check,h + 1,ans);
    }
    bool check(Node *root)
    {
        int check = -1;
        int h = 0;
        int ans = 1;
        solve(root,check,h,ans);
        if(ans == 0){
            return false;
        }
        return true;
    }*/
//Duplicate Subtree(Given a binary tree, find out whether it contains a duplicate sub-tree of size two or more, or not.)
/*string solve(Node* root,unordered_map<string,int> &mp){
        if(root == NULL) return "N";
        if(root->left == NULL && root->right == NULL){
            string s = to_string(root->data);
            return s;
        }
        string s = to_string(root->data) + "," + solve(root->left,mp) + "," + solve(root->right,mp);
        mp[s]++;
        return s;
    }
    int dupSub(Node *root) {
         unordered_map<string,int> mp;
         solve(root,mp);
         for(auto i:mp){
             if(i.second > 1) return 1;
         }
         return 0;
    }*/	
//Min distance between two given nodes of a Binary Tree
/*Node* findLCA(Node* root, int a, int b) {
        if (!root) return NULL;
        if (root->data == a || root->data == b) return root;
        
        Node* leftLCA = findLCA(root->left, a, b);
        Node* rightLCA = findLCA(root->right, a, b);
        
        if (leftLCA && rightLCA) return root;
        
        return (leftLCA != NULL) ? leftLCA : rightLCA;
    }

    int findLevel(Node* root, int data, int level) {
        if (!root) return -1;
        if (root->data == data) return level;
        
        int left = findLevel(root->left, data, level + 1);
        if (left != -1) return left;
        
        return findLevel(root->right, data, level + 1);
    }

    int findDist(Node* root, int a, int b) {
        Node* lca = findLCA(root, a, b);
        
        int distA = findLevel(lca, a, 0);
        int distB = findLevel(lca, b, 0);
        
        return distA + distB;
    }*/
//Largest subtree sum in a tree
 /*int maxi = -1e9;
    int maxum(Node* root){
        if(!root) return 0;
         int ans = root->data + maxum(root->left) + maxum(root->right);
         maxi = max(maxi,ans);
         return ans;
    }
    int findLargestSubtreeSum(Node* root)
    {
        
         maxum(root);
         return maxi;
    }*/
//Minimum Absolute Difference in BST
/*void inorder(TreeNode* root, vector<int>&v)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    int getMinimumDifference(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        vector<int>v;
        inorder(root,v);
        sort(v.begin(),v.end());
        int ans=abs(v[0]-v[1]);
        for(int i=2;i<v.size();i++)
        {
            ans=min(ans,abs(v[i]-v[i-1]));
        }
        return ans;
    }*/
//check tree are isomorphic or not
/*bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        if(!root1 && !root2) return 1;
        if(!root1 || !root2) return 0;
        if(root1->val != root2->val) return 0;
        bool a = flipEquiv(root1->left,root2->left) && flipEquiv(root1->right,root2->right);
        bool b = flipEquiv(root1->left,root2->right) && flipEquiv(root1->right,root2->left);
        return a || b;
    }*/
//Check Tree Traversal(Given Preorder, Inorder and Postorder traversals of some tree of size N. The task is to check if they are all of the same tree or not.)
/*class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    int findpos(int element, int inorder[], int start, int end) {
        for (int i = start; i <= end; i++) {
            if (inorder[i] == element) {
                return i;
            }
        }
        return -1;
    }

    Node* build(int inorder[], int pre[], int& preindex, int start, int end, int N) {
        if (preindex >= N || start > end) {
            return NULL;
        }

        int element = pre[preindex++];
        Node* newe = new Node(element);
        int position = findpos(element, inorder, start, end);
        newe->left = build(inorder, pre, preindex, start, position - 1, N);
        newe->right = build(inorder, pre, preindex, position + 1, end, N);
        return newe;
    }

    Node* buildtree(int pre[], int inorder[], int N) {
        int preindex = 0;
        Node* root = build(inorder, pre, preindex, 0, N - 1, N);
        return root;
    }

    void builf(vector<int>& posti, Node* root) {
        if (!root) return;
        builf(posti, root->left);
        builf(posti, root->right);
        posti.push_back(root->data);
    }

    bool checktree(int pre[], int inorder[], int post[], int N) {
        Node* root = buildtree(pre, inorder, N);
        vector<int> posti;
        builf(posti, root);
        for (int i = 0; i < N; i++) {
            if (posti[i] != post[i]) {
                return false;
            }
        }
        return true;
    }
};*/
