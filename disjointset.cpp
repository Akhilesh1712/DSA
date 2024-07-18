#include <bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"hello";
	return 0;
}
//disjoint set
/*int findparent(vector<int> parent,int node)
{
    if(parent[node] == node)
    {
        return node;
    }
    return parent[node]=findparent(parent,parent[node]);
}
void unionset(int u,int v,vactor<int> &parent,vector<int> &rank)
{
    u=findparent(parent,u);
    v=findparent(parent,v);
    if(rank[u] < rank[v])
    {
        parent[u]=v
    }
    else if(rank[u] > rank[v])
    {
        parent[v]=u;
    }
    else{
        parent[v]=u;
        rank[u]++;
    }
}
bool samecomponent(int u,int v)
{
    if(parent[u] == parent[v])
    {
        return true;
    }
    return false;
}
void disjiontset(int u,int v,int n)
{
    vector<int> parent(n);
    vector<int> rank(n);
    for(int i=0;i<n;i++)
    {
        parent[i]=i;
        rank[i]=0;
    }
    unionset(u,v,parent,rank);
    //check for the same component
    bool ans=samecomponent(u.v);
    if(ans)
    {
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}*/
 //Function to detect cycle using DSU in an undirected graph.
   /* vector<int>parent;
    vector<int>rank;
    int find(int x){
        if(x==parent[x]){
            return x;
        }
        return parent[x]=find(parent[x]);
    }
    
    void Union(int x,int y){
        int x_parent=find(x);
        int y_parent=find(y);
        if(x_parent==y_parent){
            return;
        }
        if(rank[x_parent]>rank[y_parent]){
            parent[y_parent]=x_parent;
        }
        else if(rank[x_parent]<rank[y_parent]){
            parent[x_parent]=y_parent;
        }
        else{
            parent[x_parent]=y_parent;
            rank[y_parent]++;
        }
    }
   
	int detectCycle(int V, vector<int>adj[])
	{
	    // Code here
	     parent.resize(V);
	    rank.resize(V);
	    for(int i=0;i<V;i++){
	        parent[i]=i;
	        rank[i]=1;
	    }
	    // Code here
	    for(int u=0;u<V;u++){
	        for(int v:adj[u]){
	            if(u<v){
	                int parent_u=find(u);
	                int parent_v=find(v);
	                if(parent_u==parent_v){
	                    return true;
	                }
	                Union(u,v);
	            }
	        }
	    }
	    return false;
	}*/
/*Given an array A[] that stores all number from 1 to N (both inclusive and sorted) and K queries.

The task is to do the following operations on array elements :

1. UNION X Z : Perform union of X and Z i.e. parent of Z will become the parent of X.
2. FIND X: Find the ultimate parent of X and print it.
int find(int A[],int X)
{
       if(X==A[X]) return X;
       return A[X]=find(A,A[X]);
}
void unionSet(int A[],int X,int Z)
{
	int x=find(A,X);
	int y=find(A,Z);
	A[x]=y;
}*/
//Function to find the maximum profit and the number of jobs done using disjoint set
/*struct disjointset
{
    int *parent;
    disjointset(int n)
    {
        parent = new int[n + 1];
        for(int i=0;i<=n;i++)
        {
            parent[i]=i;
        }
    }
    int find(int s)
    {
        if(s == parent[s])
        {
            return s;
        }
        return parent[s]=find(parent[s]);
    }
    void merge(int u,int v)
    {
        parent[v] = u;
    }
};
    int findMaxDeadline(struct Job arr[],int n)
    {
        int ans = INT_MIN;
        for(int i=0;i<n;i++)
        {
            ans=max(ans,arr[i].dead);
        }
        return ans;
    }
    bool cmp(Job x, Job y)
    {
        return (x.profit > y.profit);
    }

class Solution 
{
    public:
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        vector<int> ans;
        int total=0;
        sort(arr,arr + n,cmp);
        int mxdead=findMaxDeadline(arr,n);
        disjointset ds(mxdead);
        for(int i=0;i<n;i++)
        {
            int slot=ds.find(arr[i].dead);
            if(slot > 0)
            {
                ds.merge(ds.find(slot - 1),slot);
                total += arr[i].profit;
            }
        }
        ans.push_back(total);
        return ans;
    } 
};*/	
