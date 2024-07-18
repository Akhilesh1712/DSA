#include <iostream>
using namespace std;
int main()
{
	cout<<"hello";
	return 0;
}
//n queeen problem using reccursion
/*bool issafe(int **arr, int x, int y, int n) {
    for (int row = 0; row < x; row++) {
        if (arr[row][y] == 1) {
            return false;
        }
    }
    int row = x;
    int col = y;
    while (row >= 0 && col >= 0) {
        if (arr[row][col] == 1) {
            return false;
        }
        row--;
        col--;
    }
    row = x;
    col = y;
    while (row >= 0 && col < n) {
        if (arr[row][col] == 1) {
            return false;
        }
        row--;
        col++;
    }
    return true;
}

bool queen(int **arr, int x, int n) {
    if (x >= n) {
        return true;
    }
    for (int col = 0; col < n; col++) {
        if (issafe(arr, x, col, n)) {
            arr[x][col] = 1;
            if (queen(arr, x + 1, n)) {
                return true;
            }
            arr[x][col] = 0;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++) {
            arr[i][j] = 0;
        }
    }
    if (queen(arr, 0, n)) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}*/
//ret in the maze problem
/*bool issafe(int ** arr,int x,int y,int n)
{
	if(x<n&&y<n&&arr[x][y]==1)
	{
		return true;
	}
	return false;
}
bool ratinmaze(int ** arr,int x,int y,int n,int ** sol)
{
	if(x==n-1&&y==n-1)
	{
		sol[x][y]=1;
		return true;
	}
	if(issafe(arr,x,y,n))
	{
		sol[x][y]=1;
		if(ratinmaze(arr,x+1,y,n,sol))
		{
			return true;
		}
		if(ratinmaze(arr,x,y+1,n,sol))
		{
			return true;
		}
		sol[x][y]=0;
		return false;
	}
	return false;
	
}
int main() {
    int n;
    cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++) 
	{
        arr[i] = new int[n];
    }
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		cin>>arr[i][j];
		}
	}
	int **sol = new int *[n];
    for (int i = 0; i < n; i++) {
        sol[i] = new int[n];
        for (int j = 0; j < n; j++) {
            sol[i][j] = 0;
        }
    }
    if (ratinmaze(arr, 0,0, n,sol)) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << sol[i][j]<<" ";
            }
            cout << endl;
        }
    }
    return 0;
}*/
//soduku
/*#include <bits/stdc++.h>
using namespace std;
#define UNASSIGNED 0
#define N 9
bool FindUnassignedLocation(int grid[N][N],
							int& row, int& col)
{
	for (row = 0; row < N; row++)
		for (col = 0; col < N; col++)
			if (grid[row][col] == UNASSIGNED)
				return true;
	return false;
}
bool UsedInRow(int grid[N][N], int row, int num)
{
	for (int col = 0; col < N; col++)
		if (grid[row][col] == num)
			return true;
	return false;
}
bool UsedInCol(int grid[N][N], int col, int num)
{
	for (int row = 0; row < N; row++)
		  if(grid[row][col] == num) 
			return true;
	return false;
}
bool UsedInBox(int grid[N][N], int boxStartRow,
			int boxStartCol, int num)
{
	for (int row = 0; row < 3; row++)
		for (int col = 0; col < 3; col++)
			if (grid[row + boxStartRow]
					[col + boxStartCol] ==
									num)
				return true;
	return false;
}
bool isSafe(int grid[N][N], int row,
			int col, int num)
{
	return !UsedInRow(grid, row, num)
		&& !UsedInCol(grid, col, num)
		&& !UsedInBox(grid, row - row % 3,
						col - col % 3, num)
		&& grid[row][col] == UNASSIGNED;
}
bool SolveSudoku(int grid[N][N])
{
	int row, col;

	// If there is no unassigned location,
	// we are done
	if (!FindUnassignedLocation(grid, row, col))
	{	// success!
		return true;
    }
	// Consider digits 1 to 9
	for (int num = 1; num <= 9; num++)
	{
		
		// Check if looks promising
		if (isSafe(grid, row, col, num))
		{
			
			// Make tentative assignment
			grid[row][col] = num;

			// Return, if success
			if (SolveSudoku(grid))
				return true;

			// Failure, unmake & try again
			grid[row][col] = UNASSIGNED;
		}
	}
	
	// This triggers backtracking
	return false;
}
int main()
{
	
	int grid[N][N] = { { 3, 0, 6, 5, 0, 8, 4, 0, 0 },
					{ 5, 2, 0, 0, 0, 0, 0, 0, 0 },
					{ 0, 8, 7, 0, 0, 0, 0, 3, 1 },
					{ 0, 0, 3, 0, 1, 0, 0, 8, 0 },
					{ 9, 0, 0, 8, 6, 3, 0, 0, 5 },
					{ 0, 5, 0, 0, 9, 0, 6, 0, 0 },
					{ 1, 3, 0, 0, 0, 0, 2, 5, 0 },
					{ 0, 0, 0, 0, 0, 0, 0, 7, 4 },
					{ 0, 0, 5, 2, 0, 6, 3, 0, 0 } };
	if (SolveSudoku(grid) == true)
    {
    	for (int row = 0; row < N; row++)
    	{
    		for (int col = 0; col < N; col++)
    		{
    		    cout << grid[row][col] << " ";
			}
			cout<<endl;
			    
		}
    }
	
	
	else
	{
	    cout << "No solution exists";
    }
	return 0;
}*/
// Letter Combinations of a Phone Number(eg Input: digits = "23"
//Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"])
/*void solve(int idex,string digits,string &temp,unordered_map<char,string> &mp,vector<string> &ans){
        if(idex >= digits.length()){
            ans.push_back(temp);
            return;
        }
        char ch = digits[idex];
        string str = mp[ch];
        for(int i=0;i<str.length();i++)
        {
            temp.push_back(str[i]);
            solve(idex + 1,digits,temp,mp,ans);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size() == 0)
        {
            return {};
        }
        vector<string> ans;
        string temp = "";
        unordered_map<char,string> mp;
        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";
        solve(0,digits,temp,mp,ans);
        return ans;
    }*/	
