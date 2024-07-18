#include <bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"hello";
	return 0;
}
//credtion of adajency list and printiong it
/*class graph{
    public:
        unordered_map<int ,list<int> > adj;
		void addEdj(int u,int v,bool direction)
		{
			//direction=0 means undirected
			//direction=1 means directed
			adj[u].push_back(v);
			if(direction = 0)
			{
				adj[v].push_back(u);
			}
		 } 
		 void printadj(){
		 	for(auto i:adj)
		 	{
		 		cout<<i.first<<"-->";
		 		for(auto j:i.second)
		 		{
		 			cout<<j<<",";
				 }
				 cout<<endl;
			 }
		 }
};
int main(){
     int n;
	 cout<<"enter no of nodes";
	 cin>>n;
	 int m;
	 cout<<"enter no of edges";
	 cin>>m;
	 graph g;
	 for(int i=0;i<m;i++)
	 {
	     int u;
		 int v;
		 cin>>u>>v;
		 g.addEdj(u,v,0); 	
	 }
	 g.printadj();	
}*/
//another way
/*vector<vector<int>> printadj(int n,int m,vector<vector<int>> &edges)
{
	vector<int> ans[n];//ye apne index per alag se vector bna lega
	for(int i=0;i<n;i++)
	{
		int u=edges[i][0];
		int v=edges[i][1];
		ans[u].push_back(v);
		ans[v].push_back(u);
	}
	vector<vector<int>> adj;
	for(int i=0;i<n;i++)
	{
		adj[i].push_back(i);//ye coding nija per q tha us ke condition thi
		for(int j=0;j<ans[i].size();j++)
		{
			adj[j].push_back(ans[i][j]);
		}
	}
	return adj;
}*/
//geekqans
/* vector<vector<int>> printGraph(int V, vector<pair<int,int>>edges) {
        vector<vector<int>> adj(V);
        for(int i=0;i<edges.size();i++){
            adj[edges[i].first].push_back(edges[i].second);
            adj[edges[i].second].push_back(edges[i].first);
        }
        return adj;
    }*/
// Function to return Breadth First Traversal of given graph.
/*    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> visited(V,0);
        queue<int> q;
        q.push(0);
        visited[0]=1;
        vector<int> ans;
        while(!q.empty())
        {
            int frontnode=q.front();
            q.pop();
            ans.push_back(frontnode);
            vector<int> adjacent=adj[frontnode];
            for(int i=0;i<adjacent.size();i++)
            {
                if(visited[adjacent[i]]==0)
                {
                    q.push(adjacent[i]);
                    visited[adjacent[i]]=1;
                }
            }
        }
        return ans;
    }*/
//some other way to do BFS
/*void preparedadj(int V,vector<pair<int,int>> edges,unordered_map<int,list<int>> &adj)
{
    int v;
    int u;
    for(int i=0;i<edges.size();i++)
    {
        u=edges[i].first;
        v=edges[i].second;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}
void solve(unordered_map<int,list<int>> &adj,unordered_map<int,bool> &visited,int &i,vector<int> &ans){
    queue<int> q;
    q.push(i);
    visited[i]=1;
    while(!q.empty())
    {
        int frontnode=q.front();
        q.pop();
        ans.push_back();
        for(auto j: adj[frontnode])
        {
            if(!visited[j]==1)
            {
                q.push(j);
                visited[j]=1;
            }
        }
    }
}
vector<int> bfs(int V,vector<pair<int,int>> edges)
{
    unordered_map<int,list<int>> adj;
    unordered_map<int,bool> visited;
    prepairedadj(V,edges,adj);
    vector<int> ans;
    for(int i=0;i<V;i++)
    {
        if(!visited[i]==1)
        {
            solve(adj,visited,i,ans);
        }
    }
    return ans;
}*/
// Function to return a list containing the DFS traversal of the graph.
    /*void solve(int node,vector<int> &ans,vector<int> &visited,vector<int> adj[])
    {
        ans.push_back(node);
        visited[node]=1;
        for(auto i:adj[node])//idhar i ke value vo hogi jo us se connected hai matlab adj list ke member
        {
            if(visited[i]!=1)
            {
                solve(i,ans,visited,adj);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> visited(V,0);
        vector<int> ans;
        for(int i=0;i<V;i++)
        {
            if(visited[i]!=1)
            {
                solve(i,ans,visited,adj);
                
            }
        }
        return ans;
        
    }*/
