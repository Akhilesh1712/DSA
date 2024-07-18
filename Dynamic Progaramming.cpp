#include <bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"hello";
	return 0;
}
//Function to count number of ways to reach the nth stair. tabulation
   /* int countWays(int m) {
        const int MOD = 1000000007;//q ke condition thi ye to
        vector<long long> dp(m + 1, 0);
        
        // Base cases
        dp[0] = dp[1] = 1;

        // Calculate ways to reach each stair using previous results
        for (int i = 2; i <= m; ++i) {
            dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;//q ke condition thi ye to
        }

        return static_cast<int>(dp[m]);
    }*/
 //Count ways to N'th Stair(Order does not matter) tabulation
	/*	int nthStair(int n){
		   int dp[n - 1];
		   dp[0] = 1;
		   dp[1] = 1;
		   for(int i=2;i<n;i++)
		   {
		       dp[i] = (dp[i - 2] + 1);
		   }
		   return dp[n];
		} */   
// Maximum height of the staircase(The first stair would require only one block, the second stair would require two blocks and so on.)
    /*int maxStairHeight(int N) {
        return sqrt(2*N + 0.25) - 0.5;
    }*/
//Min Cost Climbing Stairs
    /*int minCostClimbingStairs(vector<int>&cost ,int N) {
        vector<int> dp(N + 1);
        dp[0] = cost[0];
        dp[1] = cost[1];
        for(int i=2;i<N;i++)
        {
            dp[i] = cost[i] + min(dp[i - 1],dp[i - 2]);
        }
        return min(dp[N - 1],dp[N - 2]);
    }*/
//for mini no of coins
//using memorisation
/*int solve(vector<int> &num,int x,vector<int> &dp)
{
    if(x == 0)
    {
        return 0;
    }
    if(x < 0)
    {
        return INT_MAX;
    }
    int mini = INT_MAX;
    for(int i=0;i<num.size();i++)
    {
        int ans = solve(num,x - num[i],dp);
        if(ans != INT_MAX)
        {
            mini = min(mini,1 + ans);
        }
    }
    dp[x] = mini;
    return dp[x];
}
int minim(vector<int> &num,int x)
{
    vector<int> dp(x + 1,-1);
    int ans = solve(num,x,dp);
    if(ans == INT_MAX)
    {
        return -1;
    }
    else{
        return ans;
    }
}*/
//for mini no of coins
//using tabulation
/*int solve(vector<int> &num,int x)
{
    vector<int> dp(x + 1,INT_MAX);
    dp[0] =0;
    for(int i=1;i<=x;i++)
    {
        //storing coin for each amount so loop is from 1 to x
        for(int j=0;j<num.size();j++)
        {
            if(i - num[j] >= 0 && dp[i - num[j]] != INT_MAX)
            {
                dp[i] = min(dp[i],1 + dp[i - num[j]]);
            }
        }
    }
    if(dp[x] == INT_MAX
    {
        return -1;
    }
    return dp[x];
}
int minim(vector<int> &num,int x)
{
    return solve(num,x);
}*/	
// calculate the maximum sum of non-adjacent usiing memorization
	/*int solve(int *arr,int n,vector<int> &dp)
	{
	    if(n < 0)
	    {
	        return 0;
	    }
	    if(n == 0)
	    {
	        return arr[0];
	    }
	    if(dp[n] != -1)
	    {
	        return dp[n];
	    }
	    int include = solve(arr,n - 2,dp) + arr[n];
	    int exclude = solve(arr,n - 1,dp) + 0;
	    dp[n] = max(include,exclude);
	    return dp[n];
	}
	int findMaxSum(int *arr, int n) {
	    vector<int> dp(n + 1,-1);
	    int ans = solve(arr,n,dp);
	    return ans;
	}*/
// calculate the maximum sum non-adjacent using space-optimization
	/*int solve(vector<int> &arr,int n)
	{
	    int prev2 = 0;
	    int prev1 = arr[0];
	    for(int i=1;i<n;i++)
	    {
	        int in = prev2 + arr[i];
	        int ex = prev1 + 0;
	        int ans = max(in,ex);
	        prev2 = prev1;
	        prev1 = ans;
	    }
	    return prev1;
	}
	int findMaxSum(vector<int>&arr, int n) {
	    return solve(arr,n);
	}*/
//Function to find the maximum number of cuts segment using momorization.
    /*int solve(int n,int x,int y,int z,vector<int> &dp)
    {
        if(n == 0)
        {
            return 0;
        }
        if(dp[n] != -1)
        {
            return dp[n];
        }
        int a = solve(n - x,x,y,z,dp) + 1;
        int b = solve(n - y,x,y,z,dp) + 1;
        int c = solve(n - z,x,y,z,dp) + 1;
        dp[n] = max(a,max(b,c));
        return dp[n];
    }
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        vector<int> dp(n + 1,-1);
        int ans = solve(n,x,y,z,dp);
        if(ans < 0)
        {
            return 0;
        }
        else{
            return ans;
        }
    }*/
//Function to find the maximum number of cuts segment using tabulation.
    /*int solve(int n,int x,int y,int z)
    {
        vector<int> dp(n + 1,INT_MIN);
        dp[0] = 0;
        for(int i=1;i<=n;i++)
        {
            if(i-x >= 0)
            {
                dp[i] = max(dp[i],dp[i-x] + 1);
            }
            if(i-y >= 0)
            {
                dp[i] = max(dp[i],dp[i-y] + 1);
            }
            if(i-z >= 0)
            {
                dp[i] = max(dp[i],dp[i-z] + 1);
            }
            
        }
        if(dp[n] < 0)
        {
            return 0;
        }
        else{
            return dp[n];
        }
    }
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        return solve(n,x,y,z);
    }*/
//Rod Cutting using memorization in it
    /*int f(int ind,int n,int price[],vector<vector<int>> &dp)
    {
        if(ind == 0)
        {
            return n*price[0];
        }
        if(dp[ind][n] != -1)
        {
            return dp[ind][n];
        }
        int nottake = 0 + f(ind - 1,n,price,dp);
        int take = INT_MIN;
        int rodlenght = ind + 1;
        if(rodlenght <= n)
        {
            take = price[ind] + f(ind,n - rodlenght,price,dp);
        }
        return dp[ind][n] = max(take,nottake);
    }
    int cutRod(int price[], int n) {
        vector<vector<int>> dp(n,vector<int>(n + 1,-1));
        return f(n - 1,n,price,dp);
    }*/
//Rod Cutting using tabulation in it
    /*int cutRod(int price[], int n) {
        vector<vector<int>> dp(n,vector<int>(n + 1,0));
        for(int N=0;N<=n;N++)
        {
            dp[0][N] = N*price[0];
        }
        for(int ind=1;ind<n;ind++)
        {
            for(int N=0;N<=n;N++)
            {
                int nottake = 0 + dp[ind - 1][N];
                int take = INT_MIN;
                int rodlenght = ind + 1;
                if(rodlenght <= N)
                {
                    take = price[ind] + dp[ind][N - rodlenght];
                }
                dp[ind][N] = max(take,nottake);
            }
        }
        return dp[n - 1][n];
    }*/
//count no of dearrangement using recursion
/*int cout(int n)
{
    if(n == 1)
    {
        return 0;
    }
    if(n == 2)
    {
        return 1;
    }
    int ans = (n - 1)*(cont(n - 1) + cout(n - 2));
    return ans;
}*/
//count dearragement using memorization
/*int solve(int n;vector<int> &dp)
{
    if(n == 1)
    {
        return 0;
    }
    if(n == 2)
    {
        return 1;
    }
    if(dp[n] != -1)
    {
        return dp[n];
    }
    dp[n] = (n - 1)*(solve(n - 1,dp) + solve(n - 2,dp));
    return dp[n];
}
int coutn(int n)
{
    vector<int> dp(n + 1,-1);
    return solve(n,dp);
}*/
//count dearragement using tabulation
/*int solve(int n)
{
    vector<int> dp(n + 1,0);
    dp[1] = 0;
    dp[2] = 1;
    for(int i=3;i<=n;i++)
    {
        int first = dp[i - 1];
        int second =dp[i - 2];
        int sum = dp[first + second];
        int ans = (i - 1)*sum;
        dp[i] = ans;
    }
    return dp[n];
}
int count(int n)
{
    return solve(n);
}*/
//count dearragement using spaceoptimization
/*int solve(int n)
{
    int prev2 = 0;
    int prev1 = 1;
    for(int i=3;i<=n;i++)
    {
        int first = prev1;
        int second = prev2;
        int sum = first + second;
        int ans = (i - 1)*sum;
        prev2 = prev1;
        prev1 = ans;
    }
    return prev1;
}
int count(int n)
{
    return solve(n);
}*/
//painting the fence using recursion
/*int solve(int n,int k)
{
    if(n == 1)
    {
        return k;
    }
    if(n == 2)
    {
        return (k + k*(k - 1));
    }
    int ans = solve(n - 2)*(k - 1) + solve(n - 1)*(k - 1);
    return ans;
}*/
//painting the fence using memorization
/*int solve(int n,int k,vector<int> &dp)
{
    if(n == 1)
    {
        return k;
    }
    if(n == 2)
    {
        return (k + k*(k - 1));
    }
    if(dp[n] != -1)
    {
        return dp[n];
    }
    dp[n] = solve(n - 2,k,dp)*(k - 1) + solve(n - 1,k,dp)*(k - 1);
    return dp[n];
}
int count(int n,int k)
{
    vector<int> dp(n + 1,-1);
    return solve(n,k,dp);
}*/
//painting the fence using  tabulation
/*int solve(int n,int k)
{
    vector<int> dp(n + 1,0);
    dp[1] = k;
    dp[2] = (k + k*(k - 1));
    for(int i=3;i<=n;i++)
    {
        dp[i] = dp[i - 2]*(k - 1) + dp[i - 1]*(k - 1);
    }
    return dp[n];
}
int count(int n,int k)
{
    return solve(n,k);
}*/
//using space
 /*#define MOD 1000000007
    long long countWays(int n, int k){
        long long int prev2 = k;
        long long int prev1 = (k + k*(k - 1)) % MOD;  // Apply modulo operation
        for (int i = 3; i <= n; i++) {
            long long int ans = (prev2 * (k - 1) % MOD + prev1 * (k - 1) % MOD) % MOD;  // Apply modulo operation
            prev2 = prev1;
            prev1 = ans;
        }
        return prev1;
    }*/
