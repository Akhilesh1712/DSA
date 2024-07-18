  #include <iostream>
using namespace std;
int main()
{
	cout<<"hello";
	return 0;
}
//two Stack in an array
/*class stack{
    public:
       int top1;
       int top2;
       int * arr;
       int size;
       stack(int size)
       {
           this->size=size;
           top1=-1;
           top2=size;
           arr=new int[size];
       }
       void push1(int element)
       {
           if(top2-top1>1)  
           {
               top1++;
               arr[top1]=element;
           }
           else
           {
               cout<<"overflow"<<endl;
           }
       }
       void push2(int element2)
       {
           if(top2-top1>1)
           {
               arr[top2]=element2;
               top2--;
           }
           else
           {
               cout<<"overflow"<<endl;
           }
       }
       int pop1()
       {
           if(top1>=0)
           {
               return arr[top1];
               top1--;
           }
           else
           {
               cout<<"underflow"<<endl;
               return -1;
           }
       }
       int pop2()
       {
           if(top2<=size)
           {
               return arr[top2];
               top2++;
           }
           else
           {
               cout<<"underflow"<<endl;
               return -1;
           }
       }
       
       
       
};
int main() {
    // Write C++ code here
    stack st1(5);
    st1.push1(26);
    st1.push2(89);
    st1.pop2();

    return 0;
}*/
// C++ program to Implement a stack
// using singly linked list
/*class Node {
public:
	int data;
	Node* link;

	// Constructor
	Node(int n)
	{
		this->data = n;
		this->next = NULL;
	}
};

class Stack {
	Node* top;

public:
	Stack() { top = NULL; }

	void push(int data)
	{

		// Create new node temp and allocate memory in heap
		Node* temp = new Node(data);

		// Check if stack (heap) is full.
		// Then inserting an element would
		// lead to stack overflow
		if (!temp) {
			cout << "\nStack Overflow";
			exit(1);
		}

		

		// Put top pointer reference into temp link
		temp->next = top;

		// Make temp as top of Stack
		top = temp;
	}

	// Utility function to check if
	// the stack is empty or not
	bool isEmpty()
	{
		// If top is NULL it means that
		// there are no elements are in stack
		return top == NULL;
	}

	// Utility function to return top element in a stack
	int peek()
	{
		// If stack is not empty , return the top element
		if (!isEmpty())
			return top->data;
		else
			exit(1);
	}

	// Function to remove
	// a key from given queue q
	void pop()
	{
		Node* temp;

		// Check for stack underflow
		if (top == NULL) {
			cout << "\nStack Underflow" << endl;
			exit(1);
		}
		else {

			// Assign top to temp
			temp = top;

			// Assign second node to top
			top = top->next;

			// This will automatically destroy
			// the link between first node and second node

			// Release memory of top node
			// i.e delete the node
			free(temp);
		}
	}

	// Function to print all the
	// elements of the stack
	void display()
	{
		Node* temp;

		// Check for stack underflow
		if (top == NULL) {
			cout << "\nStack Underflow";
			exit(1);
		}
		else {
			temp = top;
			while (temp != NULL) {

				// Print node data
				cout << temp->data;

				// Assign temp link to temp
				temp = temp->next;
				if (temp != NULL)
					cout << " -> ";
			}
		}
	}
};

// Driven Program
int main()
{
	// Creating a stack
	Stack s;

	// Push the elements of stack
	s.push(11);
	s.push(22);
	s.push(33);
	s.push(44);

	// Display stack elements
	s.display();

	// Print top element of stack
	cout << "\nTop element is " << s.peek() << endl;

	// Delete top elements of stack
	s.pop();
	s.pop();

	// Display stack elements
	s.display();

	// Print top element of stack
	cout << "\nTop element is " << s.peek() << endl;

	return 0;
}*/