//if disconnect graph in form of component
/*void solve(int node,unordered_map<int,bool> &visited,unorder_map<int,list<int>> adj,vector<int> &component)
{
    component.push_back(node);
    visited[node]=true;
    for(auto i: adj[node])
    {
        if(!visited[i])
        {
            solve(i,visited,adj,component);
        }
    }
}
vector<vector<int>> dfs(int v,int e,vector<vector<int>> &edges)
{
    unorder_map<int,list<int>> adj;
    for(int i=0;i<egdes.size();i++)
    {
        int u=edges[i][0];
        int v=edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<vector<int>> ans;
    unordered_map<int,bool> visited;
    for(int i=0;i<v;i++)
    {
        if(!visited[i])
        {
            vector<int> component;//ak component ke liye
            solve(i,visited,adj,component);
            ans.push_back(component);
        }
    }
    return ans;
}*/
 // Function to detect cycle in an undirected graph using bfs.
   /* bool iscycle(int node,unordered_map<int,bool> &visited,vector<int> adj[])
    {
        unordered_map<int,int> parent;
        parent[node]=-1;
        visited[node]=1;
        queue<int> q;
        q.push(node);
        while(!q.empty())
        {
            int front=q.front();
            q.pop();
            for(auto i: adj[front])
            {
                if(visited[i]==true&& i!=parent[front])
                {
                    return true;
                }
                else if(!visited[i])
                {
                    q.push(i);
                    visited[i]=1;
                    parent[i]=front;
                }
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        unordered_map<int,bool> visited;
        for(int i=0;i<V;i++)
        {
            if(!visited[i])
            {
                bool ans=iscycle(i,visited,adj);
                if(ans==1)
                {
                   return true;
                }

            }
        }
        return false;
    }*/  
//using dfs
/*bool dfsdet(int node,unordered_map<int,bool> &visited,unordered_map<int,list<int>> &adj,int parent)
{
    visited[node]=1;
    for(auto i: adj[node])
    {
        if(!visited[i])
        {
            bool cycle=dfsdet(i,visited,adj,node);
            if(cycle)
            {
                return true;
            }
            else if(i!=parent)
            {
                return true;
            }
        }
    }
    return false;
}
string cycledet(vector<vector<int>> &edges,int n,int m)
{   unordered_map<int,list<int>> adj;
    for(int i=0;i<n;i++)
    {
        int u=edges[i][0];
        int v=edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
   
    unordered_map<int,bool> visited;
    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            bool ans=dfsdet(i,visited,adj,-1);
            if(ans==true)
            {
                return "yes";
            }
        }
    }
    return "NO";
}*/ 
 // Function to detect cycle in a directed graph.
 /*   bool cycle(int node, unordered_map<int,bool> &visited, unordered_map<int,bool> &dfs, vector<int> adj[]) {
    visited[node] = true;
    dfs[node] = true;
    for (auto i : adj[node]) {
        if (!visited[i]) {
            bool cycledfs = cycle(i, visited, dfs, adj); 
            if (cycledfs) {
                return true;
            }
        } else if (dfs[i]) {
            return true;
        }
    }
    dfs[node] = false;
    return false;
}

bool isCyclic(int V, vector<int> adj[]) {
    unordered_map<int,bool> visited;
    unordered_map<int,bool> dfs;
    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            bool ans = cycle(i, visited, dfs, adj); 
            if (ans) {
                return true;
            }
        }
    }
    return false;
}  */ 
//cycle detection using khans algo(topolosgy sort using bfs)
/*bool cycledetect(vector<pair<int,int>> &egdes,int v)
{
    unordered_map<int,list<int>> adj;
    for(int i=0;i<v;i++)
    {
        int u=edges[i].first - 1;//idhaar node 1 se start hai 0 se nhi
        int v=edges[i].second - 1;
        adj[u].push_back(v);
    }
    vector<int> indegree(v);
    for(auto i: adj)
    {
        for(auto j: i.second)
        {
            indegree[j]++;
        }
    }
    queue<int> q;
    for(int i=0;i<v;i++)
    {
        if(indegree[i]==0)
        {
            q.push(i);
        }
    }
    int cnt=0;
    while(!q.empty())
    {
        int front=q.front();
        q.pop();
        cnt++;
        for(auto i:adj[front])
        {
            indegree[i]--;
            if(indegree[i]==0)
            {
                q.push(i);
            }
        }
    }
    if(cnt==v)
    {
        return true;//not present(vo acyclic hai)
    }
    else
    {
        return false;
    }
}*/
//Function to return list containing vertices in Topological order.
/*	void solve(int node,unordered_map<int,bool> &visited,stack<int> &s,vector<int> adj[])
	{
	    visited[node]=1;
	    for(auto i: adj[node])
	    {
	        if(!visited[i])
	        {
	            solve(i,visited,s,adj);
	        }
	    }
	    s.push(node);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{ 
	   unordered_map<int,bool> visited;
	   stack<int> s;
	   for(int i=0;i<V;i++)
	   {
	       if(!visited[i])
	       {
	           solve(i,visited,s,adj);
	       }
	   }
	   vector<int> ans;
	   while(!s.empty())
	   {
	       int front=s.top();
	       ans.push_back(front);
	       s.pop();
	   }
	   return ans;
	}*/