//0 1 knap-sack using recursion
/*int solve(vector<int> &weight,vector<int> &value,int index,int W)
{
    if(index == 0)
    {
        if(weight[0] <= W)
        {
            return value[0];
        }
        else{
            return 0;
        }
    }
    int include = 0;
    if(weight[index] <= W)
    {
        include = solve(weight,value,index - 1,W - weight[index]) + value[index];
    }
    int exclude = 0 + solve(weight,value,index - 1,W);
    int ans = max(exclude,include);
    return ans;
}
int knap(vector<int> weight,vector<int> value,int n,int W)
{
    return solve(weight,value,n - 1,W);
}*/
//0 1 knap-sack using memorization
/*int solve(int W, int wt[], int val[], int n, vector<vector<int>> &dp) {
        if (n == 0) {
            if (wt[0] <= W) {
                return val[0];
            } else {
                return 0;
            }
        }
        if (dp[n][W] != -1) {
            return dp[n][W];
        }
        int include = 0;
        if (wt[n] <= W) {
            include = val[n] + solve(W - wt[n], wt, val, n - 1, dp);
        }
        int exclude = 0 + solve(W, wt, val, n - 1, dp);
        dp[n][W] = max(exclude, include);
        return dp[n][W];
    }

    int knapSack(int W, int wt[], int val[], int n) {
        vector<vector<int>> dp(n, vector<int>(W + 1, -1));
        return solve(W, wt, val, n - 1, dp);
    }*/
 //0 1 knap-sack using tabulation
 /*int solve(vector<int> &weight,vector<int> &value,int index,int capacity)
 {
     vector<vector<int> dp(n,vector<int> (capacity + 1,0);
     for(int W =weight[0];W<=capacity;W++)
     {
         if(weight[0] <= W)
         {
             dp[0][W] = value[0];
         }
         else{
             dp[0][W] = 0;
         }
     }
     for(int index = 1;index<n;index++)
     {
         for(int w =0;w<=capacity;w++)
         {
             int include = 0;
             if(weight[index] <= W)
             {
                 include = value[index] + dp[index - 1][w - weight[index]];
             }
             int exclude = 0 + dp[index - 1][w];
             dp[index][w] = max(exlcude,include);
         }
     }
     return dp[n - 1][w];
 }
 int knap(vector<int> weight,vector<int> value,int n,int max,int W)
 {
     return solve(weight,value,n,W);
 }*/
//0 1 knap-sack using space optimization
/*int solve(vector<int> &weight,vector<int> &value,int n,int W)
{
    vector<int> prev(W + 1,0);
    vector<int> curr(W + 1,0);
    for(int w=weight[0];w<=W;w++)
    {
        if(weight[0] <= W)
        {
            prev[W] = value[0];
        }
        else{
            prev[w] = 0;
        }
    }
    for(int index = 1;index<n;index++)
    {
        for(int w=0;w<=W;w++)
        {
            int include = 0;
            if(weight[index] <= W)
            {
                include = value[n] + prev[w - weight][index];
            }
            int exclude = 0 + prev[w];
            curr[w] = max(exclude,include);
        }
        prev=curr;
    }
    return prev[W];
}*/
//Frog jump or greek jump using tabulation
/*int minimumEnergy(vector<int>& height, int n) {
        vector<int> dp(n,0);
        dp[0] = 0;
        for(int i=1;i<n;i++){
            int fs = dp[i - 1] + abs(height[i] - height[i - 1]);
            int rs = INT_MAX;
            if(i > 1){
                rs = dp[i - 2] + abs(height[i] - height[i - 2]);
            }
            dp[i] = min(fs,rs);
        }
        return dp[n - 1];
    }*/	
//Using Spaceoptimiation
/*int minimumEnergy(vector<int>& height, int n) {
        int prev1 = 0;
        int prev2 = 0;
        for(int i=1;i<n;i++){
            int fs = prev1 + abs(height[i] - height[i - 1]);
            int rs = INT_MAX;
            if(i > 1){
                rs = prev2 + abs(height[i] - height[i - 2]);
            }
            int curr = min(fs,rs);
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }*/
//House Robber II(vo circular walla ) 
/*int solve(vector<int> &nums)
    {
        if(nums.size() == 1) return nums[0];
        int prev1 = nums[0];
        int prev2 = 0;
        for(int i=1;i<nums.size();i++){
            int exclude = prev1;
            int include = prev2 + nums[i];
            int ans = max(exclude,include);
            prev2 = prev1;
            prev1 = ans;
        }
        return prev1;
    }
    int rob(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        if (nums.size() == 2) return max(nums[0], nums[1]);

        vector<int> temp1 , temp2;
        for(int i=0;i<nums.size();i++){
            if(i != 0) temp1.push_back(nums[i]);
            if(i != nums.size() - 1) temp2.push_back(nums[i]);
        }
        int ans1 = max(solve(temp1),solve(temp2));
        return ans1;
    }*/
//Nijas's Training Using meorization 
/*int solve(int day , int last , vector<vector<int>> &dp,vector<vector<int>> points){
        if(day == 0){
            int maxi = 0;
            for(int i=0;i<3;i++){
                if(i != last){
                    maxi = max(maxi,points[0][i]);
                }
            }
            return maxi;
        }
        if(dp[day][last] != -1){
            return dp[day][last];
        }
        int maxi = 0;
        for(int i=0;i<3;i++){
            if(i != last){
                int muu = points[day][i] + solve(day - 1,i,dp,points);
                maxi = max(maxi,muu);
            }
        }
        return dp[day][last] = maxi;
    }
    int maximumPoints(vector<vector<int>>& points, int n) {
        vector<vector<int>> dp(n,vector<int>(4,-1));
        return solve(n - 1,3,dp,points);
    }*/	
//Using tabulation
/*int maximumPoints(vector<vector<int>>& points, int n) {
       vector<vector<int>> dp(n,vector<int>(4,0));
       dp[0][0] = max(points[0][1],points[0][2]);
       dp[0][1] = max(points[0][0],points[0][2]);
       dp[0][2] = max(points[0][0],points[0][1]);
       dp[0][3] = max(points[0][0],max(dp[0][1],dp[0][2]));
       for(int day = 1;day<n;day++){
           for(int last=0;last<4;last++){
               dp[day][last] = 0;
               for(int task=0;task<3;task++){
                   if(task!= last){
                       dp[day][last] = max(dp[day][last],points[day][task] + dp[day - 1][task]);
                   }
               }
           }
       }
       return dp[n - 1][3];
    }*/									
//Using spaceoptimization
/*int maximumPoints(vector<vector<int>>& points, int n) {
        vector<int> dp(4, 0);
        dp[0] = max(points[0][1], points[0][2]);
        dp[1] = max(points[0][0], points[0][2]);
        dp[2] = max(points[0][0], points[0][1]);
        dp[3] = max(points[0][0], max(points[0][1], points[0][2]));
    
        for (int day = 1; day < n; ++day) {
            vector<int> temp(4, 0);
            for (int last = 0; last < 4; ++last) {
                temp[last] = 0;
                for (int task = 0; task < 3; ++task) {
                    if (task != last) {
                        temp[last] = max(temp[last], points[day][task] + dp[task]);
                    }
                }
            }
            dp = temp;
        }
        return dp[3];
    }*/
//Unique without Obtacle using tabulation
/*int mod = 2*1e9;
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i == 0 && j == 0) dp[i][j] = 1;
                int up;
                int left;
                if(i > 0) up = dp[i - 1][j]  % mod;
                if(j > 0) left = dp[i][j - 1]  % mod;
                dp[i][j] = (up + left) % mod;
            }
        }
        return dp[m - 1][n - 1];
    }*/
//Uing space optimization
/*int mod = 2*1e9;
    int uniquePaths(int m, int n) {
        vector<int> prev(m,0);
        for(int i=0;i<m;i++){
            vector<int> curr(n,0);
            for(int j=0;j<n;j++){
                if(i == 0 && j == 0) curr[j] = 1;
                else{
                    int up = 0;
                    int left = 0;
                    if(i > 0) up = prev[j] % mod;
                    if(j > 0) left = curr[j - 1] % mod;
                    curr[j] = (up + left) % mod;
                }
            }
            prev = curr;
        }
        return prev[n - 1];
    }*/	
//Width obstacle (1 is) uising space iptimixation
/*int mod = 2 * 1e9;
    int uniquePathsWithObstacles(vector<vector<int>>& o) {
        int m = o.size();
        int n = o[0].size();
        
        vector<int> prev(n, 0);

        for (int i = 0; i < m; ++i) {
            vector<int> curr(n, 0);
            for (int j = 0; j < n; ++j) {
                if (o[i][j] == 1) {
                    curr[j] = 0;
                } else if (i == 0 && j == 0) {
                    curr[j] = 1;
                } else {
                    int up = 0;
                    int left = 0;
                    if (i > 0) up = prev[j];
                    if (j > 0) left = curr[j - 1];
                    curr[j] = (up + left) % mod;
                }
            }
            prev = curr;
        }

        return prev[n - 1];
    }*/
