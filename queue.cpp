#include<iostream>
#include<queue>
using namespace std;
int main()
{
	queue<int> q;
	q.push(10);
	q.push(40);
	cout<<q.front()<<endl;
	q.pop();
	if(q.empty())
	{
		cout<<" empty"<<endl;
	}
	else
	{
		cout<<"not empty";
	}
	return 0;
}
//queue impimentation using queue
/*class queue
{
    int * arr;
    int front;
    int rear;
    int size;
    public:
         queue(int s)
         {
             this->size=s;
             arr=new int[size];
             front=0;
             rear=0;
         }
         void enqueue(int data)
        {
            if(rear==size)
            {
                cout<<"queue is full"<<endl;
            }
            else
            {
                arr[rear]=data;
                rear++;
            }
        }
        int dequeue()
        {
            if(front==rear)
            {
                cout<<"queue is full"<<endl;
                return -1;
            }
            else
            {
                int ans=arr[front];
                arr[front]=-1;
                front++;
                if(front==rear)
                {
                    front=0;
                    rear=0;
                }
                return ans;
            }
        }
        int afront()
        {
            if(front==rear)//same voho condition hai empty walli
            {
                 return -1;
            }
            else
            {
                return arr[front];
            }
        }
        bool isempty()
        {
            if(front==rear)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};
int main() {
    // Write C++ code here
    queue q(4);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(5);
    q.dequeue();
    cout<<q.afront()<<endl;
    if(q.isempty())
    {
        cout<<"yes empty"<<endl;
    }
    else
    {
        cout<<"not empty"<<endl;
    }
    return 0;
}*/
//queue using linked list
/*class qnode{
    public:
      int data;
      qnode* next;
      qnode(int d)
      {
          this->data=d;
          next=NULL;
      }
};
class queue{
    public:
      qnode * front,* rear;
      queue()
      { 
          front=rear=NULL;
      }
      void enqueue(int x)
      {
          qnode* temp= new qnode(x);
          if(rear==NULL)// matlab empty hai
          {
              front=rear=temp;
              return;
          }
          rear-> next=temp;
          rear=temp;
      }
      void dequeue()
      {
          if( rear==NULL)
          {
              cout<< "queue is full";
          }
          qnode* temp=front;
          front=front->next;
          if(front==NULL)
          {
              rear=NULL;
          }
          delete(temp);
      }
      int afront()
      {
          if(front==NULL)
          {
              return -1;
          }
          return front->data;
      }
      bool isempty()
      {
          if(rear==NULL)
          {
              return 1;
          }
          return 0;
      }
    
};
int main() {
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    cout<<"queue front"<<q.afront()<<endl;
    q.dequeue();
    cout<<"queue front"<<q.afront()<<endl;
    q.dequeue();
    if(q.isempty())
    {
        cout<<"yes empty";
    }
    else
    {
        cout<<"not empty";
    }
    return 0;
} */
//circularqueue 
/*class circularqueue{
    public:
       int size;
       int *arr;
       int front;
       int rear;
       circularqueue(int s)
       {
           this->size=s;
           arr=new int[s];
           front=rear=-1;
       }
       //enqueue x if it queued succesfully return 1 or 0 when not
       bool enqueue(int value)
       {
           if(front==0&&rear==size-1||rear==(front-1)%size)
           {
               return false;
           }
           else if(front==-1)
           {
               front=rear=0;
           }
           else if(rear==size-1&&front!=0)
           {
               rear=0;
           }
           else{
               rear++;
           }
           arr[rear]=value;
           return true;
       }
       int dequeue()
       {
           if(front==-1)
           {
               return -1;
           }
           int ans=arr[front];
           arr[front]=-1;
           if(front==rear)
           {
               front=rear=-1;
           }
           else if(front==size-1)
           {
               front=0;
           }
           else{
               front++;
           }
           return ans;
           
       }
};
int main()
{
    circularqueue q(4);
    q.enqueue(10);
    q.enqueue(20);
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue();
    return 0;
}  */
//doublyqueue
/*class doublyqueue{
    public:
     int *arr;
     int size;
     int front;
     int rear;
     doublyqueue(int s)
     {
         this->size=s;
         arr=new int[s];
         front=rear=-1;
     }
     bool push_front(int x)
     {
         if(front==0&&rear==size-1||rear==(front-1)%size)
         {
             return false;
         }
         else if(front==0&&rear!=size-1)
         {
             front=size-1;
         }
         else if(front==-1)
         {
             front=rear=0;
         }
         else{
             front--;
         }
         arr[front]=x;
         return true;
     }
     bool push_rear(int x)
       {
           if(front==0&&rear==size-1||rear==(front-1)%size)
           {
               return false;
           }
           else if(front==-1)
           {
               front=rear=0;
           }
           else if(rear==size-1&&front!=0)
           {
               rear=0;
           }
           else{
               rear++;
           }
           arr[rear]=x;
           return true;
       }
    int pop_rear()
    {
        if(rear==-1)
        {
            return -1;
        }
        int ans=arr[rear];
        arr[rear]=-1;
        if(front==rear)
        {
            front=rear=-1;
        }
        else if(rear==0)
        {
            rear=size-1;
        }
        else{
            rear--;
        }
        return ans;
    }
    int pop_front()
       {
           if(front==-1)
           {
               return -1;
           }
           int ans=arr[front];
           arr[front]=-1;
           if(front==rear)
           {
               front=rear=-1;
           }
           else if(front==size-1)
           {
               front=0;
           }
           else{
               front++;
           }
           return ans;
       }
    int get_front()
    {
        if(rear==-1)
        {
            return -1;
        }
        return arr[front];
    }
    int get_rear()
    {
        if(rear==-1)
        {
            return -1;
        }
        return arr[rear];
    }
    bool isempty()
    {
        if(rear==-1)
        {
            return true;
        }
        return false;
    }
    bool isfull()
    {
        if(front==0&&rear==size-1||rear==(front-1)%size)
        {
            return true;
        }
        return false;
    }
    
};
int main()
{
    doublyqueue q(4);
    q.push_front(10);
    q.push_rear(20);
    q.pop_front();
    q.pop_rear();
    return 0;
    
}*/
//reverse queue
/*#include <stack>
#include <queue>
queue<int> rev(queue<int> q)
{
    stack<int> s;
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        s.push(temp);
    }
    while (!s.empty())
    {
        int temp = s.top();
        s.pop();
        q.push(temp);
    }
    return q;
}

int main()
{
    queue<int> q;
    int i = 0;
    int j;
    cin >> j;
    while (i < j)
    {
        int g;
        cin >> g;
        q.push(g);
        i++;
    }

    // Reverse the queue
    q = rev(q);

    int k = 0;
    int arr[j];
    while (!q.empty())
    {
        arr[k] = q.front();
        q.pop();
        k++;
    }
    for (int l = 0; l < j; l++)
    {
        cout << arr[l] << " ";
    }
    return 0;
}*/
//first k size window negative
/*#include<deque>
vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                                                 
    deque<long long int> q;
    vector<long long int> ans;
    for(int i=0;i<K;i++)
    {
        if(A[i]<0)
        {
            q.push_back(i);
        }
    }
    if(q.size()>0)
    {
        ans.push_back(A[q.front()]);
    }
    else
    {
        ans.push_back(0);
    }
    //processing for remaining windaow
    for(int i=K;i<N;i++)
    {
        //removing
        if(!q.empty()&&i - q.front()>=K)
        {
            
            q.pop_front();
        }
    
        //addition
       if(A[i]<0)
      {
        q.push_back(i);
      }
      //ans
      if(q.size()>0)
      {
         
        ans.push_back(A[q.front()]);
      }
      else
      {
        ans.push_back(0);
      }
    
    }
    return ans;                                              
 }*/
 // Function to reverse first k elements of a queue.