//topology sort using bfs also called khans algo
/*vector<int> topology(vector<vector<int>> &edges,int v,int e)
{
    unordered_map<int,list<int>> adj;
    for(int i=0;i<edges.size();i++)
    {
        int u=edges[i][0];
        int v=edges[i][1];
        adj[u].push_back(v);
    }
    vector<int> indegree(v);
    for(auto i: adj)
    {
        for(auto j: i.second)
        {
            indegree[j]++;
        }
    }
    queue<int> q;
    for(int i=0;i<v;i++)
    {
        if(indegree[i]==0)
        {
            q.push(i);
        }
    }
    vector<int> ans;
    while(!q.empty())
    {
        int front=q.front();
        q.pop();
        ans.push_back(front);
        for(auto i:adj[front])
        {
            indegree[i]--;
            if(indegree[i]==0)
            {
                q.push(i);
            }
        }
    }
    return ans;

}*/	
//Function to find minimum time required to rot all oranges using bfs
    /*int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<pair<int,int>,int>> q;
        vector<vector<int>>ans (n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j] == 2)
                {
                    q.push({{i,j},0});
                    ans[i][j] = 2;
                }

            }
        }
        int tm=0;
        int drow[]={-1,1,0,0};
        int dcol[]={0,0,-1,1};
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int t=q.front().second;
            tm = max(tm,t);
            q.pop();
            for(int i=0;i<4;i++)
            {
               int nrow= r + drow[i];
               int ncol= c + dcol[i];
               if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && ans[nrow][ncol]!=2 && grid[nrow][ncol] == 1)
               {
                    q.push({{nrow,ncol},t + 1});
                    ans[nrow][ncol] = 2;
               }
            }
        }
        //impossibe to rech there because of the zero
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(ans[i][j] ==0 && grid[i][j] == 1)
                {
                    return -1;
                }
            }
        }
        return tm;
    }*/
// Function to find the number of islands using the bfs method.
    /*void bfs(int row,int col,vector<vector<int>> &vis,vector<vector<char>>& grid)
    {
        vis[row][col]=1;
        queue<pair<int,int>> q;
        q.push({row,col});
        int n=grid.size();
        int m=grid[0].size();
        while(!q.empty())
        {
            int rows = q.front().first;
            int cols = q.front().second;
            q.pop();
            //travesing all the direction to get the neighbour
            for(int drow=-1;drow<=1;drow++)
            {
                for(int dcol=-1;dcol<=1;dcol++)
                {
                    int nrow= rows + drow;
                    int ncol= cols + dcol;
                    if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol]== '1' && !vis[nrow][ncol])
                    {
                        vis[nrow][ncol] = 1;
                        q.push({nrow,ncol});
                    }
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int cnt=0;
        for(int row =0;row<n;row++)
        {
            for(int col=0;col<m;col++)
            {
                if(!vis[row][col] && grid[row][col] == '1')
                {
                    cnt++;
                    bfs(row,col,vis,grid);
                }
            }
        }
        return cnt;
    }*/
//Flood fill Algorithm using dfs
    /*void dfs(int row,int col,vector<vector<int>> &ans,vector<vector<int>>& image,int newColor,int delRow[],int delCol[],int inColor)
    {
        ans[row][col] = newColor;
        int n = image.size();
        int m = image[0].size();
        for(int i=0;i<4;i++)
        {
            int nrow = row + delRow[i];
            int ncol = col + delCol[i];
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && image[nrow][ncol] == inColor && ans[nrow][ncol] != newColor)
            {
                dfs(nrow,ncol,ans,image,newColor,delRow,delCol,inColor);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
          int inColor = image[sr][sc];
          vector<vector<int>> ans = image;
          int delRow[] = {-1,1,0,0};
          int delCol[] = {0,0,-1,1};
          dfs(sr,sc,ans,image,newColor,delRow,delCol,inColor);
          return ans;
    }*/