//Minimmum path sum using tabulation
/*int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i == 0 && j == 0) dp[i][j] = grid[i][j];
                else{
                    int up = grid[i][j];
                    if(i > 0) up += dp[i - 1][j];
                    else up += 1e9;
                    int left = grid[i][j];
                    if(j > 0) left += dp[i][j - 1];
                    else left += 1e9;
                    dp[i][j] = min(left,up);
                }
            }
        }
        return dp[n - 1][m - 1];
    }*/
//Uing space ooptimization in it
/*int minPathSum(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    vector<int> pre(m, 0);
    
    for (int i = 0; i < n; i++) {
        vector<int> curr(m, 0);
        for (int j = 0; j < m; j++) {
            if (i == 0 && j == 0) {
                curr[j] = grid[i][j];
            } else {
                int up = (i > 0) ? grid[i][j] + pre[j] : INT_MAX;
                int left = (j > 0) ? grid[i][j] + curr[j - 1] : INT_MAX;
                curr[j] = min(left, up);
            }
        }
        pre = curr;
    }
    return pre[m - 1];
}*/
//Maximum path sum in matrix(Starting from any column in row 0 return the largest sum of any of the paths up to row n -1. Return the highest maximum path sum.)
/*int solve(int r,int c,vector<vector<int>> &M,vector<vector<int>> &dp){
        if(c < 0 || c >= M.size()){
            return -1;
        }
        if(r == M.size() - 1){
            return M[r][c];
        }
        if(dp[r][c] != -1){
            return dp[r][c];
        }
        return dp[r][c] = M[r][c] + max(solve(r + 1,c - 1,M,dp),max(solve(r + 1,c,M,dp),solve(r + 1,c + 1,M,dp)));
    }
    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        vector<vector<int>> dp(N,vector<int>(N,-1));
        int ans =0;
        for(int col =0;col<N;col++){
            ans = max(ans,solve(0,col,Matrix,dp));
        }
        return ans;
    }*/
//Using tabulation
/*int maximumPath(int N, vector<vector<int>> Matrix)
    {
        vector<vector<int>> dp(N,vector<int>(N,0));
        for(int i=0;i<N;i++){
            dp[0][i] = Matrix[0][i];
        }
        for(int i=1;i<N;i++){
            for(int j=0;j<N;j++){
                int left = 0;
                if(j - 1 >= 0) left = dp[i - 1][j - 1];
                int up = dp[i - 1][j];
                int right = 0;
                if(j + 1 < N){
                    right = dp[i - 1][j + 1];
                }
                dp[i][j] = Matrix[i][j] + max({up,right,left});
            }
        }
        int ans = 0;
        for(int i=0;i<N;i++){
            ans = max(ans,dp[N - 1][i]);
        }
        return ans;
    }*/
//Triangle Path Sum Using memo
/*int f(int i,int j,vector<vector<int>> &dp,vector<vector<int>> &t,int n){
        if(i == n - 1) return t[i][j];
        if(dp[i][j] != -1) return dp[i][j];
        int up = t[i][j] + f(i + 1,j,dp,t,n);
        int dai = t[i][j] + f(i + 1,j + 1,dp,t,n);
        return dp[i][j] = min(up,dai);
    }
    int minimizeSum(int n, vector<vector<int>>& triangle) {
        vector<vector<int>> dp(n,vector<int>(n,-1));
        return f(0,0,dp,triangle,n);
    }*/
//Using tabu
/*int minimizeSum(int n, vector<vector<int>>& triangle) {
        vector<vector<int>> dp(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            dp[n - 1][i] = triangle[n - 1][i]; 
        }
        for(int i=n - 2;i>=0;i--){
            for(int j =i;j>=0;j--){
                int up = triangle[i][j] + dp[i + 1][j];
                int dai = triangle[i][j] + dp[i + 1][j + 1];
                dp[i][j] = min(up,dai);
            }
        }
        return dp[0][0];
    }*/
//Using space
/*int minimizeSum(int n, vector<vector<int>>& triangle) {
       vector<int> pre(n,0) , curr(n,0);
       for(int i=0;i<n;i++){
           pre[i] = triangle[n - 1][i];
       }
       for(int i=n - 2;i>=0;i--){
           for(int j=i;j>=0;j--){
               int up = triangle[i][j] + pre[j];
               int dia = triangle[i][j] + pre[j + 1];
               curr[j] = min(up,dia);
           }
           pre = curr;
       }
       return pre[0];
    }*/
//Chocolates Pickup or Ninja and his friends Using memo
 /*int f(int i,int j1 ,int j2,int n, int m,vector<vector<int>>& grid,vector<vector<vector<int>>> &dp){
        if(j1 < 0 || j1 >= m || j2 < 0 || j2 >= m) return -1e8;
        if(i == n - 1){
            if(j1 == j2) return grid[i][j1];
            else return grid[i][j1] + grid[i][j2];
        }
        if(dp[i][j1][j2] != -1){
            return dp[i][j1][j2];
        }
        int maxi = 0;
        for(int dis = -1 ;dis<=1;dis++){
            for(int dis2 = -1;dis2<=1;dis2++){
                int value = 0;
                if(j1 == j2) value = grid[i][j1];
                else value = grid[i][j1] + grid[i][j2];
                value  += f(i + 1,j1 + dis,j2 + dis2,n,m,grid,dp);
                maxi = max(maxi,value);
            }
        }
        return dp[i][j1][j2] = maxi;
    }
    int solve(int n, int m, vector<vector<int>>& grid) {
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(m,vector<int>(m,-1)));
        return f(0,0,m - 1,n,m,grid,dp);
    }*/
//Using tabulation
/*int solve(int n, int m, vector<vector<int>>& grid) {
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(m,vector<int>(m,0)));
        for(int j1 = 0;j1<m;j1++){
            for(int j2 = 0;j2<m;j2++){
                if(j1 == j2) dp[n - 1][j1][j2] = grid[n - 1][j1];
                else dp[n - 1][j1][j2] = grid[n - 1][j1] + grid[n - 1][j2];
            }
        }
        
        for(int i=n - 2;i>=0;i--){
            for(int j1 =0;j1<m;j1++){
                for(int j2 = 0;j2<m;j2++){
                    int maxi = 0;
                    for(int dis1= -1;dis1<=1;dis1++){
                        for(int dis2 = -1;dis2<=1;dis2++){
                            int value = 0;
                            if(j1 == j2) value = grid[i][j1];
                            else value = grid[i][j1] + grid[i][j2];
                            if(j1 + dis1 >= 0 && j1 + dis1 < m && j2 + dis2 >= 0 && j2 + dis2 < m){
                                value += dp[i + 1][j1 + dis1][j2 + dis2];
                            }
                            else{
                                value += -1e9;
                            }
                            maxi = max(maxi,value);
                        }
                    }
                    dp[i][j1][j2] = maxi;
                }
            }
        }
        return dp[0][0][m - 1];
    }*/
//Using space
/*int cherryPickup(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> pre(m,vector<int>(m,0));
        vector<vector<int>> curr(m,vector<int>(m,0));
        for(int j1 = 0;j1<m;j1++){
            for(int j2 = 0;j2<m;j2++){
                if(j1 == j2) pre[j1][j2] = grid[n - 1][j1];
                else pre[j1][j2] = grid[n - 1][j1] + grid[n - 1][j2];
            }
        }
        
        for(int i=n - 2;i>=0;i--){
            for(int j1 =0;j1<m;j1++){
                for(int j2 = 0;j2<m;j2++){
                    int maxi = 0;
                    for(int dis1= -1;dis1<=1;dis1++){
                        for(int dis2 = -1;dis2<=1;dis2++){
                            int value = 0;
                            if(j1 == j2) value = grid[i][j1];
                            else value = grid[i][j1] + grid[i][j2];
                            if(j1 + dis1 >= 0 && j1 + dis1 < m && j2 + dis2 >= 0 && j2 + dis2 < m){
                                value += pre[j1 + dis1][j2 + dis2];
                            }
                            else{
                                value += -1e9;
                            }
                            maxi = max(maxi,value);
                        }
                    }
                    curr[j1][j2] = maxi;
                }
            }
            pre = curr;
        }
        return pre[0][m - 1];
    }*/	    
//Subset Sum Problem Using memo
/*bool f(int n,int target,vector<int>&arr,vector<vector<int>> &dp){
        if(target == 0) return true;
        if(n == 0) return (arr[0] == target);
        if(dp[n][target] != -1){
            return dp[n][target];
        }
        bool nottake = f(n - 1,target,arr,dp);
        bool take = false;
        if(arr[n] <= target) take = f(n - 1,target - arr[n],arr,dp);
        return dp[n][target] = take || nottake;
    }
    bool isSubsetSum(vector<int>arr, int sum){
        int n = arr.size();
        vector<vector<int>> dp(n,vector<int>(sum + 1,-1));
        return f(n - 1,sum,arr,dp);
    }*/
//Using tabulation
/*bool isSubsetSum(vector<int>arr, int sum){
        int n = arr.size();
        vector<vector<bool>> dp(n,vector<bool>(sum + 1,0));
        for(int i=0;i<n;i++){
            dp[i][0] = true;
        }
        if(arr[0] <= sum) dp[0][arr[0]] = true;
        for(int i = 1;i<n;i++){
            for(int j = 1;j<=sum;j++){
                bool nontake = dp[i - 1][j];
                bool take = false;
                if(arr[i] <= j) take = dp[i - 1][j - arr[i]];
                dp[i][j] = take || nontake;
            }
        }
        return dp[n - 1][sum];
    }*/
