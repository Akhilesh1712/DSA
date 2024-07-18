#include <iostream>
using namespace std;
int main()
{
	cout<<" ";
	return 0;
}
/*class heap{
    public: 
       int arr[100];
       int size;
       heap()
       {
           arr[0]=-1;
           size=0;
       }
       void insert(int val)
       {
           size=size + 1;
           int index=size;
           arr[index]=val;
           while(index > 1)
           {
               int parent=index/2;
               if(arr[parent] < arr[index])
               {
                   swap(arr[parent],arr[index]);
                   index=parent;
               }
               else
               {
                   return;
               }
           }
         }  
        void print()
           {
               for(int i=1;i<=size;i++)
               {
                   cout<<arr[i]<<" ";
               }
               cout<<endl;
           }
        void deleteroot()
           {
               if(size==0)
               {
                   return ;
               }
               arr[1]=arr[size];
               size--;
               int i=1;
               while( i < size)
               {
                   int leftindex=2*i;
                   int rightindex=2*i + 1;
                   if(leftindex <= size || rightindex <= size && arr[leftindex] < arr[rightindex])
                   {
                       if(arr[rightindex] > arr[i])
                       {
                           swap(arr[rightindex],arr[i]);
                           i=rightindex;
                       }
                       else
                       {
                           return;
                       }
                   }
                   if(leftindex <= size || rightindex <= size && arr[leftindex] > arr[rightindex])
                   {
                       if(arr[leftindex] > arr[i])
                       {
                           swap(arr[leftindex],arr[i]);
                           i=leftindex;
                       }
                       else
                       {
                           return;
                       }
                   }
               }
           }
       
};
int main() {
    heap hp;
    int n;
    cout<<"enter the heap elements"<<endl;
    cout<<"number of element you want to insert"<<endl;
    cin>>n;
    int p;
    for(int i=0;i<n;i++)
    {
        cin>>p;
        hp.insert(p);
    }
    hp.print();
    hp.deleteroot();
    hp.print();
    return 0;
}*/
 //Heapify function to maintain heap property.
  /*  void heapify(int arr[], int n, int i)  
    {
      int largest =i;
      int left=2*i + 1;
      int right=2*i + 2;
      if(left < n && arr[left] > arr[largest])
      {
          largest=left;
      }
      if(right < n && arr[right] > arr[largest])
      {
         largest=right;
      }
      if(largest != i)
      {
          swap(arr[i],arr[largest]);
          heapify(arr,n,largest);
      }
    
    }*/
//Function to build a Heap from array.
  /*  void buildHeap(int arr[], int n)  
    { 
        for (int i = n / 2 - 1; i >= 0; i--) 
        {
               heapify(arr, n, i);
        }
    } */
//heap sort    
/* void heapSort(int arr[], int n)
    {   
        buildHeap(arr,n);
        
        while( n > 0)
        {
            swap(arr[0],arr[n - 1]);
            n--;
            heapify(arr,n,0);
        }
    }*/	
 //Is Binary Tree Heap

   /* int countnode(struct Node* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        return 1 + countnode(root->left) + countnode(root->right);
    }
    bool isCBT(struct Node* root ,int i, int k )
    {
        if(root==NULL)
        {
            return true;
        }
        if(i >= k)
        {
            return false;
        }
        
        bool left=isCBT(root->left,2*i + 1,k);
        bool right=isCBT(root->right,2*i + 2,k);
        return (left && right);  
        
    }
    bool ismax(struct Node* root)
    {
        if(root==NULL)
        {
            return true;
        }
        if(root->left==NULL && root->right==NULL) //leaf node
        {
            return true;
        }
        if(root->right==NULL)
        {
            return root->data > root->left->data;
        }
        else
        {
            bool left=ismax(root->left);
            bool right=ismax(root->right);
            if(left && right && (root->data > root->left->data && root->data > root->right->data))
            {
                return true;
            }
        }
        return false;
    }
    bool isHeap(struct Node* tree)
    {
        int index=0;
        int totalcount=countnode(tree);
        if(isCBT(tree,index,totalcount) && ismax(tree))
        {
            return true;
        }
        else
        {
            return false;
        }
    }*/
// Kth smallest element
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
   /* int kthSmallest(int arr[], int l, int r, int k) {
        
        priority_queue<int> pq;
        for(int i=0; i < k ;i++)
        {
            pq.push(arr[i]);
        }
        //baki ke element ke liye
        for(int i=k ; i <= r ;i++)
        {
            if(arr[i] < pq.top())
            {
                pq.pop();
                pq.push(arr[i]);
            }

        }
        int ans = pq.top();
        return ans;
        
    }*/