//Number of Provinces means component in the graph
    /*void dfs(int node,vector<int> adjs[],int vis[])
    {
        vis[node]=1;
        for(auto it: adjs[node])
        {
            if(vis[it] !=1)
            {
                dfs(it,adjs,vis);
            }
        }
    }
    int numProvinces(vector<vector<int>> adj, int V) {
        vector<int> adjs[V];
        for(int i=0;i<V;i++)
        {
            for(int j=0;j<V;j++)
            {
                if(adj[i][j] == 1 && i != j)
                {
                    adjs[i].push_back(j);
                    adjs[j].push_back(i);
                }
            }
        }
        int cnt=0;
        int vis[V]={0};
        for(int i=0;i<V;i++)
        {
            if(vis[i] != 1)
            {
                cnt++;
                dfs(i,adjs,vis);
            }
        }
        return cnt;
    }*/		    
//shortest distance between source to destination in undirected and unweighted graph
/*vector<int> shortest(vector<pair<int,int>> edges,int n,int m,int s,int t)
{
    unoredered_map<int,list<int>> adj;
    for(int i=0;i<n;i++)
    {
        int u=edges[i].first;
        int v=edges[i].second;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    unordered_map<int,bool> visited;
    unordered_map<int,int> parent;
    queue<int> q;
    q.push(s);
    visited[s]=true;
    parent[s]=-1;
    while(!q.empty())
    {
        int front=q.front();
        q.pop();
        for(auto i:adj[front])
        {
            if(!visited[i])
            {
                visited[i]=true;
                parent[i]=front;
                q.push(i);
            }
        }
        
    }
    vector<int> ans;
    int currnode=t;
    ans.push_back(t);
    while(currnode!=s)
    {
        currnode=parent[currnode];
        ans.push_back(currnode);
    }
    reverse(ans.begin,ans.end());
    return ans;
}*/
//You are given an Undirected Graph having unit weight, Find the shortest path from src to all the vertex and if it is unreachable to reach any vertex, then return -1 for that vertex.
 /*  vector<int> shortestPath(vector<vector<int>>& edges, int N, int M, int src) {
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < edges.size(); i++) {
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> ans(N, -1); // Initialize ans with -1 indicating unreachable nodes
    ans[src] = 0;

    unordered_map<int, bool> visited;
    queue<int> q;
    q.push(src);
    visited[src] = true;

    while (!q.empty()) {
        int front = q.front();
        q.pop();
        for (auto i : adj[front]) {
            if (!visited[i]) {
                visited[i] = true;
                ans[i] = ans[front] + 1;
                q.push(i);
            }
        }
    }
    return ans;
}*/
//Shortest path in Directed Acyclic Graph
    /*void dfs(int node, vector < pair < int, int >> adj[], stack<int> &st, vector<int> &vis){
        vis[node] = 1;
        
        for(auto it : adj[node]){
            if(!vis[it.first]){
                dfs(it.first, adj, st, vis);
            }
        }
        st.push(node);
    }
  
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        // code here
        vector < pair < int, int >> adj[N];
        vector<int> vis(N, 0);
        for(int i = 0; i < M; i++){
            adj[edges[i][0]].push_back({edges[i][1], edges[i][2]});
        }
        stack<int> st;
        for(int i = 0; i < N; i++){
            if(!vis[i]){
                dfs(i, adj, st, vis);
            }
        }
        
        vector < int > dist(N);
        for (int i = 0; i < N; i++) {
            dist[i] = 1e9;
        }
        
        dist[0] = 0;
          while (!st.empty()) {
            int node = st.top();
            st.pop();
    
            for (auto it: adj[node]) {
              int v = it.first;
              int wt = it.second;
    
              if (dist[node] + wt < dist[v]) {
                dist[v] = wt + dist[node];
              }
            }
          }
    
          for (int i = 0; i < N; i++) {
            if (dist[i] == 1e9) dist[i] = -1;
          }
          return dist;
        }*/
//Function to find the shortest distance of all the vertices dijsktra
    //from the source vertex S.
  /*  vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    { 
         unordered_map<int,list<pair<int,int>>> adjs;
         for (int i = 0; i < V; ++i) {
           for (int j = 0; j < adj[i].size(); ++j) {
              int dest = adj[i][j][0];  // Destination vertex
              int weight = adj[i][j][1]; // Weight of edge

              adjs[i].push_back({dest, weight});
            }
          }
          vector<int> dist(V);
          for(int i=0;i<V;i++)
          {
              dist[i]=1e9;
          }
          set<pair<int,int>> st;
          dist[S]=0;
          st.insert(make_pair(0,S));
          while(!st.empty())
          {
              auto top = *(st.begin());//to acces forst smallest element in the set
              int nodetodistance = top.first;
              int topNode = top.second;
              st.erase(st.begin());
              for(auto i : adjs[topNode])
              {
                  if(nodetodistance + i.second < dist[i.first])
                  {
                      auto record = st.find(make_pair(dist[i.first],i.first));
                      if(record!=st.end())
                      {
                          st.erase(record);
                      }
                      dist[i.first]=nodetodistance + i.second;
                      st.insert(make_pair(dist[i.first],i.first));
                  }
              }
          }
          return dist;
         
    }*/