//Using space otimization
/*bool isSubsetSum(vector<int>arr, int sum){
        int n = arr.size();
        vector<int> pre(sum + 1,0) , curr(sum + 1,0);
        pre[0] = 1 , curr[0] = 1;
        if(arr[0] <= sum) pre[arr[0]] = 1;
        for(int i=1;i<n;i++){
            for(int j=1;j<=sum;j++){
                bool nontake = pre[j];
                bool take = 0;
                if(arr[i] <= j) take = pre[j - arr[i]];
                curr[j] = take || nontake;
            }
            pre = curr;
        }
        return pre[sum];
    }	*/
//Partition Equal Subset Sum using Space
/*bool canPartition(vector<int>& arr) {
        int n  = arr.size();
        int sum1 = 0;
        for(int i= 0;i<n;i++){
            sum1 += arr[i];
        }
        if(sum1 % 2) return false;
        int sum = sum1/2;
        vector<int> pre(sum + 1,0) , curr(sum + 1,0);
        pre[0] = 1 , curr[0] = 1;
        if(arr[0] <= sum) pre[arr[0]] = 1;
        for(int i=1;i<n;i++){
            for(int j=1;j<=sum;j++){
                bool nontake = pre[j];
                bool take = 0;
                if(arr[i] <= j) take = pre[j - arr[i]];
                curr[j] = take || nontake;
            }
            pre = curr;
        }
        return pre[sum];
    }*/
//Minimum sum partition Using Tabulation
/*int minDifference(int arr[], int n)  { 
	    int sum = 0;
	    for(int i=0;i<n;i++){
	        sum += arr[i];
	    }
        vector<vector<bool>> dp(n,vector<bool>(sum + 1,0));
        for(int i=0;i<n;i++){
            dp[i][0] = true;
        }
        if(arr[0] <= sum) dp[0][arr[0]] = true;
        for(int i = 1;i<n;i++){
            for(int j = 1;j<=sum;j++){
                bool nontake = dp[i - 1][j];
                bool take = false;
                if(arr[i] <= j) take = dp[i - 1][j - arr[i]];
                dp[i][j] = take || nontake;
            }
        }
        int mini = 1e9;
        for(int i=0;i<=sum/2;i++){
            if(dp[n - 1][i] == true){
                mini = min(mini,abs((sum - i) - i));
            }
        }
        return mini;
	}*/ 		   
//Perfect Sum Problem
/*int mod = 1e9 + 7;
	int f(int i,int arr[],vector<vector<int>> &dp,int sum,int n){
	    if(i == 0){
	        if(sum == 0 && arr[0] == 0) return 2;
	        if(sum == 0 || arr[0] == sum) return 1;
	        return 0;
	    }
	    if(dp[i][sum] != -1){
	        return dp[i][sum];
	    }
	    int nontake = f(i - 1,arr,dp,sum,n) % mod;
	    int take = 0;
	    if(arr[i] <= sum) take = f(i - 1,arr,dp,sum - arr[i],n) % mod;
	    return dp[i][sum] = (nontake + take) % mod;
	}
	int perfectSum(int arr[], int n, int sum)
	{
        vector<vector<int>> dp(n,vector<int>(sum + 1,-1));
        return f(n - 1,arr,dp,sum,n);
	}*/
//Using tabulation
/*int mod = 1e9 + 7;
	int perfectSum(int arr[], int n, int sum)
	{
        vector<vector<int>> dp(n,vector<int>(sum + 1,0));
        if(arr[0] == 0) dp[0][0] = 2;
        else dp[0][0] = 1;
        if(arr[0] != 0 && sum >= arr[0]) dp[0][arr[0]] = 1;
        for(int i=1;i<n;i++){
            for(int j = 0;j<=sum;j++){
                int nontake = dp[i - 1][j] % mod;
                int take = 0;
                if(j >= arr[i]) take = dp[i - 1][j - arr[i]] % mod;
                dp[i][j] = (take + nontake)% mod;
            }
        }
        return dp[n - 1][sum];
	}	*/
//Partitions with Given Difference
/*int mod = 1e9 + 7;
    int countPartitions(int n, int d, vector<int>& arr) {
        int total = 0;
        for(int i=0;i<n;i++){
            total += arr[i];
        }
        if(total - d < 0 || (total - d) % 2) return 0;
        int sum = (total - d) / 2;
        vector<vector<int>> dp(n,vector<int>(sum + 1,0));
        if(arr[0] == 0) dp[0][0] = 2;
        else dp[0][0] = 1;
        if(arr[0] != 0 && sum >= arr[0]) dp[0][arr[0]] = 1;
        for(int i=1;i<n;i++){
            for(int j = 0;j<=sum;j++){
                int nontake = dp[i - 1][j] % mod;
                int take = 0;
                if(j >= arr[i]) take = dp[i - 1][j - arr[i]] % mod;
                dp[i][j] = (take + nontake)% mod;
            }
        }
        return dp[n - 1][sum];
    }*/
//Subsets(Given an integer array nums of unique elements, return all possible subsets)
/*void f(vector<vector<int>> &ans,vector<int> &ans1,vector<int> &nums,int n ,int i){
        if(i < 0){
            ans.push_back(ans1);
            return;
        }
        f(ans,ans1,nums,n,i - 1);
        ans1.push_back(nums[i]);
        f(ans,ans1,nums,n,i - 1);
        ans1.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ans1;
        int n = nums.size();
        f(ans,ans1,nums,n,n - 1);
        return ans;
    }*/
//0-1 knapsack 
/*int f(int wt[], vector<vector<int>> &dp,int i,int val[],int W){
        if(i == 0){
            if(wt[i] <= W) return val[i];
            else return 0;
        }
        if(dp[i][W] != -1){
            return dp[i][W];
        }
        int nontake = f(wt,dp,i - 1,val,W);
        int take = INT_MIN;
        if(wt[i] <= W) take = val[i] + f(wt,dp,i - 1,val,W - wt[i]);
        return dp[i][W] = max(take,nontake);
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       vector<vector<int>> dp(n,vector<int>(W + 1,-1));
       return f(wt,dp,n - 1,val,W);
    }*/
//Target Sum
/*int f(int i,vector<int> &arr,vector<vector<int>> &dp,int sum,int n){
	    if(i == 0){
	        if(sum == 0 && arr[0] == 0) return 2;
	        if(sum == 0 || arr[0] == sum) return 1;
	        return 0;
	    }
	    if(dp[i][sum] != -1){
	        return dp[i][sum];
	    }
	    int nontake = f(i - 1,arr,dp,sum,n);
	    int take = 0;
	    if(arr[i] <= sum) take = f(i - 1,arr,dp,sum - arr[i],n);
	    return dp[i][sum] = (nontake + take);
	}
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        int n1 = 0;
        for(int i=0;i<n;i++){
            n1 += nums[i];
        }
        if(n1 - target < 0 || (n1 - target)%2) return 0;
        int sum = (n1 - target)/2;
        vector<vector<int>> dp(n,vector<int>(sum + 1,-1));
        return f(n - 1,nums,dp,sum,n);
    }*/
//Coin Change Using memo
 /*long long f(int coins[],int i,int sum,vector<vector<long long>> &dp){
        if(i == 0){
            return (sum % coins[0] == 0);
        }
        if(dp[i][sum] != -1){
            return dp[i][sum];
        }
        long long nottake = f(coins,i - 1,sum,dp);
        long long take = 0;
        if(coins[i] <= sum) take = f(coins,i,sum - coins[i],dp);
        dp[i][sum] = nottake + take;
    }
    long long int count(int coins[], int N, int sum) {

        vector<vector<long long>> dp(N,vector<long long>(sum + 1,-1));
        return f(coins,N - 1,sum,dp);
    }*/
//Using tabu
/*long long int count(int coins[], int N, int sum) {

        vector<vector<long long>> dp(N,vector<long long>(sum + 1,0));
        for(int i=0;i<=sum;i++){
            dp[0][i] = (i % coins[0] == 0);
        }
        for(int i=1;i<N;i++){
            for(int j = 0;j<=sum;j++){
                long long nontake = dp[i - 1][j];
                long long take = 0;
                if(j >= coins[i]) take = dp[i][j - coins[i]];
                dp[i][j] = take + nontake;
            }
        }
        return dp[N - 1][sum];
    }*/
//Coins change leetcode one Using memo
/*int coinChangeHelper(vector<int>& coins, int amount, vector<int>& memo) {
    if (amount < 0) return -1; // No solution exists
    if (amount == 0) return 0; // Zero coins needed for amount 0
    if (memo[amount] != -1) return memo[amount]; // Return the cached result if it exists
    
    int minCoins = INT_MAX;
    for (int coin : coins) {
        int res = coinChangeHelper(coins, amount - coin, memo);
        if (res >= 0 && res < minCoins) {
            minCoins = res + 1; // Update minCoins with the minimum number of coins needed
        }
    }
    
    memo[amount] = (minCoins == INT_MAX) ? -1 : minCoins; // Cache the result
    return memo[amount];
}

int coinChange(vector<int>& coins, int amount) {
    vector<int> memo(amount + 1, -1); // Initialize memoization array with -1
    return coinChangeHelper(coins, amount, memo);
}*/
//Using tabu
/*int coinChange(vector<int>& coins, int amount) {
    vector<int> dp(amount + 1, amount + 1); // Initialize dp array with a large value (amount + 1)
    dp[0] = 0; // Base case: 0 coins needed to make amount 0
    
    for (int i = 1; i <= amount; ++i) {
        for (int coin : coins) {
            if (coin <= i) {
                dp[i] = min(dp[i], dp[i - coin] + 1); // Update dp[i] with the minimum number of coins needed
            }
        }
    }
    
    return dp[amount] > amount ? -1 : dp[amount]; // Return -1 if no solution exists, otherwise return dp[amount]
}*/	    
//Knapsack with Duplicate Items
/*int f(int i,int W,int val[],int wt[],vector<vector<int>> &dp){
        if(i == 0) return (int)(W/wt[0])*val[0];
        if(dp[i][W] != -1) return dp[i][W];
        int nontake = f(i - 1,W,val,wt,dp);
        int take = -1e9;
        if(wt[i] <= W) take = val[i] + f(i,W - wt[i],val,wt,dp);
        return dp[i][W] = max(take,nontake);
    }
    int knapSack(int N, int W, int val[], int wt[])
    {
        vector<vector<int>> dp(N,vector<int>(W + 1,-1));
        return f(N - 1,W,val,wt,dp);
    }*/
