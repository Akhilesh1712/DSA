#include<iostream>
using namespace std;
int main()
{
	cout<<"hello";
	return 0;
}
//Reverse String
 /*void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size() - 1;
        while(i < j)
        {
            swap(s[i],s[j]);
            i++;
            j--;
        }
    }*/
//Valid Palindrome(A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
//Given a string s, return true if it is a palindrome, or false otherwise.) Means Sentence Palindrome (Palindrome after removing spaces, dots, .. etc)
 /*bool isPalindrome(string S) {
       // Remove unwanted characters and convert to lowercase
    string filtered;
    for (char c : S) {
        if (isalnum(c)) {
            filtered += tolower(c);
        }
    }

    // Check if the filtered string is a palindrome
    int n = filtered.size();
    for (int i = 0; i < n / 2; ++i) {
        if (filtered[i] != filtered[n - i - 1]) {
            return false;
        }
    }

    return true;
    }*/
//Valid Palindrome II(Given a string s, return true if the s can be palindrome after deleting at most one character from it.)
/*bool ispalindrome(string s,int i,int j)
    {
        while(i<j)
        {
            if(s[i] != s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0 , j = s.size() - 1;
        while(i<j)
        {
            if(s[i] != s[j])
            {
                return ispalindrome(s,i + 1,j) || ispalindrome(s,i,j - 1);
            }
            i++;
            j--;
        }
        return true;
    }*/	
//Function to check if a string can be obtained by rotating
    //another string by exactly 2 places. In any direction
    /*bool isRotated(string s1, string s2)
    {
        int n = s1.size();
    
    // If lengths of s1 and s2 are not the same, they cannot be rotations of each other
    if (n != s2.size()) {
        return false;
    }
    
    // Handle cases where string size is 1 or 2
    if (n == 1 || n == 2) {
        return s1 == s2;
    }
    
    // Generate the strings rotated by 2 places
    string s3 = s1.substr(2) + s1.substr(0, 2);  // left rotation
    string s4 = s1.substr(n - 2) + s1.substr(0, n - 2);  // right rotation
    
    // Check if either rotation matches s2
    return (s3 == s2 || s4 == s2);
    }*/
//Shuffle String(You are given a string s and an integer array indices of the same length. The string s will be shuffled such that the character at the ith position moves to indices[i] in the shuffled string.
//Return the shuffled string.)
/*string restoreString(string s, vector<int>& indices) {
       string s1(s.size(),' ');
       for(int i=0;i<s.size();i++)
       {
            s1[indices[i]] = s[i];
       }
       return s1;
    }*/
//Count and Say
/*string countAndSay(int n) {
        if( n == 1) return "1";
        if(n == 2) return "11";
        string s = "11";
        for(int i=3;i<=n;i++)
        {
            string t = "";
            s = s + "&";
            int c = 1;
            for(int j=1;j<s.length();j++)
            {
                if(s[j] != s[j - 1])
                {
                    t = t + to_string(c);
                    t = t + s[j - 1];
                    c = 1;
                }
                else{
                    c++;
                }
            }
            s = t; 
        }
        return s;
    }*/
//Given a string S. The task is to find all permutations (need not be different) of a given string.
/*void recur(int ind ,string s,vector<string> &ans)
	{
	        if(ind == s.length())
	        {
	            string ans1;
	            for(int i=0;i<s.length();i++)
	            {
	                ans1.push_back(s[i]);
	            }
	            ans.push_back(ans1);
	            return ;
	        }
	        for(int i = ind;i<s.length();i++)
	        {
	            swap(s[i],s[ind]);
	            recur(ind + 1,s,ans);
	            swap(s[i],s[ind]);
	        }
	}
    vector<string> permutation(string S)
    {
        vector<string> ans;
		recur(0,S,ans);
		sort(ans.begin(),ans.end());//lexographically order
		return ans;
    }*/
//Given a string S. The task is to print all unique permutations of the given string that may contain dulplicates in lexicographically sorted order. 
/*void recur(int ind, string s, vector<string> &ans, unordered_set<string> &seen) {
            if (ind == s.length()) {
                if (seen.find(s) == seen.end()) {
                    ans.push_back(s);
                    seen.insert(s);
                }
                return;
            }
            for (int i = ind; i < s.length(); i++) {
                swap(s[i], s[ind]);
                recur(ind + 1, s, ans, seen);
                swap(s[i], s[ind]); // backtrack
            }
        }

        vector<string> find_permutation(string S) {
            vector<string> ans;
            unordered_set<string> seen;
            recur(0, S, ans, seen);
            sort(ans.begin(), ans.end());
            return ans;
        }*/
