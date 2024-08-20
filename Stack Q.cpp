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
//next greater leetcode 496
/*vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> nexti(m,-1);
        vector<int> ans;
        unordered_map<int,int> mp;
        stack<int> st;
        st.push(-1);
        for(int i=m - 1;i>=0;i--){
            while(!st.empty() && st.top() <= nums2[i]){
                st.pop();
            }
            if(!st.empty()){
                nexti[i] = st.top();
            }
            st.push(nums2[i]);
        }
        for(int i=0;i<m;i++){
            mp[nums2[i]] = i;
        }
        for(int i=0;i<n;i++){
             int indextofind = nums1[i];
             int indexis = mp[indextofind];
             ans.push_back(nexti[indexis]);
        }
        return ans;
    }*/
//Next element 2
/*vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        stack<int> st;
        for(int i=2*n - 1;i>=0;i--){
            while(!st.empty() && st.top() <= nums[i%n]){
                st.pop();
            }
            if(i<n){
                ans[i] = st.empty() ? -1 : st.top();
            }
            st.push(nums[i%n]);
        }
        return ans;
    }*/
// Function to convert an infix expression to a postfix expression.
    /*int priority(char ch) {
        if (ch == '^') {
            return 3;
        } else if (ch == '*' || ch == '/') {
            return 2;
        } else if (ch == '+' || ch == '-') {
            return 1;
        } else {
            return -1;
        }
    }
    string infixToPostfix(string s) {
        int i =0;
        int n = s.size();
        string ans = "";
        stack<char> st;
        while(i<n){
             if(s[i] >= '0' && s[i] <= '9' || s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z'){
                ans = ans + s[i];
             }else if(s[i] == '('){
                st.push('(');
             }else if(s[i] == ')'){
                while(!st.empty() && st.top() != '('){
                    ans += st.top();
                    st.pop();
                }
                st.pop();
             }else{
                while(!st.empty() && priority(s[i]) <= priority(st.top())){
                    ans += st.top();
                    st.pop();
                }
                st.push(s[i]);
             }
             i++;
        }
        while(!st.empty()){
            ans = ans + st.top();
            st.pop();
        }
        return ans;
    } */
//Infix to prefix in it
/*int priority(char ch) {
        if (ch == '^') {
            return 3;
        } else if (ch == '*' || ch == '/') {
            return 2;
        } else if (ch == '+' || ch == '-') {
            return 1;
        } else {
            return -1;
        }
    }
    string intoprefix(string s) {
        int i =0;
        int n = s.size();
        reverse(s.begin(),s.end());
        string ans = "";
        stack<char> st;
        while(i<n){
             if(s[i] >= '0' && s[i] <= '9' || s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z'){
                ans = ans + s[i];
             }else if(s[i] == '('){
                st.push('(');
             }else if(s[i] == ')'){
                while(!st.empty() && st.top() != '('){
                    ans += st.top();
                    st.pop();
                }
                st.pop();
             }else{
                if(s[i] == '^'){
                   while(!st.empty() && priority(s[i]) <= priority(st.top())){
                    ans += st.top();
                    st.pop();
                   }
                }else{
                   while(!st.empty() && priority(s[i]) < priority(st.top())){
                    ans += st.top();
                    st.pop();
                   } 
                }
                
                st.push(s[i]);
             }
             i++;
        }
        while(!st.empty()){
            ans = ans + st.top();
            st.pop();
        }
        return reverse(ans.begin(),ans.end());
    }*/    