//Using tabulation
/*int knapSack(int N, int W, int val[], int wt[])
    {
        vector<vector<int>> dp(N,vector<int>(W + 1,0));
        for(int i=0;i<=W;i++){
            dp[0][i] = (int)(i/wt[0])*val[0];
        }
        for(int i=1;i<N;i++){
            for(int j=0;j<=W;j++){
                int nontake = dp[i - 1][j];
                int take = -1e9;
                if(wt[i] <= j) take = val[i] + dp[i][j - wt[i]];
                dp[i][j] = max(nontake,take);
            }
        }
        return dp[N - 1][W];
    }*/
//Longest Common Subsequence Using memo
 /*int f(string text1,string text2,int i,int j,vector<vector<int>> &dp){
        if(i < 0 || j < 0) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        if(text1[i] == text2[j]) return  dp[i][j] = 1 + f(text1,text2,i - 1,j - 1,dp);
        return dp[i][j] = max(f(text1,text2,i - 1,j,dp),f(text1,text2,i,j - 1,dp));
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return f(text1,text2,n - 1,m - 1,dp);
    }*/
//Using tabu
/*int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        vector<vector<int>> dp(n + 1,vector<int>(m + 1,0));
        for(int i=0;i<=n;i++) dp[i][0] = 0; // for -1
        for(int j=0;j<=m;j++) dp[0][j] = 0;// for -1
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(text1[i - 1] == text2[j - 1]) dp[i][j] = 1 + dp[i - 1][j - 1];
                else dp[i][j] =  max(dp[i - 1][j],dp[i][j - 1]);
            }
        }
        return dp[n][m];
    }*/	
//Printing lcs










//Printing all lcs in it
/*int dp[101][101];
	int lcs_len = 0;
	vector<string> res;
	private:
		int lcs(string s, string t, int pos1, int pos2)
		{
			// base condition 
			if(pos1 == s.size() or pos2 == t.size())
				return 0;
			int &ans  = dp[pos1][pos2];
			// if lcs has been computed
			if(ans != -1)
				return ans;
			// if characters are same return previous + 1 else 
			// max of two sequences after removing i'th and j'th 
			// char one by one 
			if(s[pos1] == t[pos2])
				return ans = 1 + lcs(s, t, pos1 + 1, pos2 + 1);
			return ans = max(lcs(s, t, pos1 + 1, pos2), lcs(s, t, pos1, pos2 + 1));
		}
	private:
		void helper(string s, string t, string cur, int pos1, int pos2, int cur_lcs)
		{
			// if currlcs is equal to lcslen then store it 
			if(cur_lcs == lcs_len)
			{
				res.push_back(cur);
				return ;
			}
			// if we are done with all the characters of both string 
			if(pos1 == s.size() or pos2 == t.size())
				return ;
		    // here we have to print all sub-sequences lexicographically, 
    		// that's why we start from 'a'to'z' if this character is 
    		// present in both of them then append it in cur and same 
    		// remaining part 
			for(char ch = 'a'; ch <= 'z'; ch++)
			{
				// f is a flag to tell that we have printed all the 
        		// subsequences corresponding to current character
				bool f = false;
				for(int i = pos1; i < s.size(); i++)
				{
					if(s[i] == ch)
					{
						for(int j = pos2; j < t.size(); j++)
						{
		                // if ch is present in both of them and 
                		// remaining length is equal to remaining 
                		// lcs length then add ch in sub-sequenece 
							if(t[j] == ch and lcs(s, t, i, j) == lcs_len - cur_lcs)
							{
								string new_cur = cur + ch;
								helper(s, t, new_cur, i + 1, j + 1, cur_lcs + 1);
								f = true;
								break;
							}
						}
					}
					// If we found LCS beginning with current character
					if(f)
						break;
				}
			}
		}
	public:
		vector<string> all_longest_common_subsequences(string s, string t)
		{
			memset(dp, -1, sizeof(dp));
			// Find lcs_length
			lcs_len = lcs(s, t, 0, 0);
			// function to get all longest common subsequences
			helper(s, t, "", 0, 0, 0);
			return res;
		}*/	
//Longest Common Substring or subarray using memo
/*int longestCommonSubstr (string S1, string S2, int n, int m)
    {
          vector<vector<int>> dp(n + 1,vector<int>(m + 1,0));
          for(int i=0;i<=n;i++){
              dp[i][0] = 0;
          }
          for(int j=0;j<=m;j++){
              dp[0][j] = 0;
          }
          int ans = 0;
          for(int i=1;i<=n;i++){
              for(int j=1;j<=m;j++){
                  if(S1[i - 1] == S2[j - 1]){
                      dp[i][j] = 1 + dp[i - 1][j - 1];
                      ans = max(ans,dp[i][j]);
                  }
                  else{
                      dp[i][j] = 0;
                  }
              }
          }
          return ans;
    }*/	
//Using space									
/*int findLength(vector<int>& S1, vector<int>& S2) {
        int n = S1.size();
        int m = S2.size();
        vector<int> pre(n + 1,0) , curr(m + 1,0);
          int ans = 0;
          for(int i=1;i<=n;i++){
              for(int j=1;j<=m;j++){
                  if(S1[i - 1] == S2[j - 1]){
                      curr[j] = 1 + pre[j - 1];
                      ans = max(ans,curr[j]);
                  }
                  else{
                      curr[j] = 0;
                  }
              }
              pre = curr;
          }
          return ans;
    }*/
//Palindromic String
/*int countSubstrings(string s) {
        int n = s.size();
        vector<vector<bool>> dp(n, vector<bool>(n, false));
        int count = 0;

        for (int gap = 0; gap < n; gap++) {
            for (int i = 0, j = gap; j < n; i++, j++) {
                if (gap == 0) {
                    dp[i][j] = true;  // Single character is always a palindrome
                } else if (gap == 1) {
                    dp[i][j] = (s[i] == s[j]);  // Two characters are a palindrome if they are the same
                } else {
                    if(s[i] == s[j] && dp[i + 1][j - 1] == true){
                        dp[i][j] = true;
                    }
                    else{
                        dp[i][j] = false;
                    }
                }

                if (dp[i][j]) {
                    count++;
                }
            }
        }

        return count;
    }*/
//If returning that string in it
/*string longestPalindrome(string s) {
        int n = s.size();
        if (n == 0) return "";

        vector<vector<bool>> dp(n, vector<bool>(n, false));
        int start = 0;
        int maxLength = 1;

        for (int gap = 0; gap < n; gap++) {
            for (int i = 0, j = gap; j < n; i++, j++) {
                if (gap == 0) {
                    dp[i][j] = true;  // Single character is always a palindrome
                } else if (gap == 1) {
                    dp[i][j] = (s[i] == s[j]);  // Two characters are a palindrome if they are the same
                } else {
                    if (s[i] == s[j] && dp[i + 1][j - 1]) {
                        dp[i][j] = true;
                    } else {
                        dp[i][j] = false;
                    }
                }

                if (dp[i][j]) {
                    if (j - i + 1 > maxLength) {
                        start = i;
                        maxLength = j - i + 1;
                    }
                }
            }
        }

        return s.substr(start, maxLength);
    }*/
//Without DP in O(1) space
/*string longestPalin (string S) {
        int n  = S.size();
        int low , high;
        int st = 0  , len =  1;
        for(int i=1;i<n;i++){
            //even case
            low = i , high = i - 1;
            while(low >= 0 && high < n && S[low] == S[high]){
                if(high - low + 1 > len){
                    st = low;
                    len = high - low + 1;
                }
                low--;
                high++;
            }
            //odd
            low = i - 1 , high = i + 1;
            while(low >= 0 && high < n && S[low] == S[high]){
                if(high - low + 1 > len){
                    st = low;
                    len = high - low + 1;
                }
                low--;
                high++;
            }
        }
        return S.substr(st,len);
    }*/	    
//Minnimum insertion to make string palindrome
/*int lcs(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        vector<vector<int>> dp(n + 1,vector<int>(m + 1,0));
        for(int i=0;i<=n;i++) dp[i][0] = 0; // for -1
        for(int j=0;j<=m;j++) dp[0][j] = 0;// for -1
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(text1[i - 1] == text2[j - 1]) dp[i][j] = 1 + dp[i - 1][j - 1];
                else dp[i][j] =  max(dp[i - 1][j],dp[i][j - 1]);
            }
        }
        return dp[n][m];
    }
    int longestPalindromeSubseq(string s) {
       string s1 = s;
       reverse(s1.begin(),s1.end());
       return lcs(s,s1); 
    }
    int countMin(string S){
       return (S.length() - longestPalindromeSubseq(S)); 
    }*/	
//Minimum number of deletions and insertions to make str2 to str1
/*int lcs(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        vector<vector<int>> dp(n + 1,vector<int>(m + 1,0));
        for(int i=0;i<=n;i++) dp[i][0] = 0; // for -1
        for(int j=0;j<=m;j++) dp[0][j] = 0;// for -1
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(text1[i - 1] == text2[j - 1]) dp[i][j] = 1 + dp[i - 1][j - 1];
                else dp[i][j] =  max(dp[i - 1][j],dp[i][j - 1]);
            }
        }
        return dp[n][m];
    }
	int minOperations(string str1, string str2) 
	{ 
	    return str1.size() + str2.size() - 2*lcs(str1,str2);
	    
	}*/ 