//Split the binary string into substrings with equal number of 0s and 1s(gfg walla simple ye to)
/*int maxSubStr(string str){
        int ans = 0;
        int sum =0;
        int n = str.size();
        for(int i=0;i<n;i++){
            if(str[i] == '0'){
                sum -= 1;
            }
            else{
                sum += 1;
            }
            if(sum == 0)
            {
                ans++;
            }
        }
        if(sum != 0){
            return -1;
        }
        return ans;
    }*/
// Count Binary Substrings(ye leetcode)
/*int countBinarySubstrings(string str) {
         int prev = 0 , curr = 1 , sum = 0;
         for(int i=1;i<str.size();i++)
         {
            if(str[i] == str[i - 1])
            {
                curr++;
            }
            else{
                sum += min(curr,prev);
                prev = curr;
                curr = 1;
            }
         }
         sum += min(curr,prev);//for last
         return sum;

    }*/
//Search Pattern (Rabin-Karp Algorithm)
/*vector <int> search(string pattern, string text)
{
            int q = 101;//should choose the odd;
            int d = 26;
            int m = pattern.size();
            int n = text.size();//in which we have to search
            int p = 0; // hash value for pattern
            int t = 0; // hash value for text
            int h = 1; // the value of d^(m-1) % q
            int i,j;
            vector<int> ans;
            for(int i=0;i<m - 1;i++)
            {
                h = (h*d)%q;
            }
            for(int i=0;i<m;i++)
            {
                p = (d*p + pattern[i])%q;
                t = (d*t + text[i])%q;
            }
            for(int i=0;i<=n - m;i++)
            {
                if(p == t)
                {
                    for(j=0;j<m;j++)
                    {
                        if(text[i + j] != pattern[j])
                        {
                            break;
                        }
                        
                    }
                    if(j == m)
                    {
                            ans.push_back(i + 1); //1 based index se ans dena islye + 1;
                    }
                }
                if(i < n - m)//next window
                {
                    t = (d*(t - text[i]*h) + text[i + m])%q;
                    if(t<0){//if negative
                       t += q;
                    }       
                }
            }
            return ans;	
}*/
//Search pattern using KMP
/*void lpas(vector<int> &lps,string s) {
    	    int pre = 0 , suf = 1;
    	    while(suf < s.size()){
    	        if(s[pre] == s[suf]){
    	            lps[suf] = pre + 1;
    	            pre++ , suf++;
    	        }
    	        else{
    	            if(pre == 0){
    	                lps[suf] = 0;
    	                suf++;
    	            }
    	            else{
    	                pre = lps[pre - 1];
    	            }
    	        }
    	    }
    	    
	    }
        vector <int> search(string pat, string txt)
        {
            vector<int> lps(pat.size(),0);
            vector<int> ans;
            lpas(lps,pat);
            int first = 0 , second = 0;
            while(first < txt.size()){
                if(pat[second] == txt[first]){
                    second++ , first++;
                }
                else{
                    if(second == 0){
                        first++;
                    }
                    else{
                        second = lps[second - 1];
                    }
                }
                if(second == pat.size()){
                    ans.push_back(first - second);
                    second = lps[second - 1];
                }
            }
            if(ans.empty()){
                ans.push_back(-1);
            }
            return ans;
        }*/
//Longest Prefix Suffix
/*int lps(string s) {
	    int pre = 0 , suf = 1;
	    vector<int> lpas(s.size(),0);
	    while(suf < s.size()){
	        if(s[pre] == s[suf]){
	            lpas[suf] = pre + 1;
	            pre++ , suf++;
	        }
	        else{
	            if(pre == 0){
	                lpas[suf] = 0;
	                suf++;
	            }
	            else{
	                pre = lpas[pre - 1];
	            }
	        }
	    }
	    return lpas[s.size() - 1];
	}*/