/*  Function to implement Bellman Ford
    *   edges: vector of vectors which represents the graph
    *   S: source vertex to start traversing graph with
    *   V: number of vertices
    */
    /*vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
    vector<int> dist(V, 1e9);
    dist[S] = 0;

    // Relax edges V-1 times
    for (int i = 0; i < V - 1; ++i) {
        for (const auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            int wt = edge[2];
            if (dist[u] != 1e9 && dist[u] + wt < dist[v]) {
                dist[v] = dist[u] + wt;
            }
        }
    }

    // Check for negative cycle
    for (const auto& edge : edges) {
        int u = edge[0];
        int v = edge[1];
        int wt = edge[2];
        if (dist[u] != 1e9 && dist[u] + wt < dist[v]) {
            // Negative cycle found
            vector<int> ans1;
            ans1.push_back(-1);
            return ans1;
        }
    }
    for (int i = 0; i < V; ++i) {
        if (dist[i] == 1e9) {
            dist[i] = 1e8;
        }
    }

    return dist;
}*/
//prims algo for minimum cost spanning tree	 
/*vector<pair<pair<int,int>,int>> prims(int n,int m,vector<pir<pair<int,int>,int>> &g)
{
    unordered_map<int,list<pair<int,int>>> adj;
    for(int i=0;i<g.size();i++)
    {
        int u=g[i].first.first;
        int v=g[i].first.second;
        int w=g[i].second;
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }
    vector<int> key(n + 1);
    vector<bool> mst(n + 1);
    vector<int> parent(n + 1);
    for(int i=0;i<=n;i++)
    {
        key[i]=INT_MAX;
        parent[i]=-1;
        mst[i]=false;
    }
    key[1]=0;
    for(int i=1;i<=n;i++)
    {
        int mini=INT_MAX;
        int u;
        for(int v=1;v<=n;v++)
        {
            if(mst[v]==false&&key[v] <= mini)
            {
                u=v;
                mini=key[v];
            }
        }
        mst[u]=true;
        for(auto j: adj[u])
        {
            int v=j.first;
            int w=j.second;
            if(mst[v]==false&& w<key[v])
            {
                parent[v]=u;
                key[v]=w;
            }
        }
    }
    vector<pair<pair<int,int>,int>> ans;
    for(int i=2;i<=n;i++)
    {
        ans.push_back(make_pair(parent[i],i),key[i]);
    }
    return ans;
} */ 
//using priorit queueu prim's
/*vector<pair<pair<int, int>, int>> prims(int n, int m, vector<pair<pair<int, int>, int>> &g) {
    unordered_map<int, list<pair<int, int>>> adj;
    for (int i = 0; i < g.size(); i++) {
        int u = g[i].first.first;
        int v = g[i].first.second;
        int w = g[i].second;
        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }

    vector<int> key(n + 1, INT_MAX);
    vector<bool> mst(n + 1, false);
    vector<int> parent(n + 1, -1);

    key[1] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push(make_pair(0, 1)); // {key, vertex}

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        mst[u] = true;

        for (auto j : adj[u]) {
            int v = j.first;
            int w = j.second;
            if (mst[v] == false && w < key[v]) {
                parent[v] = u;
                key[v] = w;
                pq.push(make_pair(key[v], v));
            }
        }
    }

    vector<pair<pair<int, int>, int>> ans;
    for (int i = 2; i <= n; i++) {
        ans.push_back(make_pair(make_pair(parent[i], i), key[i]));
    }
    return ans;
} */
//kruskal algo for min spanning tree
/*bool cmp(vector<int> &a, vector<int> &b) {
    return a[2] < b[2];
}
class Solution
{
	public:

int findparent(vector<int> &parent, int node) {
    if (parent[node] == node) {
        return node;
    }
    return parent[node] = findparent(parent, parent[node]);
}

void unionset(int u, int v, vector<int> &parent, vector<int> &rank) {
    u = findparent(parent, u);
    v = findparent(parent, v);
    if (rank[u] < rank[v]) {
        parent[u] = v;
    } else if (rank[u] > rank[v]) {
        parent[v] = u;
    } else {
        parent[v] = u;
        rank[u]++;
    }
}

int spanningTree(int V, vector<vector<int>> adj[]) {
    vector<vector<int>> edges;
    for (int i = 0; i < V; ++i) {
        for (auto &edge : adj[i]) {
            edges.push_back({i, edge[0], edge[1]});
        }
    }

    sort(edges.begin(), edges.end(), cmp);

    vector<int> parent(V);
    vector<int> rank(V);

    for (int i = 0; i < V; i++) {
        parent[i] = i;
        rank[i] = 0;
    }

    int minwt = 0;
    for (int i = 0; i < edges.size(); i++) {
        int u = edges[i][0];
        int v = edges[i][1];
        int wt = edges[i][2];

        if (findparent(parent, u) != findparent(parent, v)) {
            minwt += wt;
            unionset(u, v, parent, rank);
        }
    }
    return minwt;
}*/    
//Floyd Warshall
	/*void shortest_distance(vector<vector<int>>&matrix){
	    int n= matrix.size();
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            if(matrix[i][j]  == -1)
	            {
	                matrix[i][j] = 1e9;
	            }
	        }
	    }
	    
	    for(int k=0;k<n;k++)
	    {
	        for(int i=0;i<n;i++)
	        {
	            for(int j=0;j<n;j++)
	            {
	                matrix[i][j] = min(matrix[i][j],matrix[i][k] + matrix[k][j]);
	            }
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            if(matrix[i][j]  == 1e9)
	            {
	                matrix[i][j] = -1;
	            }
	        }
	    }
	}*/