//Function to return shortest common supersequence of two strings.
    /*int shortestCommonSupersequence(string text1, string text2, int n, int m)
    {
        vector<vector<int>> dp(n + 1,vector<int>(m + 1,0));
        for(int i=0;i<=n;i++) dp[i][0] = 0; // for -1
        for(int j=0;j<=m;j++) dp[0][j] = 0;// for -1
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(text1[i - 1] == text2[j - 1]) dp[i][j] = 1 + dp[i - 1][j - 1];
                else dp[i][j] =  max(dp[i - 1][j],dp[i][j - 1]);
            }
        }
        int i = n , j = m;
        string ans = "";
        while(i > 0 && j > 0){
            if(text1[i - 1] == text2[j - 1]){
                ans += text1[i - 1];
                i--;
                j--;
            }
            else if(dp[i - 1][j] > dp[i][j - 1]){
                ans += text1[i - 1];
                i--;
            }
            else{
                ans += text2[j - 1];
                j--;
            }
        }
        while(i>0){
            ans += text1[i - 1];
            i--;
        } 
        while(j>0){
            ans += text2[j - 1];
            j--;
        }
        reverse(ans.begin(),ans.end());
        return ans.size();
    }*/	
//Count Palindromic Subsequences
    /*int mod = 1e9 + 7;
    long long int countPS(string s) {
        int n = s.size();
        vector<vector<long long>> dp(n, vector<long long>(n, 0));
    
        for (int gap = 0; gap < n; gap++) {
            for (int i = 0, j = gap; j < n; i++, j++) {
                if (gap == 0) {
                    dp[i][j] = 1; // Single character is a palindrome
                } else if (gap == 1) {
                    dp[i][j] = (s[i] == s[j]) ? 3 : 2; // Two characters: 2 single characters + 1 if they are the same
                } else {
                    if (s[i] == s[j]) {
                        dp[i][j] = (dp[i + 1][j] + dp[i][j - 1] + 1) % mod;
                    } else {
                        dp[i][j] = (dp[i + 1][j] + dp[i][j - 1] - dp[i + 1][j - 1] + mod) % mod;
                    }
                }
            }
        }
        return dp[0][n - 1];
    }*/	
//Distinct occurrences(Given two strings s and t of length n and m respectively. Find the count of distinct occurrences of t in s as a sub-sequence	)
    /*int mod = 1e9 + 7;
    int f(int i,int j,string s,string t,vector<vector<int>> &dp){
        if(j < 0) return 1;
        if(i < 0) return 0;
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        if(s[i] == t[j]){
            return dp[i][j] =  (f(i - 1,j - 1,s,t,dp) + f(i - 1,j,s,t,dp))% mod;
        }
        return dp[i][j] =  (f(i - 1,j,s,t,dp))%mod;
    }
    int subsequenceCount(string s, string t)
    {
       int n = s.size();
       int m = t.size();
       vector<vector<int>> dp(n,vector<int>(m,-1));
       return f(n - 1,m - 1,s,t,dp);
    }*/
//Using tabu
/*int numDistinct(string s, string t) {
        int n = s.size();
        int m = t.size();
        vector<vector<long long>> dp(n + 1, vector<long long>(m + 1, 0));
        for(int i=0;i<=n;i++) dp[i][0] = 1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i - 1] == t[j - 1]) dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
                else dp[i][j] = dp[i - 1][j];
            }
        }
        return dp[n][m];
    }*/	
//Edit Distance Using memo
/*int f(int i, int j, string s, string t, vector<vector<int>> &dp) {
        if (i < 0) return j + 1;
        if (j < 0) return i + 1;
        if (dp[i][j] != -1) {
            return dp[i][j];
        }
        if (s[i] == t[j]) {
            return dp[i][j] = f(i - 1, j - 1, s, t, dp);
        }
        return dp[i][j] = 1 + min(f(i - 1, j - 1, s, t, dp), min(f(i - 1, j, s, t, dp), f(i, j - 1, s, t, dp)));
    }
    
    int editDistance(string s, string t) {
        int n = s.size();
        int m = t.size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return f(n - 1, m - 1, s, t, dp);
    }*/
//Using tabu
/*int minDistance(string s, string t) {
        int n = s.size();
        int m = t.size();
        vector<vector<int>> dp(n + 1,vector<int>(m + 1,0));
        for(int i=0;i<=n;i++) dp[i][0] = i;
        for(int j =1;j<=m;j++) dp[0][j] = j;
        for(int i=1;i<=n;i++){
            for(int j = 1;j<=m;j++){
                if(s[i - 1] == t[j - 1]) dp[i][j] = dp[i - 1][j - 1];
                else dp[i][j] = 1 + min(dp[i - 1][j - 1],min(dp[i - 1][j],dp[i][j - 1]));
            }
        }
        return dp[n][m];
    }*/	
//Count Distinct Palindromic Subsequence
    /*int mod = 1e9 + 7;
    int countPalindromicSubsequences(string s) {
        int n  = s.size();
        vector<vector<int>> dp(n,vector<int>(n,0));
        vector<int> next(n);
        vector<int> pre(n);
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++){
            char ch = s[i];
            if(mp.find(ch) == mp.end()){
                pre[i] = -1;
            }
            else{
                pre[i] = mp[ch];
            }
            mp[ch] = i;
        }
        mp.clear();
        for(int i=n - 1;i>=0;i--){
            char ch = s[i];
            if(mp.find(ch) == mp.end()){
                next[i] = -1;
            }
            else{
                next[i] = mp[ch];
            }
            mp[ch] = i;
        }
        // Fill the dp array
        for (int gap = 0; gap < n; gap++) {
            for (int i = 0, j = gap; j < n; i++, j++) {
                if (gap == 0) {
                    dp[i][j] = 1;
                } else if (gap == 1) {
                    dp[i][j] = 2;
                } else {
                    char c1 = s[i];
                    char c2 = s[j];
                    if (c1 != c2) {
                        dp[i][j] = (dp[i][j - 1] + dp[i + 1][j] - dp[i + 1][j - 1]) % mod;
                    } else {
                        int ne = next[i];
                        int pr = pre[j];
                        if (ne > pr) {
                            dp[i][j] = (2 * dp[i + 1][j - 1] + 2) % mod;
                        } else if (ne == pr) {
                            dp[i][j] = (2 * dp[i + 1][j - 1] + 1) % mod;
                        } else {
                            dp[i][j] = (2 * dp[i + 1][j - 1] - dp[ne + 1][pr - 1]) % mod;
                        }
                    }
                }
            }
        }
        return dp[0][n - 1];
    } */
//Wild card matching Using memo
/*bool f(int i,int j,string s,string t,vector<vector<int>> &dp){
        if( i< 0 && j<0) return true;
        if(i < 0 && j >= 0) return false;
        if(j <0 && i>=0){
            for(int ii=0;ii<=i;ii++){
                if(s[ii] != '*') return false; // s= *  t=klajdf
            }
            return true;
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        if(s[i] == t[j] || s[i] == '?'){
            return dp[i][j] = f(i - 1,j - 1,s,t,dp);
        }
        if(s[i] == '*'){
            return dp[i][j] = f(i - 1,j,s,t,dp) || f(i,j - 1,s,t,dp);
        }
        return dp[i][j] = false; // if s[i] != t[j];
    }
    bool match(string s, string t)
    {
        int n = s.size();
        int m = t.size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return f(n - 1,m - 1,s,t,dp);
    }*/
//Using tabu
/*bool isMatch(string s, string p) {
        int n = s.size();
        int m = p.size();
        vector<vector<bool>> dp(n + 1,vector<bool>(m + 1,0));
        dp[0][0] = true; // if both got exhauted 
        for(int j = 1;j<=m;j++){//i < 0 && j >=0
            dp[0][j] = false;
        }
        for(int i=1;i<=n;i++){
            bool flag = true;
            for(int ii=1;ii<=i;ii++){
                if(s[ii - 1] != '*'){
                    flag = false;
                    break;
                }
            }
            dp[i][0] = flag;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i - 1] == p[j - 1] || s[i - 1] == '?'){
                    dp[i][j] = dp[i - 1][j - 1];
                }
                else if(s[i - 1] == '*'){
                    dp[i][j] = dp[i - 1][j] || dp[i][j - 1]; //jis ka bhi true hoga ye vo lega
                }
                else{
                    dp[i][j] = false;
                }
            }
        }
        return dp[n][m];

    }*/
//Longest Palindromic Substring in Linear Time


//Best Time to buy and shell stock 2
/*int f(int ind,int buy,vector<int> &prices,vector<vector<long long>> &dp){
        if(ind == prices.size()){
            return 0;
        }
        if(dp[ind][buy] != -1){
            return dp[ind][buy];
        }
        long long profit = 0;
        if(buy){
            profit = max(-prices[ind] + f(ind + 1,0,prices,dp),f(ind + 1,1,prices,dp));
        }
        else{
            profit = max(prices[ind] + f(ind + 1,1,prices,dp),f(ind + 1,0,prices,dp));
        }
        return dp[ind][buy] = profit;
    }
    int stockBuyAndSell(int n, vector<int> &prices) {
        vector<vector<long long>> dp(n,vector<long long>(2,-1));
        return f(0,1,prices,dp);
    }*/