//if want to return longest prefix suffix
/*string longestPrefix(string s) {
        int pre = 0 , suf = 1;
	    vector<int> lpas(s.size(),0);
	    while(suf < s.size()){
	        if(s[pre] == s[suf]){
	            lpas[suf] = pre + 1;
	            pre++ , suf++;
	        }
	        else{
	            if(pre == 0){
	                lpas[suf] = 0;
	                suf++;
	            }
	            else{
	                pre = lpas[pre - 1];
	            }
	        }
	    }
        int ans1 = lpas[s.size() - 1];
	    return s.substr(0, ans1);
	
    }*/
//Convert a sentence into its equivalent mobile numeric keypad sequence
/*string printSequence(string S)
{
    string str[]
        = { "2",   "22",  "222", "3",   "33",   "333", "4",
            "44",  "444", "5",   "55",  "555",  "6",   "66",
            "666", "7",   "77",  "777", "7777", "8",   "88",
            "888", "9",   "99",  "999", "9999" };
    string ans;        
    for(int i=0;i<S.size();i++)
    {
        if(S[i] == ' ')
        {
            ans += '0';
        }
        else{
            int dex = S[i] - 'A';
            ans += str[dex];
        }
    }
    return ans;
}*/
// Letter Combinations of a Phone Number(eg Input: digits = "23"
//Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"])(problem of backteaking)
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
//using backtracking
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
//Count the Number of Consistent Strings(Input: allowed = "cad", words = ["cc","acd","b","ba","bac","bad","ac","d"]
//Output: 4
//Explanation: Strings "cc", "acd", "ac", and "d" are consistent.
/*int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> mp;
        for(auto ch: allowed)
        {
            mp.insert(ch);
        }
        int count = 0;
        for(auto word: words){
            bool status = true;
            for(int i=0;i<word.size();i++)
            {
                if(mp.find(word[i]) == mp.end()){
                    status = false;
                }
            }
            if(status == true){
                count++;
            }
        }
        return count;
    }*/    
//word Search 2 (Given an m x n board of characters and a list of strings words, return all words on the board.)
// Note below mwthod gives TLE so , it will be use using TRIE data structure
/*bool solve(vector<vector<char>> &mat,string target,int i ,int j,int curindex){
        //base(boundary)
        if(i < 0 || j < 0 || i >= mat.size() || j >= mat[i].size() || mat[i][j] != target[curindex]){
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
    vector<string> findWords(vector<vector<char>>& mat, vector<string>& words) {
            vector<string> ans;
            for(auto word: words){
                bool wordfound = false;
                for (int i = 0; i < mat.size() && !wordfound; ++i)
                {
                   for (int j = 0; j < mat[0].size() && !wordfound; ++j){
                        if (solve(mat, word, i, j, 0)) {
                             ans.push_back(word);
                             wordfound = true;
                        }
                    }
                }
            }
            return ans;
    }*/		
//Find the string in grid(A word can be matched in all 8 directions at any point. Word is said to be found in a direction if all characters match in this direction (not in zig-zag form).)
/*bool solve(vector<vector<char>> &grid, string &word,int i,int j,int n,int m,int x[],int y[],int s){
        for(int dir=0;dir<8;dir++){
            int i1=i , j1=j , k=0;
            int x1=x[dir] , y1=y[dir];
            while(i1>=0 && i1<n && j1 >= 0 && j1 < m && k<s){
                if(word[k] == grid[i1][j1]){
                    i1 += x1;
                    j1 += y1;
                    k++;
                }
                else{
                    break;
                }
                
            }
            if(k == s) return true;
        }
        return false;
    }
	vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
	    vector<vector<int>> ans;
	    int x[] = {-1,0,1,1,1,0,-1,-1};
	    int y[] = {1,1,1,0,-1,-1,-1,0};
	    int n = grid.size();
	    int m = grid[0].size();
	    int s = word.size();
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            if(solve(grid,word,i,j,n,m,x,y,s)){
	                ans.push_back({i,j});
	            }
	        }
	    }
	    return ans;
	}*/	