//Merge two binary Max heaps
/*void heapify(vector<int> &ans, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && ans[left] > ans[largest]) {
        largest = left;
    }
    if (right < n && ans[right] > ans[largest]) {
        largest = right;
    }

    if (largest != i) {
        swap(ans[largest], ans[i]);
        heapify(ans, n, largest);
    }
   }
   vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
    vector<int> ans;
    
    for (auto i : a) {
        ans.push_back(i);
    }
    for (auto i : b) {
        ans.push_back(i);
    }
    
    int size = ans.size();
    // Build a max-heap from the merged elements in ans
    for (int i = size / 2 - 1; i >= 0; i--) {
        heapify(ans, size, i);
    }

    return ans;
}*/
//Minimum Cost of ropes(we have done it using min heap)
//Function to return the minimum cost of connecting the ropes.
   /* long long minCost(long long arr[], long long n) {
        
        priority_queue<long long , vector<long long> , greater<long long> > pq; //minheap ke liye ye hai
        for(int i=0; i<n; i++)
        {
            pq.push(arr[i]);
        }
        long long cost=0;
        while(pq.size() > 1)
        {
            long long a=pq.top();
            pq.pop();
            long long b=pq.top();
            pq.pop();
            long long sum=a + b;
            cost += sum;
            pq.push(sum);
        }
        return cost;
    }*/
//BST to max heap
   /* void inorder(Node* root,vector<int> &ans)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
    }
    void post(Node* root,vector<int> &ans,int &i)
    {
        if(root==NULL)
        {
            return ;
        }
        post(root->left,ans,i);
        post(root->right,ans,i);
        root->data=ans[i++];
    }
    void convertToMaxHeapUtil(Node* root)
    {
        vector<int> ians;
        inorder(root,ians);
        int i=0;
        post(root,ians,i);
    }*/
//BST to min heap
/*void inorder(Node* root,vector<int> &ans)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
    } void pre(Node* root,vector<int> &ans,int &i)
    {
        if(root==NULL)
        {
            return ;
        }
        root->data=ans[i++];
        pre(root->left,ans,i);
        pre(root->right,ans,i);
    }
void convertToMaxHeapUtil(Node* root)
    {
        vector<int> ians;
        inorder(root,ians);
        int i=0;
        pre(root,ians,i);	        
    }*/                                                                      // is se O(n^2log(n^2)) complexity hai
// Function to calculate Kth largest sum in subsarray                       int kthLargestSum(int arr[], int N, int K)
                                                                              //{
                                                                                   //  vector<int> result;
 
                                                                                    // Generate all subarrays
                                                                                   // for (int i = 0; i < N; i++) {
                                                                                          //   int sum = 0;
                                                                                             // for (int j = i; j < N; j++) {
                                                                                               //    sum += arr[j];
                                                                                                 //  result.push_back(sum);
                                                                                            //    }
                                                                                  //  }
 
                                                                                    // Sort in decreasing order
                                                                                    //sort(result.begin(), result.end(), greater<int>());
 
                                                                                   // return the Kth largest sum
 //using heap(min) O(n^2log(k))                                                    // return result[K - 1];
                                                                              //  }
/*int kthLargestSum(int arr[], int N, int K)
{
    // array to store prefix sums
    int sum[N + 1];
    sum[0] = 0;
    sum[1] = arr[0];
    for (int i = 2; i <= N; i++)
        sum[i] = sum[i - 1] + arr[i - 1];
 
    // priority_queue of min heap
    priority_queue<int, vector<int>, greater<int> > Q;
 
    // loop to calculate the contiguous subarray
    // sum position-wise
    for (int i = 1; i <= N; i++) {
 
        // loop to traverse all positions that
        // form contiguous subarray                            
        for (int j = i; j <= N; j++) {
            // calculates the contiguous subarray
            // sum from j to i index
            int x = sum[j] - sum[i - 1];
 
            // if queue has less than k elements,
            // then simply push it
            if (Q.size() < K)
                Q.push(x);
 
            else {
                // it the min heap has equal to
                // k elements then just check
                // if the largest kth element is
                // smaller than x then insert
                // else its of no use                                 
                if (Q.top() < x) {
                    Q.pop();
                    Q.push(x);
                }
            }
        }
    }
 
    // the top element will be then kth
    // largest element
    return Q.top();
}*/
//Merge k Sorted Arrays
/*class node{
    public:
       int data;
       int i;
       int j;
       node(int data,int row,int col)
       {
           this->data=data;
           i=row;
           j=col;
       }
};
class compare{
    public: 
      bool operator()(node* a,node* b)
      {
          return a->data > b->data;
      }
};
class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        priority_queue<node* ,vector<node*>,compare> pq;
        //step 1 - sare arary ke first element
        for(int i=0;i<K;i++)
        {
            node* temp=new node(arr[i][0],i,0);
            pq.push(temp);
        }
        vector<int> ans;
        //step 2 - jo top per element hai ab us ke bad ka element
        while(pq.size() > 0)
        {
            node* temp=pq.top();
            ans.push_back(temp->data);
            pq.pop();
            //is chiz ke liye vo class use hai matalb khud ka datastructure
            int i=temp->i;
            int j=temp->j;
            if(j + 1 < arr[i].size())
            {
                node* next=new node(arr[i][j + 1],i,j + 1);
                pq.push(next);
            }
        }
        return ans;
    }*/