//Using tabu
/*int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<long long>> dp(n + 1,vector<long long>(2,0));
        dp[n][0] = 0 , dp[n][1] = 0;
        for(int i=n - 1;i>=0;i--){
            for(int buy=0;buy<=1;buy++){
                 long long profit = 0;
                 if(buy){
                    profit = max(-prices[i] + dp[i + 1][0],dp[i + 1][1]);
                 }
                 else{
                    profit = max(prices[i] + dp[i + 1][1],dp[i + 1][0]);
                 }
                 dp[i][buy] = profit;
            }
        }
        return dp[0][1];
    }*/
//Buy and Sell a Share at most twice
/*int helper(vector<int>&price,int idx,int n,int k,int ch,vector<vector<vector<int>>>&dp){
            if(idx>n)return 0;
            if(k==0)return 0;
            int ans=0;
            if(dp[idx][ch][k]!=-1)return dp[idx][ch][k];
            if(ch==0){
                int ntk=helper(price,idx+1,n,k,ch,dp);
                int tk=helper(price,idx+1,n,k,1,dp)-price[idx];
                ans=max(ntk,tk);
            }
            else {
                int ntk=helper(price,idx+1,n,k,ch,dp);
                int tk=helper(price,idx+1,n,k-1,0,dp)+price[idx];
                ans=max(ntk,tk);
            }
            return dp[idx][ch][k]=ans;
        }
        int maxProfit(vector<int>&price){
            int n=price.size();
            vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
            return helper(price,0,n-1,2,0,dp);
        }*/
//Using tabu
/*int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<long long>>> dp(n + 1,vector<vector<long long>>(2,vector<long long>(3,0)));
        for(int i=n - 1;i>=0;i--){
            for(int buy=0;buy<=1;buy++){
                for(int cap= 2;cap>=1;cap--){
                     long long profit = 0;
                     if(buy){
                        profit = max(-prices[i] + dp[i + 1][0][cap],dp[i + 1][1][cap]);
                     }
                     else{
                        profit = max(prices[i] + dp[i + 1][1][cap - 1],dp[i + 1][0][cap]);
                     }
                     dp[i][buy][cap] = profit;
                }
            }
        }
        return dp[0][1][2];
    }*/
//Buy Shell stock at most K times
/*int f(int ind,int buy,int k,int arr[],vector<vector<vector<long long>>> &dp,int n){
        if(ind == n || k == 0) return 0;
        if(dp[ind][buy][k] != -1){
            return dp[ind][buy][k];
        }
        long long profit = 0;
        if(buy){
            profit = max(-arr[ind] + f(ind + 1,0,k,arr,dp,n),f(ind + 1,1,k,arr,dp,n));
        }
        else{
            profit = max(arr[ind] + f(ind + 1,1,k - 1,arr,dp,n),f(ind + 1,0,k,arr,dp,n));
        }
        return dp[ind][buy][k] = profit;
    }
    int maxProfit(int k, int n, int arr[]) {
        vector<vector<vector<long long>>> dp(n + 1,vector<vector<long long>>(2,vector<long long>(k + 1,-1)));
        return f(0,1,k,arr,dp,n);
    }*/
//Using tabu
 /*int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<long long>>> dp(n + 1,vector<vector<long long>>(2,vector<long long>(k + 1,0)));
        for(int i = n - 1;i>=0;i--){
            for(int buy=0;buy<=1;buy++){
                for(int cap = k;cap>0;cap--){
                    long long profit = 0;
                    if(buy){
                        profit = max(-prices[i] + dp[i + 1][0][cap],dp[i + 1][1][cap]);
                    }
                    else{
                        profit = max(prices[i] + dp[i + 1][1][cap - 1],dp[i + 1][0][cap]);
                    }
                    dp[i][buy][cap] = profit;
                }
            }
        }
        return dp[0][1][k];
    }*/	
//Buy Stock with Cooldown
/*long long f(int ind, int buy, vector<long long>& prices, vector<vector<long long>>& dp) {
        if (ind >= prices.size()) return 0;
        if (dp[ind][buy] != -1) {
            return dp[ind][buy];
        }
        long long profit = 0;
        if (buy) {
            profit = max(-prices[ind] + f(ind + 1, 0, prices, dp), f(ind + 1, 1, prices, dp));
        } else {
            profit = max(prices[ind] + f(ind + 2, 1, prices, dp), f(ind + 1, 0, prices, dp));
        }
        return dp[ind][buy] = profit;
    }
    
    long long maximumProfit(vector<long long>& prices, int n) {
        vector<vector<long long>> dp(n, vector<long long>(2, -1));
        return f(0, 1, prices, dp);
    }*/
//Best Time to Buy and Sell Stock with Transaction Fee
/*int f(int ind, int buy, vector<int>& prices, vector<vector<long long>>& dp,int fee) {
        if (ind == prices.size()) return 0;
        if (dp[ind][buy] != -1) {
            return dp[ind][buy];
        }
        long long profit = 0;
        if (buy) {
            profit = max(-prices[ind] + f(ind + 1, 0, prices, dp,fee), f(ind + 1, 1, prices, dp,fee));
        } else {
            profit = max(prices[ind] - fee + f(ind + 1, 1, prices, dp,fee), f(ind + 1, 0, prices, dp,fee));
        }
        return dp[ind][buy] = profit;
    }
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        vector<vector<long long>> dp(n, vector<long long>(2, -1));
        return f(0, 1, prices, dp,fee);
    }*/
//Using tabu
/*long long maximumProfit(vector<long long>& prices, int n, int fee) {
        if (n == 0) return 0;
        
        vector<vector<long long>> dp(n + 1, vector<long long>(2, 0));
        
        for (int i = n - 1; i >= 0; i--) {
            dp[i][1] = max(-prices[i] + dp[i + 1][0], dp[i + 1][1]);
            dp[i][0] = max(prices[i] - fee + dp[i + 1][1], dp[i + 1][0]);
        }
        
        return dp[0][1];
    }*/
//Longest Increasing Subsequence
/*int f(int ind,int pre,vector<int>&nums,vector<vector<int>>&dp){
        if(ind == nums.size()) return 0;
        if(dp[ind][pre + 1] != -1){
            return dp[ind][pre + 1];
        }
        int nontake = f(ind + 1,pre,nums,dp);
        int take = -1e9;
        if(pre == -1 || nums[ind] > nums[pre]){
            take = 1 + f(ind + 1,ind,nums,dp);
        }
        return dp[ind][pre + 1] = max(nontake,take);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n,vector<int>(n + 1,-1));
        return f(0,-1,nums,dp);
    }*/
//Using space
 /*int longestSubsequence(int n, int a[]) {
        vector<int> pre_array(n + 1, 0), curr(n + 1, 0);
        for (int i = n - 1; i >= 0; i--) {
            for (int pre = i - 1; pre >= -1; pre--) {
                int len = pre_array[pre + 1];
                if (pre == -1 || a[i] > a[pre]) {
                    len = max(len, 1 + pre_array[i + 1]);
                }
                curr[pre + 1] = len;
            }
            pre_array = curr;
        }
        return pre_array[0];
    }*/
//Printing logest increasing Subsequnce
/*vector<int> longestIncreasingSubsequence(int n, vector<int>& arr) {
        if (n == 0) return {};
    
        vector<int> dp(n, 1), prev_index(n), ans;
        int max_length = 1, last_index = 0;
    
        // Initialize the previous index array
        for (int i = 0; i < n; i++) {
            prev_index[i] = i;
        }
    
        // Fill dp array and track the previous indices
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (arr[i] > arr[j] && dp[i] < dp[j] + 1) {
                    dp[i] = dp[j] + 1;
                    prev_index[i] = j;
                }
            }
            if (dp[i] > max_length) {
                max_length = dp[i];
                last_index = i;
            }
        }
    
        // Build the longest increasing subsequence
        ans.push_back(arr[last_index]);
        while (prev_index[last_index] != last_index) {
            last_index = prev_index[last_index];
            ans.push_back(arr[last_index]);
        }
    
        // The subsequence is built in reverse order, so reverse it before returning
        reverse(ans.begin(), ans.end());
        return ans;
    }*/
//Function to find length of longest increasing subsequence Using binary search in O(N*logN).
    /*int longestSubsequence(int n, int a[])
    {
       vector<int> temp;
       int len = 1;
       temp.push_back(a[0]);
       for(int i=1;i<n;i++){
           if(a[i] > temp.back()){
               temp.push_back(a[i]);
               len++;
           }
           else{
               int ind = lower_bound(temp.begin(),temp.end(),a[i]) - temp.begin();
               temp[ind] = a[i];
           }
       }
       return len;
    }*/	
//Longest divisible subset 
/*vector<int> LargestSubset(int n, vector<int>& nums) {
        if (nums.empty()) return {};

        sort(nums.begin(), nums.end());
        vector<int> dp(n, 1);
        vector<int> previous(n, -1);
        //vector<int> previous(n);
        int maxIndex = 0;
        int maxSize = 1;
        for (int i = 1; i < n; ++i) {
            //previous[i] = i;
            for (int j = 0; j < i; ++j) {
                if (nums[i] % nums[j] == 0 && dp[i] < dp[j] + 1) {
                    dp[i] = dp[j] + 1;
                    previous[i] = j;
                }
            }
            if (dp[i] > maxSize) {
                maxSize = dp[i];
                maxIndex = i;
            }
        }
        vector<int> largestSubset;
        for (int i = maxIndex; i >= 0; i = previous[i]) {
            largestSubset.push_back(nums[i]);
            if (previous[i] == i) break;
        }
        //largestSubset.push_back(nums[maxIndex]);
        //while(previous[maxIndex] != maxIndex){
          //  maxIndex = previous[maxIndex];
            //largestSubset.push_back(nums[maxIndex]);
        //}
        //reverse(largestSubset.begin(), largestSubset.end());
        return largestSubset;
    }*/	