//Pattern searching( using STL :) ha ha hah hah hah ha teri to ha ha)
/*bool searchPattern(string str, string pat)
{
    if(str.find(pat) != string::npos){
        return true;
    }
    return false;
}*/
//Roman Number to Integer
/*int value(char a){
            if(a == 'I') return 1;
            else if(a == 'V') return  5;
            else if(a == 'X') return 10;
            else if(a == 'L') return 50;
            else if(a == 'C') return 100;
            else if(a == 'D') return 500;
            else if(a == 'M') return 1000;
    }
    int romanToDecimal(string &str) {
        int n = str.size() , v1 , v2;
        int ans = 0;
        for(int i=0;i<n;i++){
            if(i < n - 1){
                v1 = value(str[i]);
                v2 = value(str[i + 1]);
                if(v1 < v2){
                    ans = ans - v1;
                }
                else{
                    ans = ans + v1;
                }
            }
            else{
                ans = ans + value(str[i]);
            }
        }
        return ans;
    }*/
//integer to roman Number  
/*string convertToRoman(int n) {
        string ans;
        vector<string> ans1 = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        vector<int> ans2 = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        for(int i=0;n>0;i++){
            while(n >= ans2[i]){
                ans += ans1[i];
                n -= ans2[i];
            }
        }
        return ans;
    }*/
//Longest Common Prefix
/*string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int N = strs.size();
        for(int i=0;i<strs[0].size();i++){
            char ch = strs[0][i];
            bool match = true;
            for(int j=1;j<N;j++){
                if(strs[j].size() < i || ch != strs[j][i]){
                    match = false;
                    break;
                }
            }
            if(!match){
                break;
            }
            else{
                ans.push_back(ch);
            }
        }
        return ans;
    }*/
//Minimum Number of Flips to Make the Binary String Alternating
/*int minFlips(string S) {
        int count1 = 0;
        int count2 = 0;
        for(int i=0;i<S.size();i++){
            if(i%2 == 1 && S[i] == '0') count1++;//if odd
            if(i%2 == 0 && S[i] == '1') count1++;
            if(i%2 == 1 && S[i] == '1') count2++;
            if(i%2 == 0 && S[i] == '0') count2++;
        }
        return min(count1,count2);
    }*/
//Minimum Numbers of flips to make the binary leetcode ka
//Second most repeated string in a sequence
/*string secFrequent (string arr[], int n){
        unordered_map<string, int> freqMap;

        // Count frequencies of each string
        for (int i = 0; i < n; i++) {
            freqMap[arr[i]]++;
        }
    
        // Find the most frequent and second most frequent strings
        string mostFreq, secondFreq;
        int maxFreq = 0, secondMaxFreq = 0;
    
        for (auto& pair : freqMap) {
            if (pair.second > maxFreq) {
                secondMaxFreq = maxFreq;
                secondFreq = mostFreq;
                maxFreq = pair.second;
                mostFreq = pair.first;
            } else if (pair.second > secondMaxFreq && pair.second < maxFreq) {
                secondMaxFreq = pair.second;
                secondFreq = pair.first;
            }
        }
    
        return secondFreq;
}*/
//Minimum Number of Flips to Make the Binary String Alternating with rotaion			  
/*int minFlips(string S) {
        
        int n = S.size();
    
        // Extend the string to handle rotations
        S += S;

        string alt1, alt2;
        
        // Generate the alternating patterns of length 2 * n
        for (int i = 0; i < 2 * n; i++) {
            alt1 += (i % 2 == 0) ? '0' : '1';
            alt2 += (i % 2 == 0) ? '1' : '0';
        }

        int res = n; // Initialize result with the length of the original string
        int diff1 = 0, diff2 = 0;

        // Sliding window to calculate minimum flips
        for (int i = 0; i < 2 * n; i++) {
            if (S[i] != alt1[i]) diff1++;
            if (S[i] != alt2[i]) diff2++;
            
            // slide it and if remove last one if inreasing count 
            if (i >= n) {
                if (S[i - n] != alt1[i - n]) diff1--;
                if (S[i - n] != alt2[i - n]) diff2--;
            }
            
            // Update result for size n
            if (i >= n - 1) {
                res = min(res, min(diff1, diff2));
            }
        }
        
        return res;
	}*/
        //0(n^2)
        /*int mini = S.size();
        for(int i=0;i<S.size();i++){
            int count1 = 0;
            int count2 = 0;
            for(int j=0;j<S.size();j++){
                if(j%2 == 1 && S[j] == '0') count1++;//if odd
                if(j%2 == 0 && S[j] == '1') count1++;
                if(j%2 == 1 && S[j] == '1') count2++;
                if(j%2 == 0 && S[j] == '0') count2++;
            }
            mini = min({mini,count1,count2});
            rotate(S.begin(), S.begin() + 1, S.end());
        }
        return mini;
    }*/	