//Merge K sorted linked lists
/*class compare{
    public:
       bool operator()(Node* a,Node* b)
       {
           return a->data > b->data;
       }
};
class Solution{
  public:
    //Function to merge K sorted linked list.
    Node* mergeKLists(Node* arr[], int K) {
        priority_queue<Node*, vector<Node*>, compare> pq;

        // Step 1: Push the first node from each list into the priority queue.
        for (int i = 0; i < K; i++) {
            if (arr[i] != NULL) {
                pq.push(arr[i]);
            }
        }

        Node* head = NULL;
        Node* tail = NULL;

        while (!pq.empty()) {
            Node* temp = pq.top();
            pq.pop();

            if (head == NULL) {
                head = temp;
                tail = temp;
            } else {
                tail->next = temp;
                tail = temp;
            }

            if (temp->next != NULL) {
                pq.push(temp->next);
            }
        }

        return head;
    } */ 
//Smallest range in K lists using min heap	  
/*class Node{
    public:
       int data;
       int row;
       int col;
       Node(int d,int r,int c)
       {
           data=d;
           row=r;
           col=c;
       }
};
class compare{
    public:
       bool operator()(Node* a,Node* b)
       {
           return a->data > b->data;
       }
};
class Solution{
    public:
    pair<int,int> findSmallestRange(int KSortedArray[][N], int n, int k)
    {
        int mini=INT_MAX , maxi=INT_MIN;
        priority_queue<Node* ,vector<Node*>,compare > minheap;
        for(int i=0;i<k;i++)
        {
            int element=KSortedArray[i][0];
            mini=min(mini,element);
            maxi=max(maxi,element);
            minheap.push(new Node(element,i,0));
        }
        int start=mini , end=maxi;
        while(!minheap.empty())
        {
            Node* temp=minheap.top();
            mini=minheap.top()->data;
            minheap.pop();
            if(maxi - mini < end - start)
            {
                start=mini;
                end=maxi;
            }
            if(temp->col + 1 < n)
            {
                maxi=max(maxi,KSortedArray[temp->row][temp->col + 1]);
                minheap.push(new Node(KSortedArray[temp->row][temp-> col + 1],temp->row,temp->col + 1));
            }
            else
            {
                break;
            }
        }
        pair<int,int> ans=make_pair(start,end);
        return ans;
    }
};*/ 
//median in a stream
/*int signum(int a ,int b)
{
    if(a==b)
    {
        return 0;
    }
    else if(a > b)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
void callmedian(int element,priority_queue<int> &maxi,priority_queue<int,vector<int,greater<int> > &min,int &median)
{
    switch(signum(maxi.size(),min.size()))
    {
        case 0 : if(element > median)
                 {
                        min.push(element);
                        median=min.top();
                 }
                 else
                 {
                       maxi.push(element);
                       median=maxi.top();
                 }
                 break;
        case 1 : if(element > median)
                 {
                     mini.push(element);
                     median=(min.top() + maxi.top()) / 2;
                 }
                 else
                 {
                     min.push(maxi.top());
                     maxi.pop();
                     maxi.push(element);
                     median=(min.top() + maxi.top()) / 2;
                 }
                 break;
        case -1 : if(element > median) 
                  {
                      maxi.push(min.top());
                      min.pop();
                      min.push(element);
                      median=(min.top() + maxi.top());
                  }
                  else
                  {
                      maxi.push(element);
                      median=(mini.top() + maxi.top()) / 2;
                  }
                  break;
    }   
}
vector<int> median(vector<int> & arr)
{
    vector<int> ans;
    priority_queue<int> maxheap;
    priority_queue<int,vector<int , greater<int> > minheap;
    int median=0;
    for(int i=0;i<n;i++)
    {
        callmedian(arr[i],maxheap,minheap,median);
        ans.push_back(median);
    }
    return ans;
}*/
//gfg me ye tha ese dena tha                                                                        
/*priority_queue<int>max;
    priority_queue<int,vector<int>,greater<int>>min;
    int median;
    //Function to insert heap.
    void insertHeap(int &x)
    {
      if(max.size()==0&&min.size()==0)
    {  median=x;
    max.push(x);
    } 
    else if(x>=median)
    min.push(x);
    else
    max.push(x);
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
      if(max.size()>min.size())
     { min.push(max.top());
      max.pop();
         
     }
      else
      {
        max.push(min.top());
        min.pop();
      }
    }
    
    //Function to return Median.
    double getMedian()
    {
     if(abs(max.size()-min.size())>1)
     balanceHeaps();
     if(max.size()-min.size()==0)
     median=(max.top()+min.top())/2;
     else if(max.size()>min.size())
     median=max.top();
     else
     median=min.top();
     return median;
    }*/