/*#include<stack>
using namespace std;
//deleting middle element of stack
void solve(stack<int>& s,int count,int n)
{
    //base case
    if(count==n/2)
    {
        s.pop();//us element ko nikal do
        return;
    }
    int num=s.top();
    s.pop();
    solve(s,count +1,n);
    s.push(num);
    
}
void deletemid(stack<int>& s,int n)
{
    int count=0;
    solve(s,count,n);
}
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    deletemid(s,5);
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}*/
//code for valid parenthensis
/*bool valid(String S)
{
    stack<char> s;
    for(int i=0;i<S.lenght();i++)
    {
        char ch=S[i];
        if(ch=='('||ch=='{'||ch=='[')
        {
            s.push();
        }
        else
        {
            if(!s.empty())
            {
                char top=s.top();
                if((ch=='('&&top==')')&&(ch=='{'&&top=='}')||(ch=='['&&top==']'))
                {
                    s.pop();
                }
            }
            else
            {
                return false;
            }
        }
    }
    if(s.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}*/
/*#include<iostream>
#include<stack>
using namespace std;
//deleting middle element of stack
void insert(stack<int> & s,int element)
{
    if(s.empty())
    {
        s.push(element);
        return;
    }
    int num=s.top();
    s.pop();
    insert(s,element);
    s.push(num);
}
void reversal(stack<int> & s)
{
    if(s.empty())
    {
        return;
    }
    int num=s.top();
    s.pop();
    reversal(s);
    insert(s,num);
}
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    reversal(s);
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}*/
/*#include<stack>
using namespace std;
//sorting of stack using reccursion
void sorted1(stack<int> & s,int n1)
{
    if(s.empty()||s.top()<n1)
    {
        s.push(n1);
        return;
    }
    int num=s.top();
    s.pop();
    sorted1(s,n1);
    s.push(num);
}
void sorted(stack<int> & s)
{
    if(s.empty())
    {
        return ;
    }
    int num=s.top();
    s.pop();
    sorted(s);
    sorted1(s,num);
}
int main()
{
    stack<int> s;
    s.push(0);
    s.push(6);
    s.push(3);
    s.push(9);
    s.push(5);
    sorted(s);
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}*/
//is redundant or not
/*#include<stack>
using namespace std;
bool redundant(string &s)
{
    stack<char> g;
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        if(ch=='('||ch=='+'||ch=='-'||ch=='/'||ch=='*')
        {
            g.push(ch);
        }
        else
        {
            if(ch==')')
            {
                bool isredundant=true;
                while(g.top()!='(')
                {
                   char top=g.top();
                   if(top=='+'||top=='-'||top=='/'||top=='*')
                   {
                       isredundant=false;
                   }
                   g.pop();
                }
                if(isredundant==true)
                {
                    return true;
                }
                g.pop();
            }
        }
    }
    return false;
}
int main() {
    
    string  s="((a+b))";
    cout<<s<<endl;
    cout<<redundant(s)<<endl;
    return 0;
}*/
//to find minimum ways to make parentahsis valid
/*int findmin(string &s)
{   //agr odd hai to valid nhi kar sakte hai
    if (s.length() % 2 == 1)
    {
        return -1;
    }
    stack<char> j;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch == '{')
        {
            j.push(ch);
        }
        else
        {
            if (!j.empty() && j.top() == '{')
            {
                j.pop();
            }
            else
            {
                j.push(ch);
            }
        }
    }
    int a = 0, b = 0;
    while (!j.empty())
    {
        char top = j.top();
        if (top == '{')
        {
            a++;
        }
        else
        {
            b++;
        }
        j.pop();
    }
    int ans = (a + 1) / 2 + (b + 1) / 2;
    return ans;
}
int main(){
    string s="{{{{{}{{}}}{{}{}{}{{{{}}}}{}}}}}}}{{{{{}{}}}}{";
    cout<<findmin(s);
    return 0;
}*/
 //Function to find the next greater element for each element of the array.