//first Repeated Character(S = "geeksforgeeks"
//Output: g)
/*char firstRep (string s)
    {
       int n = s.size();
       char ch;
       for(int i=0;i<n;i++){
           ch = s[i];
           bool m = true;
           for(int j=i + 1;j<n;j++){
               if(s[i] == s[j]){
                   m = false;
                   break;
               }
           }
           if(m == false){
               return ch;
           }
       }
       return '#';
       
    }*/
//Find first repeated character(Input: S="geeksforgeeks"
//Output: e
//Explanation: 'e' repeats at third position.
/*string firstRepChar(string s) {
    unordered_set<char> seen;
    for (char c : s) {
        if (seen.find(c) != seen.end()) {
            return string(1, c);
        }
        seen.insert(c);
    }
    return "-1";
}*/
//Top K Frequent Words
/*vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mp;
        for (const string& word : words) {
            mp[word]++;
        }

        auto comp = [](const pair<string, int>& a, const pair<string, int>& b) {
            if (a.second == b.second) {
                return a.first > b.first; // If frequencies are the same, sort by lexicographical order (min lexicographical order first)
            }
            return a.second < b.second; // Otherwise, sort by frequency (max frequency first)
        };

        priority_queue<pair<string, int>, vector<pair<string, int>>, decltype(comp)> pq(comp);

        for (const auto& p : mp) {
            pq.push(p);
        }

        vector<string> ans;
        for (int i = 0; i < k; ++i) {
            ans.push_back(pq.top().first);
            pq.pop();
        }

        return ans;
    }*/
//Longest Substring Without Repeating Characters(s consists of English letters, digits, symbols and spaces.)
/*int lengthOfLongestSubstring(string s) {
        vector<bool> count(256,0);
        int i = 0 , j = 0 , len = 0;
        while(j < s.size()){
            while(count[s[j]]){
                count[s[i]] = 0;
                i++;
            }
            count[s[j]] = 1;
            len = max(len, j - i + 1);
            j++;
        }
        return len;
    }*/
//Smallest distinct window
/*int findSubString(string str)
    {
        vector<int> count(256,0);
        int i = 0 , j = 0 , diff = 0 , len = str.size();
        //calculate diff(different element in it)
        while(j < str.size()){
            if(count[str[j]] == 0) diff++;
            count[str[j]]++;
            j++;
        }
        for(int i=0;i<256;i++){
            count[i] = 0;
        }
        j = 0;
        while(j<str.size()){
            //diff exist
            while(diff && j < str.size()){
                if(count[str[j]] == 0) diff--;
                count[str[j]]++;
                j++;
            }
            len = min(len,j - i);
            //diff 1 nhi bana chiye
            while(diff != 1){
                len = min(len,j - i);
                count[str[i]]--;
                if(count[str[i]] == 0) diff++;
                i++;
            }
        }
        return len;
    }	*/
//have to return that min string in lexographical order
 /*string smallestSubsequence(string s) {
        vector<int> last_occurrence(256, -1);
        vector<bool> visited(256, false);
        
        for (int i = 0; i < s.size(); ++i) {
            last_occurrence[s[i]] = i;
        }
        
        stack<char> st;
        for (int i = 0; i < s.size(); ++i) {
            char c = s[i];
            
            if (visited[c]) continue;
            
            while (!st.empty() && st.top() > c && i < last_occurrence[st.top()]) {
                visited[st.top()] = false;
                st.pop();
            }
            
            st.push(c);
            visited[c] = true;
        }
        
        string result = "";
        while (!st.empty()) {
            result = st.top() + result;
            st.pop();
        }
        
        return result;
    }*/	    