/* #include<stack>
queue<int> modifyQueue(queue<int> q, int k) {
    stack<int> s;
    for(int i=0;i<k;i++)
    {
        int val=q.front();
        q.pop();
        s.push(val);
    }
    while(!s.empty())
    {
        int val=s.top();
        s.pop();
        q.push(val);
    }
    int t=q.size() - k;
    while(t--)
    {
        int val=q.front();
        q.pop();
        q.push(val);
    }
    return q;
}*/
//circular tour
/*int tour(petrolPump p[],int n)
    {
       int deficit=0;
       int balanced=0;
       int start=0;
       for(int i=0;i<n;i++)
       {
           balanced +=p[i].petrol - p[i].distance;
           if(balanced<0)
           {
               deficit  =deficit + balanced;
               start=i+1;
               balanced=0;
           }
       }
       if(deficit + balanced>=0)
       {
           return start;
       }
       else
       {
           return -1;
       }
    }
};*/
//interleave the first half wiht second half
   /* vector<int> rearrangeQueue(queue<int> &q){
        int m=q.size()/2;
        queue<int> newqueue;
        vector<int> v;// vector hai return type isliye 
        for(int i=0;i<m;i++)
        {
            int val=q.front();
            q.pop();
            newqueue.push(val);
        }
        while(!newqueue.empty())
        {
            int val=newqueue.front();
            newqueue.pop();
            q.push(val);
            val=q.front();
            q.pop();
            q.push(val);
        }
        while(!q.empty())
        {
            int val=q.front();
            q.pop();
            v.push_back(val);
        }
        return v;
        
    }*/