//Longest string chain question
 /*bool cmp(string &s,string &t){
        return s.size() < t.size();
    }
class Solution {
  public:
    bool check(string &s,string &t){
        if (s.size() != t.size() + 1) return false;
        int first = 0;
        int second = 0;
        while(first < s.size()){
            if(s[first] == t[second]){
                first++;
                second++;
            }
            else{
                first++;
            }
        }
        if(first == s.size() && second == t.size()){
            return true;
        }
        return false;
    }
    //static bool cmp(string &s,string &t){
      //  return s.size() < t.size();
    //}
    int longestChain(int n, vector<string>& words) {
        sort(words.begin(), words.end(), cmp);
        vector<int> ans(n,1);
        int maxi = 1;
        for(int i=0;i<n;i++){
            for(int pre = 0;pre<i;pre++){
                if(check(words[i],words[pre]) && 1 + ans[pre] > ans[i]){
                    ans[i] = ans[pre] + 1;
                }
            }
            if(ans[i] > maxi){
                maxi = ans[i];
            }
        }
        return maxi;
    }*/
//Number of Longest Increasing Subsequence
/*int NumberofLIS(int n, vector<int>&arr) {
        vector<int> ans(n,1) , cnt(n,1);
        int maxi = 1;
        for(int i=0;i<n;i++){
            for(int pre=0;pre<i;pre++){
                if(arr[i] > arr[pre] && 1 + ans[pre] > ans[i]){
                    ans[i] = 1 + ans[pre];
                    cnt[i] = cnt[pre];
                }
                else if(arr[i] > arr[pre] && 1 + ans[pre] == ans[i]){
                    cnt[i] += cnt[pre];
                }
            }
            if(ans[i] > maxi){
                maxi = ans[i];
            }
        }
        int count = 0;
        for(int i=0;i<n;i++){
            if(ans[i] == maxi) count += cnt[i];
        }
        return count;
    }*/
//Longest Bitonic susewuence in it		
/* int LongestBitonicSequence(int n, vector<int> &nums) {
        vector<int> ans1(n,1) , ans2(n,1);
        for(int i=0;i<n;i++){
            for(int pre = 0;pre<i;pre++){
                if(nums[i] > nums[pre] && 1 + ans1[pre] > ans1[i]){
                    ans1[i] = 1 + ans1[pre];
                }
            }
        }
        for(int i=n - 1;i>=0;i--){
            for(int pre = n - 1;pre>i;pre--){
                if(nums[i] > nums[pre] && 1 + ans2[pre] > ans2[i]){
                    ans2[i] = 1 + ans2[pre];
                }
            }
        }
        int maxi = 0;
        for(int i=0;i<n;i++){
            if (ans1[i] > 1 && ans2[i] > 1) {  // Ensure there are increasing and decreasing parts
            maxi = max(maxi, ans1[i] + ans2[i] - 1);
           }
        }
        return maxi;
    }*/	
//Matrix chain maultiplication using memo
/*int f(int i, int j ,vector<vector<int>> &dp,int arr[]){
        if(i == j) return 0;
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        int mini = 1e9;
        for(int k = i;k<j;k++){
            int step = arr[i - 1]*arr[k]*arr[j] + f(i,k,dp,arr) + f(k + 1,j,dp,arr);
            if(step < mini) mini = step;
        }
        return dp[i][j] = mini;
    }
    int matrixMultiplication(int N, int arr[])
    {
        vector<vector<int>> dp(N,vector<int>(N,-1));
        return f(1,N - 1,dp,arr);
    }*/
//Using tabu
/*int matrixMultiplication(int N, int arr[])
    {
        vector<vector<int>> dp(N,vector<int>(N,0));
        for(int i=N - 1;i>=1;i--){
            for(int j=i + 1;j<N;j++){
                int mini = 1e9;
                for(int k=i;k<j;k++){
                    int step = arr[i - 1]*arr[k]*arr[j] + dp[i][k] + dp[k + 1][j];
                    if(step < mini) mini = step;
                }
                dp[i][j] = mini;
            }
        }
        return dp[1][N - 1];
    }*/	
//Minimum cost to cut rod
/*int f(int i ,int j,vector<int> &cuts,vector<vector<int>> &dp){
        if(i > j) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        int mini = 1e9;
        for(int ind = i;ind<=j;ind++){
            int cost  = cuts[j + 1] - cuts[i - 1] + f(i,ind - 1,cuts,dp) + f(ind + 1,j,cuts,dp);
            mini = min(mini,cost); 
        }
        return dp[i][j] = mini;
    }
    int minCost(int n, vector<int>& cuts) {
        int c = cuts.size();
        cuts.push_back(n);
        cuts.insert(cuts.begin(),0);
        sort(cuts.begin(),cuts.end());
        vector<vector<int>> dp(c + 1,vector<int>(c + 1,-1));
        return f(1,c,cuts,dp);
    }*/	
//Burst Ballon
/*int f(int i,int j,vector<int> &nums,vector<vector<int>> &dp){
        if(i > j) return 0;
        if(dp[i][j] != -1)  return dp[i][j];
        int maxi = -1e9;
        for(int ind=i;ind<=j;ind++){
              int cost = nums[i - 1]*nums[ind]*nums[j + 1] + f(i,ind - 1,nums,dp) + f(ind + 1,j,nums,dp);
              maxi = max(maxi,cost);
        }
        return dp[i][j] = maxi;
    }
    int maxCoins(vector<int>& nums) {
        int n = nums.size();
        nums.push_back(1);
        nums.insert(nums.begin(),1);
        vector<vector<int>> dp(n + 1,vector<int>(n + 1,-1));
        return f(1,n,nums,dp);
    }*/
//Boolean True;
 /*int f(int i,int j,int TorF,string s,vector<vector<vector<int>>> &dp){
        if(i > j) return 0;
        if(i == j){
            if(TorF){
                return s[i] == 'T';
            }
            else{
                return s[i] == 'F';
            }
        }
        if(dp[i][j][TorF] != -1){
            return dp[i][j][TorF];
        }
        int ways = 0;
        for(int ind = i + 1;ind<=j - 1;ind += 2){
            int LT = f(i,ind - 1,1,s,dp);
            int LF = f(i,ind - 1,0,s,dp);
            int RT = f(ind + 1,j,1,s,dp);
            int RF = f(ind + 1,j,0,s,dp);
            if(s[ind] == '&'){
                if(TorF){
                    ways += LT*RT;
                }
                else ways += (LT*RF) + (LF*RT) + (LF*RF);
            }
            else if(s[ind] == '|'){
                if(TorF){
                    ways += (LT*RT) + (LT*RF) + (LF*RT);
                }
                else{
                    ways += (LF*RF);
                }
            }
            else{
                if(TorF){
                    ways += (LT*RF) + (LF*RT);
                }
                else ways += (LT*RT) + (LF*RF);
            }
        }
        return dp[i][j][TorF] = (ways)%mod;
    }
    int countWays(int n, string s){
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(n,vector<int>(2,-1)));
        return f(0,n - 1,1,s,dp);
    }*/
//Palindromic Partition 2 Using memo
/*bool isPalindrome(int i,int j,string s){
        while(i<j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    int f(int i,int n,string &str,vector<int> &dp){
        if(i == n) return 0;
        if(dp[i] != -1) return dp[i];
        int mini = 1e9;
        for(int ind = i;ind<n;ind++){
            if(isPalindrome(i,ind,str)){
                int cost = 1 + f(ind + 1,n,str,dp);
                mini = min(mini,cost);
            }
        }
        return dp[i]= mini;
    }
    int minCut(string str) {
        int n = str.size();
        vector<int> dp(n,-1);
        return f(0,n,str,dp) - 1;
    }*/
//Palindromic particion 1 in it
/*bool isPalindrome(int i, int j, string &s) {
        while (i < j) {
            if (s[i] != s[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    void dfs(vector<vector<string>> &ans, vector<string> &current, int start, int n, string &s) {
        if (start == n) {
            ans.push_back(current);
            return;
        }
        for (int end = start; end < n; end++) {
            if (isPalindrome(start, end, s)) {
                current.push_back(s.substr(start, end - start + 1));
                dfs(ans, current, end + 1, n, s);
                current.pop_back(); // Backtrack
            }
        }
    }

    vector<vector<string>> partition(string s) {
        int n = s.size();
        vector<vector<string>> ans;
        vector<string> current;
        dfs(ans, current, 0, n, s);
        return ans;
    }*/	
//Partition Array for Maximum Sum
/*int f(vector<int>& arr, int i, int n, vector<int>& dp, int k) {
        if (i == n) return 0;
        if (dp[i] != -1) return dp[i];
        int maxi = -1e9;
        int len = 0;
        int maxii = -1e9; // Declare maxii here
        for (int j = i; j < min(n, i + k); j++) {
            len++;
            maxii = max(maxii, arr[j]);
            int ans = len * maxii + f(arr, j + 1, n, dp, k);
            maxi = max(maxi, ans);
        }
        return dp[i] = maxi; 
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> dp(n,-1);
        return f(arr,0,n,dp,k);
    }*/
//Count Square Submatrices with All Ones
/*int countSquares(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> dp(n,vector<int>(m,0));
        for(int i=0;i<m;i++){
            if(matrix[0][i] == 1){
                dp[0][i] = 1;
            }
        }
        for(int i=0;i<n;i++){
            if(matrix[i][0] == 1){
                dp[i][0] = 1;
            }
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[i][j] == 1){
                    dp[i][j] = 1 + min(dp[i][j - 1],min(dp[i - 1][j - 1],dp[i - 1][j]));
                }
            }
        }
        int total = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                total += dp[i][j];
            }
        }
        return total;

    }*/																													 				