//Rearrange characters(Given a string S with repeated characters.The task is to rearrange characters in a string such that no two adjacent characters are the same)	
/*string rearrangeString(string str) {
        unordered_map<char, int> mp;
        int n = str.size();
        for (int i = 0; i < n; i++) {
            mp[str[i]]++;
        }
    
        priority_queue<pair<int, char>> pq;
        for (auto& it : mp) {
            if (it.second > (n + 1) / 2) return "-1";
            pq.push(make_pair(it.second, it.first));
        }
    
        string ans = "";
        while (pq.size() >= 2) {
            pair<int, char> a = pq.top();
            pq.pop();
            pair<int, char> b = pq.top();
            pq.pop();
            ans += a.second;
            ans += b.second;
            if (a.first - 1 > 0) {
                pq.push(make_pair(a.first - 1, a.second));
            }
            if (b.first - 1 > 0) {
                pq.push(make_pair(b.first - 1, b.second));
            }
        }
    
        if (!pq.empty()) {
            ans += pq.top().second;
            pq.pop();
        }
    
        return ans;
    }*/
//Minimum characters to be added at front to make string palindrome
/*void makelps(vector<int> &lps,string g){
        int pre = 0 , suff = 1;
        while(suff < g.size()){
            if(g[pre] == g[suff]){
                lps[suff] = pre + 1;
                pre++ , suff++;
            }
            else{
                if(pre == 0){
                    lps[suff] = 0;
                    suff++;
                }
                else{
                    pre = lps[pre - 1];
                }
            }
        }
    }
    int minChar(string str){
        int n1 = str.size();
        string m = str;
        reverse(m.begin(),m.end());
        string g = str+'$';
        g += m;
        int n = g.size();
        vector<int> lps(n,0);
        makelps(lps,g);
        return n1 - lps[n - 1]; 
    }*/	
//if want to return that string 
 /*void makelps(vector<int> &lps,string g){
        int pre = 0 , suff = 1;
        while(suff < g.size()){
            if(g[pre] == g[suff]){
                lps[suff] = pre + 1;
                pre++ , suff++;
            }
            else{
                if(pre == 0){
                    lps[suff] = 0;
                    suff++;
                }
                else{
                    pre = lps[pre - 1];
                }
            }
        }
    }
    string shortestPalindrome(string str) {
            string m = str;
            reverse(m.begin(),m.end());
            string g = str+'$';
            g += m;
            int n = g.size();
            vector<int> lps(n,0);
            makelps(lps,g);
            int palinLen = lps[n - 1];
            string toAdd = str.substr(palinLen);
            reverse(toAdd.begin(), toAdd.end());
            string ans = toAdd + str;
            return ans; 
    }*/	
//Print Anagrams Together
/*vector<vector<string> > Anagrams(vector<string>& s) {
        map<string,vector<string>> mp;
        for(int i=0;i<s.size();i++){
            string s1 = s[i];
            sort(s1.begin(),s1.end());
            mp[s1].push_back(s[i]);
        }
        vector<vector<string>> ans;
        for(auto i : mp){
            ans.push_back(i.second);
        }
        return ans;
    }*/	
//Smallest window in a string containing all the characters of another string
/*string smallestWindow(string s, string p) {
        if (p.empty() || p.size() > s.size()) return "-1";
        if (p == s) return s;
    
        unordered_map<char, int> p1;
        unordered_map<char, int> s1;
    
        for (char c : p) {
            p1[c]++;
        }
    
        int i = 0, j = 0, currLen = 0, requiredLen = p.size(), minLen = INT_MAX;
        string result = "";
    
        while (j < s.size()) {
            char ch = s[j];
            s1[ch]++;
    
            if (p1.find(ch) != p1.end() && s1[ch] <= p1[ch]) {
                currLen++;
            }
    
            while (currLen == requiredLen) {
                if ((j - i + 1) < minLen) {
                    minLen = j - i + 1;
                    result = s.substr(i, minLen);
                }
    
                char t = s[i];
                s1[t]--;
                if (p1.find(t) != p1.end() && s1[t] < p1[t]) {
                    currLen--;
                }
                i++;
            }
            j++;
        }
    
        return minLen != INT_MAX ? result : "-1";
    }*/	