//LRU CACHE
/*class LRUCache
{
    public:
    class Node{
        public:
        int data;
        int key;
        Node* next;
        Node* prev;
        Node(int key,int data){
            this->key = key;
            this->data = data;
            prev = NULL;
            next = NULL;
        }
    };
    unordered_map<int,Node*> mp;
    Node* head = new Node(-1,-1);
    Node* tail = new Node(-1,-1);
    int cap;
    LRUCache(int cap)
    {
        this->cap = cap;
        head->next = tail;
        tail->prev = head;
    }
    void addfront(Node* node){
        Node* temp = head->next;
        node->prev = head;
        head->next = node;
        node->next = temp;
        temp->prev = node;
    }
    void deletenode(Node* node){
        Node* deleteprev = node->prev;
        Node* deletenext = node->next;
        deleteprev->next = deletenext;
        deletenext->prev = deleteprev;
    }
    //Function to return value corresponding to the key.
    int GET(int key)
    {
        if(mp.find(key) != mp.end()){
            Node* ansnode = mp[key];
            int ans = ansnode->data;
            mp.erase(key);
            deletenode(ansnode);
            addfront(ansnode);
            mp[key] = head->next;
            return ans;
        }
        return -1;
    }
    
    //Function for storing key-value pair.
    void SET(int key, int value)
    {
        if(mp.find(key) != mp.end()){
            Node* exist = mp[key];
            mp.erase(key);
            deletenode(exist);
        }
        if(mp.size() == cap){
            mp.erase(tail->prev->key);
            deletenode(tail->prev);
        }
        addfront(new Node(key,value));
        mp[key] = head->next;
    }
};*/	   
//LFU cache
/*struct List{
    int size;
    Node* head;
    Node* tail;
    List(){
        head = new Node(0,0);
        tail = new Node(0,0);
        head->next = tail;
        tail->prev = head;
        this->size = 0;
    }
    void addfront(Node* node){
        Node* temp = head->next;
        node->next = temp;
        head->next = node;
        node->prev = head;
        temp->prev = node;
        size++;
    }
    void deletenode(Node* node){
        Node* deleteprev = node->prev;
        Node* deletenext = node->next;
        deletenext->prev = deleteprev;
        deleteprev->next = deletenext;
        size--;
    }
};

class LFUCache {
public:
    map<int,List*> frequencymap;
    map<int,Node*> keymap;
    int maxsize;
    int minfreq;
    int currsize;
    LFUCache(int cap) {
        this->maxsize = cap;
        this->minfreq = 0;
        this->currsize = 0;
    }
    
    void updatefrequency(Node* node){
        keymap.erase(node->key);
        frequencymap[node->cnt]->deletenode(node);
        if(node->cnt == minfreq && frequencymap[node->cnt]->size == 0){
            minfreq++;
        }
        List* nexthigher = new List();
        if(frequencymap.find(node->cnt + 1) != frequencymap.end()){
            nexthigher = frequencymap[node->cnt + 1];
        }
        node->cnt += 1;
        nexthigher->addfront(node);//is nexthigher dll me is node ko front per dal do
        frequencymap[node->cnt] = nexthigher;
        keymap[node->key] = node;
    }
    
    int get(int key) {
        if(keymap.find(key) != keymap.end()){
            Node* node = keymap[key];
            int ans = node->data;
            updatefrequency(node);
            return ans;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(maxsize == 0){
            return;
        }
        if(keymap.find(key) != keymap.end()){
            Node* node = keymap[key];
            node->data =  value;
            updatefrequency(node);
        }
        else{
            if(currsize == maxsize){
                List* list = frequencymap[minfreq];
                keymap.erase(list->tail->prev->key);
                frequencymap[minfreq]->deletenode(list->tail->prev);
                currsize--;
            }
            currsize++;
            minfreq = 1;
            List* list = new List();
            if(frequencymap.find(minfreq) != frequencymap.end()){
                list = frequencymap[minfreq];
            }
            Node * node = new Node(key,value);
            list->addfront(node);
            keymap[key] = node;
            frequencymap[minfreq] = list;
        }
    }
};*/
//132 Pattern
 /*bool find132pattern(vector<int>& nums) {
        int n  = nums.size();
        vector<int> mini(n);
        mini[0] = nums[0];
        for(int i=1;i<n;i++){
            mini[i] = min(mini[i - 1],nums[i]);
        }
        stack<int> st;
        for(int i=n - 1;i>=0;i--){
            while(!st.empty() && st.top() <= mini[i]){
                   st.pop();
            }
            if(!st.empty() && st.top() < nums[i]) return true;
            st.push(nums[i]);
        }
        return false;
    }*/
//stock span gfg walla 
/*vector <int> calculateSpan(int price[], int n)
    {
       stack<pair<int,int>> st;
       vector<int> ans;
       int ans1;
       for(int i=0;i<n;i++){
           while(!st.empty() && st.top().first <= price[i]){
               st.pop();
           }
           ans1 = i - (st.empty() ? -1 : st.top().second);
           ans.push_back(ans1);
           st.push({price[i],i});
       }
       return ans; 
    }*/
//Leetcode walla
/*class StockSpanner {
public:
    int ind;
    stack<pair<int,int>> st;
    StockSpanner() {
        ind = -1;
    }
    
    int next(int price) {
        ind += 1;
        int ans;
        while(!st.empty() && st.top().first <= price){
            st.pop();
        }
        ans = ind - (st.empty() ? -1 : st.top().second);
        st.push({price,ind});
        return ans;
    }
};*/	    