// n queue in array
/*class kqueue{
    public:
      int n;
      int k;
      int *front;
      int *rear;
      int* arr;
      int freespot;
      int* next;
      kqueue(int n,int k)
      {
          this->n=n;
          this->k=k;
          front=new int[k];
          rear=new int[k];
          arr=new int[n];
          next=new int[n];
          for(int i=0;i<k;i++)
          {
              front[i]=-1;
              rear[i]=-1;
          }
          for(int i=0;i<n;i++)
          {
              next[i]=i+1;
          }
          next[n-1]=-1;
      }
      void enqueue(int data,int qn)
      {
          if(freespot==-1)
          {
              cout<<"no space"<<endl;
              return;
          }
          int index=freespot;
          freespot=next[index];
          if(front[qn-1]==-1)
          {
              front[qn-1]=index;
          }
          else
          {
              rear[qn-1]=index;
          }
          next[index]=-1;
          rear[qn-1]=index;
          arr[index]=data;
      }
      int dequeue(int qn)
      {
          if(front[qn-1]==-1)
          {   cout<<"underflow"<<endl;
              return -1;
          }
          int index=front[qn-1];
          front[qn-1]=next[index];
          next[index]=freespot;
          freespot=index;
          return arr[index];
      }
};
int main() {
    kqueue q(10,3);
    q.enqueue(10,1);
    q.enqueue(15,1);
    q.enqueue(20,2);
    q.enqueue(25,1);
    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(2)<<endl;
    cout<<q.dequeue(1)<<endl;
    return 0;
} */  
//sum of maxi and mini element of subaray of k size
/*using namespace std;
int solve(int *arr,int n,int k)
{
    deque<int> maxi(k);
    deque<int> mini(k);
    //addition of first k-size
    for(int i=0;i<k;i++)
    {
        while(!maxi.empty()&&arr[maxi.back()]<=arr[i])
        {
            maxi.pop_back();
        }
        while(!mini.empty()&&arr[mini.back()]>=arr[i])
        {
            mini.pop_back();
        }
        maxi.push_back(i);
        mini.push_back(i);
    }
    int ans=0;
    for(int i=k;i<n;i++)
    {
        ans+=arr[maxi.front()] + arr[mini.front()];
        //next window
        while(!maxi.empty()&& i - maxi.front()>=k)
        {
            maxi.pop_front();
        }
        while(!mini.empty()&& i - mini.front()>=k)
        {
            mini.pop_front();
        }
        //addition
        while(!maxi.empty()&&arr[maxi.back()]<=arr[i])
        {
            maxi.pop_back();
        }
        while(!mini.empty()&&arr[mini.back()]>=arr[i])
        {
            mini.pop_back();
        }
        maxi.push_back(i);
        mini.push_back(i);
    }
    //for last
    ans+=arr[maxi.front()] + arr[mini.front()];
    return ans;
}
int main() {
    int arr[7]={2,-5,-1,7,-3,-1,-2};
    int k=4;
    cout<<solve(arr,7,k);
    return 0;
} */
// Returns sum of min and max element of all subarrays
// of size k in O(N^2*k)
/*int SumOfKsubArray(int arr[], int N, int k)
{
    // To store final answer
    int sum = 0;

    // Find all subarray
    for (int i = 0; i < N; i++) {
        // To store length of subarray
        int length = 0;
        for (int j = i; j < N; j++) {
            // Increment the length
            length++;

            // When there is subarray of size k
            if (length == k) {
                // To store maximum and minimum element
                int maxi = INT_MIN;
                int mini = INT_MAX;

                for (int m = i; m <= j; m++) {
                    // Find maximum and minimum element
                    maxi = max(maxi, arr[m]);
                    mini = min(mini, arr[m]);
                }

                // Add maximum and minimum element in sum
                sum += maxi + mini;
            }
        }
    }
    return sum;
}*/