//City With the Smallest Number of Neighbors at a Threshold Distance
   /* int findCity(int n, int m, vector<vector<int>>& edges,
                 int distanceThreshold) {
                     
                     vector<vector<int>> dist(n,vector<int>(n,1e9));
                     for(auto i: edges)
                     {
                         dist[i[0]][i[1]] = i[2];
                         dist[i[1]][i[0]] = i[2];
                     }
                     for(int i=0;i<n;i++)
                     {
                        dist[i][i] = 0;//diagonal 
                     }
                     //flyod algo
                     for(int k=0;k<n;k++)
                     {
                         for(int i=0;i<n;i++)
                         {
                             for(int j=0;j<n;j++)
                             {
                                 if(dist[i][k] == 1e9 || dist[k][j] == 1e9)
                                 {
                                     continue;
                                 }
                                 dist[i][j] = min(dist[i][j],dist[i][k] + dist[k][j]);
                             }
                         }
                     }
                     int countcity = n;
                     int cityno = -1;
                     for(int i = 0;i<n;i++)
                     {   int cnt = 0;
                         for(int j=0;j<n;j++)
                         {
                             if(dist[i][j] <= distanceThreshold)
                             {
                                 cnt ++;
                             }
                         }
                         if(cnt <= countcity)
                         {
                             countcity = cnt;
                             cityno = i;
                         }
                     }
                     return cityno;
                 }	*/
//Function to find if the given edge is a bridge in graph.
   /* void dfs(int node,int parent,int &timer,vector<int> &disc,vector<int> &low,vector<vector<int>> result,vector<int> adj[],vector<bool> &vis)
    {
        vis[node]=true;
        disc[node]=low[node]=timer++;
        for(auto i:adj[node])
        {
            if(i == parent)
            {
                continue;
            }
            if(!vis[i])
            {
                dfs(i,node,timer,disc,low,result,adj,vis);
                low[node]=min(low[node],low[i]);
                //check for the bride
                if(low[i] > disc[node])
                {
                    vector<int> ans;
                    ans.push_back(node);
                    ans.push_back(i);
                    result.push_back(ans);
                }
                else{
                    //back edge
                    low[node] =min(low[node],disc[i]);
                }
            }
        }
    }
    int isBridge(int V, vector<int> adj[], int c, int d) 
    {
       int timer =0;
       vector<int> disc(V);
       vector<int> low(V);
       int parent = -1;
       vector<bool> vis(V);
       for(int i=0;i<V;i++)
       {
           disc[i]=-1;
           low[i]=-1;
       }
       vector<vector<int>> result;//pair bhi use ker skte the
       for(int i=0;i<V;i++)
       {
           if(!vis[i])
           {
               dfs(i,parent,timer,disc,low,result,adj,vis);
           }
       }
       for(auto i:result)
       {
           if(i.size()==2 && (i[0]==c && i[1]==d) && (i[0]==d && i[1]==))
           {
               return 1;
           }
       }
       return 0;
    }*/