//Function to find Number of customers who could not get a computer
/*int runCustomerSimulation(int n, const char *seq) 
{ 
    // seen[i] = 0, indicates that customer 'i' is not in cafe 
    // seen[1] = 1, indicates that customer 'i' is in cafe but 
    //             computer is not assigned yet. 
    // seen[2] = 2, indicates that customer 'i' is in cafe and 
    //             has occupied a computer. 
    char seen[MAX_CHAR] = {0}; 
 
    // Initialize result which is number of customers who could 
    // not get any computer. 
    int res = 0; 
 
    int occupied = 0; // To keep track of occupied computers 
 
    // Traverse the input sequence 
    for (int i=0; seq[i]; i++) 
    { 
        // Find index of current character in seen[0...25] 
        int ind = seq[i] - 'A'; 
 
        // If First occurrence of 'seq[i]' 
        if (seen[ind] == 0) 
        { 
            // set the current character as seen 
            seen[ind] = 1; 
 
            // If number of occupied computers is less than 
            // n, then assign a computer to new customer 
            if (occupied < n) 
            { 
                occupied++; 
 
                // Set the current character as occupying a computer 
                seen[ind] = 2; 
            } 
 
            // Else this customer cannot get a computer, 
            // increment result 
            else
                res++; 
        } 
 
        // If this is second occurrence of 'seq[i]' 
        else
        { 
        // Decrement occupied only if this customer 
        // was using a computer 
        if (seen[ind] == 2) 
            occupied--; 
        seen[ind] = 0; 
        } 
    } 
    return res; 
} */
 //Grumpy Bookstore Owner
 /*int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int sum = 0;
        int n = grumpy.size();

        // Calculate initially satisfied customers (when not grumpy)
        for (int i = 0; i < n; i++) {
            if (grumpy[i] == 0) {
                sum += customers[i];
                customers[i] = 0; // Set to zero because they are already counted
            }
        }

        // Calculate the maximum additional satisfied customers within a window of 'minutes'
        int sum2 = 0;
        for (int i = 0; i < minutes; i++) {
            sum2 += customers[i];
        }

        int maxi = sum2;

        for (int i = minutes; i < n; i++) {
            sum2 += customers[i];
            sum2 -= customers[i - minutes];
            maxi = max(maxi, sum2);
        }

        return sum + maxi;
    }*/
//Transform String
/*int transform (string A, string B)
    {
        if(A.size() != B.size()) return -1;
        unordered_map<char,int> mp;
        for(auto i:A){
            mp[i]++;
        }
        for(auto j:B){
            mp[j]--;
        }
        for (auto k : mp) {
            if (k.second != 0) {
                return -1;
            }
        }
        int c = 0;
        int i = A.size() - 1  ,  j = B.size() - 1;
        while(i>=0&&j>=0){
            while(i>=0&& A[i] != B[j]){
                i--;
                c++;
            }
            i--;
            j--;
        }
        return c;
    }*/
//Isomorphic Strings
 /*bool areIsomorphic(string str1, string str2)
    {
        if (str1.size() != str2.size()) {
        return false;
        }
    
        unordered_map<char, char> mapping1;
        unordered_map<char, char> mapping2;
    
        for (int i = 0; i < str1.size(); ++i) {
            char char1 = str1[i];
            char char2 = str2[i];
    
            // Check if there is an existing mapping from char1 to char2
            if (mapping1.find(char1) != mapping1.end()) {
                if (mapping1[char1] != char2) {
                    return false;
                }
            } else {
                mapping1[char1] = char2;
            }
             // Check if there is an existing mapping from char2 to char1
            if (mapping2.find(char2) != mapping2.end()) {
                if (mapping2[char2] != char1) {
                    return false;
                }
            } else {
                mapping2[char2] = char1;
            }
        }    
        return true;
    }*/    
//Recursively print all sentences that can be formed from list of word lists
/*void printAll(vector<vector<string>> &ans, int m, int n, vector<vector<string>> &list, vector<string> &currentSentence) {
        currentSentence.push_back(list[m][n]);
        
        if (m == list.size() - 1) {
            ans.push_back(currentSentence);
        } else {
            for (int i = 0; i < list[0].size(); ++i) {
                if (!list[m + 1][i].empty()) {
                    printAll(ans, m + 1, i, list, currentSentence);
                }
            }
        }
        
        currentSentence.pop_back();
    }

    vector<vector<string>> sentences(vector<vector<string>>& list) {
        vector<vector<string>> ans;
        if (list.empty()) return ans;
        
        int n = list[0].size();
        vector<string> currentSentence;
        
        for (int i = 0; i < n; ++i) {
            if (!list[0][i].empty()) {
                printAll(ans, 0, i, list, currentSentence);
            }
        }
        
        return ans;
    }*/								    