/*vector<long long> nextLargerElement(vector<long long> arr, int n)
{
    stack<long long> s;
    s.push(-1);
    vector<long long> ans(n, -1); // Initialize ans with -1 elements
    for (int i = n - 1; i >= 0; i--)
    {
        long long curr = arr[i];
        while (!s.empty() && s.top() <= curr)
        {
            s.pop();
        }
        if (!s.empty())
        {
            ans[i] = s.top();
        }
        s.push(curr);
    }
    return ans;
}*/
//printing largest histogram area
/*#include<iostream>
#include<vector>
#include<stack>
#include<climits>
using namespace std;
vector<int> nextsmaller(vector<int> &arr,int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    for(int i=n-1;i>=0;i--)
    {   int curr=arr[i];
        while(s.top()!=-1&&arr[s.top()]>=curr)
        {
            s.pop();
        }
        ans[i]=s.top();
        s.push(curr);
    }
    return ans;
}
vector<int> prevsmaller(vector<int> &arr,int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    for(int i=0;i<=n;i++)
    {   int curr=arr[i];
        while(s.top()!=-1&&arr[s.top()]>=curr)
        {
            s.pop();
        }
        ans[i]=s.top();
        s.push(curr);
    }
    return ans;
}
int largest( vector<int> & height)
{
    int n=height.size();
    vector<int> newsmaller(n);
    newsmaller=nextsmaller(height,n);
    vector<int> prevnewsmaller(n);
    prevnewsmaller=prevsmaller(height,n);
    int area=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int l=height[i];
        if(newsmaller[i]==-1)
        {
            newsmaller[i]=n;
        }
        int b=newsmaller[i]- prevnewsmaller[i] - 1;
        int newarea=l*b;
        area=max(newarea,area);
    }
    return area;
}
int main()
{
    vector<int> v={4,6,6,2,5,6,75,45};
    cout<<largest(v);
    
    return 0;
    
}*/
//another solution
//Function to find largest rectangular area possible in a given histogram.
   /* long long getMaxArea(long long hist[], long long n){
    
    //creating an empty stack. The stack holds indexes of hist[] array.
    //the bars stored in stack are always in increasing order of their heights. 
    stack<long long> s; 
  
    long long max_area = 0;  
    long long tp;  
    long long area_with_top; 
  
    long long i = 0; 
    
    //traversing the array.
    while (i < n) 
    { 
        //if current bar is greater than or equal to bar on top 
        //of stack, we push the index into stack. 
        if (s.empty() || hist[s.top()] <= hist[i]) 
            s.push(i++); 
  
        //if current bar is lower than bar on top of stack, we calculate
        //area of rectangle with top of stack as the smallest bar.  
        //i is rightindex for top and element before top in stack is leftindex
        else
        { 
            tp = s.top();  
            //popping the top element of stack.
            s.pop();  
  
            //calculating the area with hist[tp] stack as smallest bar. 
            area_with_top=hist[tp]*(s.empty()? i :i-s.top()-1); 
  
            //updating maximum area, if needed. 
            if (max_area < area_with_top) 
                max_area = area_with_top; 
        } 
    } 
  
    //now popping the remaining bars from stack and calculating 
    //area with every popped bar as the smallest bar.
    while (s.empty() == false) 
    { 
        tp = s.top(); 
        s.pop(); 
        
        area_with_top=hist[tp]*(s.empty()? i :i-s.top()-1); 
  
        //updating maximum area, if needed. 
        if (max_area < area_with_top) 
            max_area = area_with_top; 
    } 
    //returning the maximum area.
    return max_area;
   } */
  /*  //Function to find if there is a celebrity in the party or not.
    bool knows(vector<vector<int> >& M, int a,int b)
    {
        if(M[a][b]==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int celebrity(vector<vector<int> >& M, int n) 
    {
         stack<int> s;
         for(int i=0;i<n;i++)
         {
             s.push(i);
         }
         while(s.size()>1)
         {
             int a=s.top();
             s.pop();
             int b=s.top();
             s.pop();
             if(knows(M,a,b))
             {
                 s.push(b);
             }
             else
             {
                 s.push(a);
             }
         }
         //single one can be
         int candidate=s.top();
         bool rowcheck=false;
         int zerocount=0;
         for(int i=0;i<n;i++)
         {
             if(M[candidate][i]==0)
             {
                 zerocount++;
             }
         }
         if(zerocount==n)
         {
             rowcheck=true;
         }
         bool colcheck=false;
         int onecount=0;
         for(int i=0;i<n;i++)
         {
             if(M[i][candidate]==1)
             {
                 onecount++;
             }
         }
         if(onecount==n-1)//daigonal walla nhi hoga bus
         {
             colcheck=true;
         }
         if(rowcheck==true&&colcheck==true)
         {
             return candidate;
         }
         else
         {
             return -1;
         }
    }*/