//Function to find if the given edge is a bridge in graph 2nd method
    /*void dfs(int node, vector<bool> &vis, vector<int> adj[]) {
        
        vis[node] = true;
        
        for(auto i: adj[node]) {
            if(!vis[i]) {
                dfs(i, vis, adj);
            }
        }
    }
    
    int isBridge(int V, vector<int> adj[], int c, int d) 
    {
        vector<bool> vis(V, false);
        int originalCnt = 0;
        // Count connected components in the original graph
        for (int i = 0; i < V; ++i) {
            if (!vis[i]) {
                dfs(i, vis, adj);
                originalCnt++;
            }
        }
        
        // Reset visit array for counting in original graph
        fill(vis.begin(), vis.end(), false);
        //removing c and d from it
        adj[c].erase(remove(adj[c].begin(), adj[c].end(), d), adj[c].end());
        adj[d].erase(remove(adj[d].begin(), adj[d].end(), c), adj[d].end());
        
        int cnt = 0;
        
        for(int i=0; i<V; i++) {
            if(!vis[i]) {
                dfs(i, vis, adj);
                cnt++;
            }
        }
    
        // If removing the edge increases the number of connected components, it's a bridge
        return cnt > originalCnt ? 1 : 0;
    }*/
//articulation piont using first method A recursive function to traverse the graph without
// considering the ith vertex and its associated edges
/*void dfs(vector<int> adj[], int V, vector<int>& vis,
         int i, int curr)
{
    vis[curr] = 1;
    for (auto x : adj[curr]) {
        if (x != i) {
            if (!vis[x]) {
                dfs(adj, V, vis, i, x);
            }
        }
    }
}
 
// Function to find Articulation Points in the graph
void AP(vector<int> adj[], int V)
{
 
    // Iterating over all the vertices and for each vertex i
    // remove the vertex and check whether the graph remains
    // connected.
    for (int i = 1; i <= V; i++) {
 
        // To keep track of number of components of graph
        int components = 0;
 
        // To keep track of visited vertices
        vector<int> vis(V + 1, 0);
 
        // Iterating over the graph after removing vertex i
        // and its associated edges
        for (int j = 1; j <= V; j++) {
            if (j != i) {
 
                // If the jth vertex is not visited it will
                // form a new component.
                if (!vis[j]) {
 
                    // Increasing the number of components.
                    components++;
 
                    // dfs call for the jth vertex
                    dfs(adj, V, vis, i, j);
                }
            }
        }
        // If number of components is more than 1 after
        // removing the ith vertex then vertex i is an
        // articulation point.
        if (components > 1) {
            cout << i << "\n";
        }
    }
}
 
// Utility function to add an edge
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
 
// Driver Code
int main()
{
    // Create graphs given in above diagrams
    cout << "Articulation points in the graph \n";
    int V = 5;
    vector<int> adj1[V + 1];
    addEdge(adj1, 1, 2);
    addEdge(adj1, 2, 3);
    addEdge(adj1, 1, 3);
    addEdge(adj1, 3, 4);
    addEdge(adj1, 4, 5);
    AP(adj1, V);
 
    return 0;
}*/
//using second method in it
/*void dfs(int node,int parent,vector<int> &disc,vetor<int> &low,vector<int> &vis,unordered_map<int,list<int>> adj,vector<int> &ap,int &timer)
{
    vis[node]=true;
    disc[node]=low[node]=timer++;
    int child=0;
    for(auto i:adj[node])
    {
        if(i==parent)
        {
            continue;
        }
        if(!vis[i])
        {
            dfs(i,node,disc,low,vis,adj,ap,timer);
            //vapis jate vakt hame
            low[node]=min(low[node],low[i]);
            //check ap
            if(low[i] >= disc[node] && parent != -1)
            {
                ap[node]=true;
            }
            child++;
        }
        else
        {
            low[node]=min(low[node],disc[i]);
        }
    }
    //0 ke liye first node
    if(parent == -1 && child > 1)
    {
        ap[node] =1;
    }
}
int main() {
    int n=5;
    int e=5;
    vector<pair<int,int>> egdes;
    edges.push_back(make_pair(0,3));
    edges.push_back(make_pair(3,4));
    edges.push_back(make_pair(0,4));
    edges.push_back(make_pair(0,1));
    edges.push_back(make_pair(1,2));
    unordered_map<int,list<int>> adj;
    for(int i=0;i<edges.size();i++)
    {
        int u= edges[i].first;
        int v= edges[i].second;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int timer =0;
    vector<int> disc(n);
    vector<int> low(n);
    unordered_map<int,bool> vis;
    vector<int> ap(n,0);
    for(int i=0;i<n;i++)
    {
        disc[i]=-1;
        low[i]=-1;
    }
    //dfs
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            dfs(i,-1,disc,low,vis,adj,ap,timer);
        }
    }
    //print articulation point in it
    for(int i=0;i<n;i++)
    {
        if(ap[i]!=0)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/
//Function to find number of strongly connected components in the graph.
 // Function to perform DFS and fill the stack
   /* void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited, stack<int>& st) {
        visited[node] = true;
        
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                dfs(neighbor, adj, visited, st);
            }
        }
        
        st.push(node);
    }
    
    // Function to perform DFS and mark strongly connected components
    void dfsSCC(int node, vector<vector<int>>& adjTranspose, vector<bool>& visited, unordered_set<int>& scc) {
        visited[node] = true;
        scc.insert(node);
        
        for (int neighbor : adjTranspose[node]) {
            if (!visited[neighbor]) {
                dfsSCC(neighbor, adjTranspose, visited, scc);
            }
        }
    }
    
public:
    // Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<vector<int>>& adj) {
        // Step 1: Perform DFS and fill the stack
        stack<int> st;
        vector<bool> visited(V, false);
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                dfs(i, adj, visited, st);
            }
        }
        
        // Step 2: Transpose the graph
        vector<vector<int>> adjTranspose(V);
        for (int i = 0; i < V; i++) {
            for (int neighbor : adj[i]) {
                adjTranspose[neighbor].push_back(i);
            }
        }
        
        // Step 3: Perform DFS on the transposed graph and count SCCs
        int countSCC = 0;
        fill(visited.begin(), visited.end(), false);
        while (!st.empty()) {
            int node = st.top();
            st.pop();
            
            if (!visited[node]) {
                unordered_set<int> scc;
                dfsSCC(node, adjTranspose, visited, scc);
                countSCC++;
            }
        }
        
        return countSCC;
    }*/