//Count occurrences of a given word in a 2-d array
/*int solve(vector<vector<char>> &mat,string target,int i ,int j,int curindex){
        //base(boundary)
        if(i < 0 || j < 0 || i >= mat.size() || j >= mat[i].size()){
            return 0;
        }
        char curchar = mat[i][j];
        if(target[curindex] != curchar) return 0;
        if(curindex == target.size() - 1) return 1;
        mat[i][j] = '\0'; // so do not recheck it
        int count = 0;
        //up
        count += solve(mat,target,i + 1,j,curindex + 1);
        //down
        count += solve(mat,target,i - 1,j,curindex + 1);
        //left
        count += solve(mat,target,i,j - 1,curindex + 1);
        //right
        count += solve(mat,target,i,j + 1,curindex + 1);
        mat[i][j] = curchar;//while going back refill correct
        return count;
    }
    int findOccurrence(vector<vector<char> > &mat, string target){
        int count = 0;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[i].size();j++){
                count += solve(mat,target,i,j,0);
            }
        }
        return count;
    }*/
//ye q word search ke name se bhi hai me bas patta lagna hai ya nhi
/*bool solve(vector<vector<char>> &mat,string target,int i ,int j,int curindex){
        //base(boundary)
        if(i < 0 || j < 0 || i >= mat.size() || j >= mat[i].size()){
            return 0;
        }
        char curchar = mat[i][j];
        if(target[curindex] != curchar) return 0;
        if(curindex == target.size() - 1) return 1;
        mat[i][j] = '\0'; // so do not recheck it
         // Explore all four possible directions
        bool found = solve(mat, target, i + 1, j, curindex + 1) ||
                    solve(mat, target, i - 1, j, curindex + 1) ||
                    solve(mat, target, i, j + 1, curindex + 1) ||
                    solve(mat, target, i, j - 1, curindex + 1);

        // Reset the cell to its original value
        mat[i][j] = curchar;

        return found;
    }
    bool exist(vector<vector<char>>& mat, string target) {
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[i].size();j++){
                if (solve(mat, target, i, j, 0)) {
                return true;
            }
        }
    }
    return false;
    }*/
//Palindromic partition 1 in it
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
    vector<vector<string>> allPalindromicPerms(string s) {
        int n = s.size();
        vector<vector<string>> ans;
        vector<string> current;
        dfs(ans, current, 0, n, s);
        return ans;
    }*/