//Articulation Point
    /*void dfs(int node,int parent,vector<int> &vis,vector<int> &disc,vector<int> &low,int &timer,vector<int>adj[],vector<int> &isap)
    {
        vis[node] = 1;
        disc[node] = low[node] = timer++;
        int child = 0;
        for(auto i: adj[node])
        {
            if(vis[i] == 0)
            {
                child++;
                dfs(i,node,vis,disc,low,timer,adj,isap);
                low[node] = min(low[node],low[i]);
                if(low[i] >= disc[node] && parent != -1)
                {
                    isap[node] = 1;
                }
            }
            else if(i != parent)
            {
                low[node] = min(low[node],disc[i]);
            }
        }
        if(parent == -1 && child > 1)
        {
            isap[node] =1;
        }
    }
    vector<int> articulationPoints(int V, vector<int>adj[]) {
         vector<int> ans;
         vector<int> disc(V,-1);
         vector<int> low(V,-1);
         vector<int> vis(V,0);
         vector<int> isap(V,0);
         int timer =0;
         for(int i=0;i<V;i++)
         {
             if(vis[i] == 0)
             {
                 dfs(i,-1,vis,disc,low,timer,adj,isap);
             }
         }
         for(int i=0;i<V;i++)
         {
             if(isap[i] == 1)
             {
                 ans.push_back(i);
             }
         }
         if(ans.size() == 0)
         {
             return {-1};
         }
         return ans;
    }*/    
//biconnected walla isdehr subhe abhi na
/*int timer =0;
void dfs(int node,list<int> adj,vector<bool> &vis,vector<int> &disc,vector<int> &low,vector<int> &parent,vector<bool> &AP)
{
    vis[node] = true;
    disc[node] = low[node]=timer++;
    int child=0;
    for(auto i: adj[node])
    {
        if(!vis[i])
        {
            parent[i]=node;
            child++;
            dfs(i,adj,vis,disc,low,parent,ap);
            low[node] = min(low[node],low[i]);
            if(parent[node] == -1 && child > 1)
            {
                AP[node] = true;
            }
            if(low[i] >= disc[node] && parent != -1)//main condition
            {
                AP[node]=true;
            }
        }
        else if(i != parent[node])
        {
            low[node] = min(low[node],disc[i]);
        }
    }
}
int bigrap(int arr[],int n,int e)
{
    timer =0;
    list<int> adj[n];
    for(int i=0;i<ni++)
    {
        adj[arr[i]].push_back(arr[i + 2]);
        adj[arr[i + 2]].push_back(arr[i]);
    }
    vector<bool> vis(n,false);
    vector<int> disc(n,0);
    vector<int> low(n,0);
    vector<int> parent(n,-1);
    vector<bool> AP(n,false);
    for(int i=0;i<n;i++)
    {
        if(vis[i] == false)
        {
            dfs(i,adj,vis,disc,low,parent,AP);
        }
    }
    for(int i=0;i<n;i++)
    {
        if(AP[i] == true)
        {
            return 0;
        }
    }
    return 1;
}*/			                 
