
#include<iostream>
using namespace std;
int main()
{
	cout<<"hello";
	return 0;
}

/*void reverse(vector<int> &arr,int n)
{
	int i =0;
	int j= n - 1;
	while(i<j)
	{
		swap(arr[i],arr[j]);
		i++;
		j--;
	}
	
}*/
//min and max  element in an array
/*pair<long long, long long> getMinMax(long long a[], int n) {
        long long mn = 1e18, mx = -1;
        
        // Iterating over the array
        for (int i = 0; i < n; i++) {
            
            // Updating the minimum value
            mn = min(a[i], mn);
            
            // Updating the maximum value
            mx = max(a[i], mx);
        }
        
        // Returning the minimum and maximum values as a pair
        return {mn, mx};
    }*/
    
 //k smallest element i array
 
 /*int kthSmallest(int arr[], int l, int r, int k) {
        
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
//kth largest
/*int findKthLargest(vector<int>& nums, int k) {
        priority_queue <int, vector<int>, greater<int>> pq;
        for(auto x : nums)
        {
            pq.push(x);
            if(pq.size() > k)
            {
                pq.pop();
            }
        }
        return pq.top();
    }	*/
//sort 0 1 2
/*void sort012(int a[], int n) {
    int low = 0;
    int high = n - 1;
    int mid = 0;

    while (mid <= high) {
        switch (a[mid]) {
            case 0:
                swap(a[low++], a[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(a[mid], a[high--]);
                break;
        }
    }
} */
//find uniuq 1 method is by unordered_map by checking value 1(count) present or not second is by XOR (a^a = 0)
/*int findu(int *arr,int n)
{
	int ans = 0;
	for(int i =0;i<n;i++)
	{
		ans = ans^arr[i];
	}
	return ans;
}*/
//unique no of occurence
/*bool isFrequencyUnique(int n, int arr[])
    {
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++) {
            freq[arr[i]]++;
        }
     
        unordered_set<int> uniqueFreq;
        for (auto& i : freq) {
            if (uniqueFreq.count(i.second))
                return false;
            else
                uniqueFreq.insert(i.second);
        }
        return true;
    }*/   
//find the duplicate in the array
/*vector<int> duplicates(int arr[], int n) {
        
        vector<int>temp;
        map<int,int>mp;
        
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
           
        }
        
        for(auto it:mp)
        {
            if(it.second>1)temp.push_back(it.first);
        }
        
         if(temp.size()==0)return {-1};
         else
         return temp;
    }*/ 
// find the duplicate no Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
// By flod detection cycle
/*int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        do {
            slow = nums[slow]; //move slow pointer by one
            fast = nums[nums[fast]];//move fast pointer by two

        }while(slow != fast);
        fast = nums[0];
        while(slow != fast)
        {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }*/  
//Function to return the count of number of elements in union of two arrays.
    /*int doUnion(int a[], int n, int b[], int m)  {
        set<int> s;
        for(int i=0;i<n;i++)
        {
            s.insert(a[i]);
        }
        for(int i=0;i<m;i++)
        {
            s.insert(b[i]);
        }
        return s.size();
    }*/
// Function to return the count of the number of elements in
    // the intersection of two arrays.
    /*int NumberofElementsInIntersection(int a[], int b[], int n, int m) {           
        unordered_set<int> s;
        for(int i =0;i<n;i++)
        {
            s.insert(a[i]);
        }
        unordered_set<int> common;
        for(int i =0;i<m;i++)
        {
            if(s.count(b[i]))
            {
                common.insert(b[i]);
            }
        }
        
        return common.size();
        
    }*/	
//0r if return type is vector
/*vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s(nums1.begin(),nums1.end());
        unordered_set<int> common;
        for(auto i : nums2)
        {
            if(s.count(i))
            {
                common.insert(i);
            }
        }
        vector<int> ans(common.begin(),common.end());
        return ans;
    }*/		  
 
 //count the pair with given sum
    /*int getPairsCount(int arr[], int n, int k) {
       map<int,int> mp;
       int count = 0;
       for(int i= 0;i<n;i++)
       {
           int a = arr[i];
           int more = k - a;
           if(mp.find(more) != mp.end())
           {
               count++;
           }
           mp[a] = i;
       }
       return count;
    } */   
//or if we have to return the index of those two then
/*vector<int> twoSum(vector<int>& nums, int target) {
         vector<int> ans;
         map<int,int> mp;
         for(int i =0;i<nums.size();i++)
         {
            int a = nums[i];
            int more = target - a;
            if(mp.find(more) != mp.end())
            {
                ans.push_back(mp[more]);
                ans.push_back(i);
            }
            mp[a] = i;
         }
         return ans;
    }*/
//Count pairs Sum in matrices Given two sorted matrices mat1 and mat2 of size n x n of elements
/*	int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
		int r1 = 0;
		int c1 = 0;
		int r2 = n - 1;
		int c2 = n - 1;
		int count = 0;
		while (r1 < n && r2 >= 0)
		{
		    int sum = mat1[r1][c1] + mat2[r2][c2];
		    if(sum == x)
		    {
		        count++;
		        c1++;
		        c2--;
		    }
		    else if(sum < x)
		    {
		        c1++;
		    }
		    else{
		        c2--;
		    }
		    
		    if(c1 == n)
		    {
		        c1 = 0;
		        r1++;
		    }
		    if(c2 == -1)
		    {
		        c2 = n - 1;
		        r2--;
		    }
		}
		return count;
	}*/	
//Max Pair Sum in an Array such that the maximum digit in both numbers are equal
/*int maxSum(vector<int>& nums) {
        int maxi = -1;
        for(int i =0;i<nums.size();i++)
        {
            string s = to_string(nums[i]);
            sort(s.rbegin(),s.rend());
            for(int j = i + 1;j<nums.size();j++)
            {
                string t = to_string(nums[j]);
                sort(t.rbegin(),t.rend());
                if(t[0]==s[0])
                {
                    maxi = max(maxi,nums[i] + nums[j]);
                }
            }
        }

        return maxi;
    }*/
// in o(N) 
/*int maxSum(vector<int>& nums) {
        int maxi[10] = {0};
        int ans = -1;
        for(auto num: nums)
        {
            int maxD = 0; 
            int temp = num;
            while(temp)
            {
                maxD = max(maxD,temp % 10);
                temp /= 10;
            }

            if(maxi[maxD])
            {
                ans = max(ans,maxi[maxD] + num);
            }
            if(num > maxi[maxD])
            {
                maxi[maxD] = num;
            }
        }
        return ans;
    }*/	
//Max Sum of a Pair With Equal Sum of Digits
/*int digitSum(int num) {
        int sum = 0;
        while (num) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }

    int maximumSum(vector<int>& nums) {
        unordered_map<int, int> maxSumMap; 
        int ans = -1;
        for (int num : nums) {
            int sum = digitSum(num);
            if (maxSumMap.find(sum) != maxSumMap.end()) {
                ans = max(ans, maxSumMap[sum] + num);
                maxSumMap[sum] = max(maxSumMap[sum], num);
            } else {
                maxSumMap[sum] = num;
            }
        }
        return ans;
    }*/
//Cyclically rotate an array by one
/*void rotate(int arr[], int n)
{
    int tmp= arr[n-1];
    
    for(int i=n-2;i>=0;i--){
        arr[i+1]= arr[i];
    }
    
    arr[0]= tmp;
    
    
    // or  
    int i =0, j = n - 1;
    while(i != j)
    {
        swap(arr[i],arr[j]);
        i++;
    }
}*/  

// Rotate Array by D in right
/*void reverse(vector<int>& arr, int start, int end) {
        while (start < end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }   
    void rotate(vector<int>& nums, int k) {
        
       int n = nums.size();
       k = k%n;
       reverse(nums, 0 , n - k - 1);
       reverse(nums, n - k , n - 1);
       reverse(nums , 0 , n - 1);

    }*/ 
	
// Function to left rotate array elements by d positions
/*void reverse(vector<int>& arr, int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void leftRotate(vector<int>& arr, int d) {
    int n = arr.size();
    d = d % n; // To handle case when d >= n
    
    // Reverse the first d elements
    reverse(arr, 0, d - 1);
    // Reverse the remaining elements
    reverse(arr, d, n - 1);
    // Reverse the whole array
    reverse(arr, 0, n - 1);
}*/  
//Maximum Subarray(kadane algo)
/*int maxSubArray(vector<int>& nums) {
        int sum =0,maxi = -1e9;
        for(int i=0;i<nums.size();i++)
        {
            sum += nums[i];
            if(sum > maxi)
            {
                maxi = sum;
            }
            if(sum < 0)
            {
                sum = 0;
            }
        }
        return maxi;
    }*/
	//if want to print that subarray so
	/*for(int i =0;i<arr.size();i++)
	{
		if(sum == 0) start = i;
		sum += arr[i];
		if(sum > maxi)
		{
			maxi = sum;
			ansstart = start,ansend = i;
		}
		if(sum < 0)
		{
			sum = 0;
		}
		//print the array from ansstart to ansend
	}*/
//Minimize the Heights I(Given an array arr[] denoting heights of N towers and a positive integer K, you have to modify the height of each tower either by increasing or decreasing them by K only once.Find out what could be the possible minimum difference of the height of shortest and longest towers after you have modified each tower.Note: Assume that height of the tower can be negative)
/*int getMinDiff(int arr[], int n, int k) {
        sort(arr,arr + n);
        int maxi = arr[n - 1];
        int mini = arr[0];
        int res = maxi - mini;
        for(int i = 1;i<n;i++)
        {
            maxi = max(arr[i - 1] + k,arr[n - 1] - k);
            mini = min(arr[i] - k, arr[0] + k);
            
            res = min(res,maxi - mini);
            
        }
        return res;
    }*/
//Minimize the Heights II (not having negative in it)
/*int getMinDiff(int arr[], int n, int k) {
        sort(arr,arr + n);
        int maxi = arr[n - 1];
        int mini = arr[0];
        int res = maxi - mini;
        for(int i = 1;i<n;i++)
        {
            maxi = max(arr[i - 1] + k,arr[n - 1] - k);
            mini = min(arr[i] - k, arr[0] + k);
            if(mini < 0) continue;
            
            res = min(res,maxi - mini);
            
        }
        return res;
    }*/
//Minimum Difference Between Largest and Smallest Value in Three Moves
/*int minDifference(vector<int>& nums) {
        if(nums.size() <= 4) return 0;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int op1 = nums[n - 4] - nums[0];
        int op2 = nums[n - 3] - nums[1];
        int op3 = nums[n - 2] - nums[2];
        int op4 = nums[n - 1] - nums[3];
        return min(op1,min(op2,min(op3,op4)));
    }*/
//Minimum number of jumps(This means if arr[i] = x, then we can jump any distance y such that y = x.)
/*int minJumps(int arr[], int n){
        int maxr = arr[0];
        int step = arr[0];
        int jumps = 1;
        if(n == 1) return 0;
        else if(arr[0] == 0) return -1;
        else {
            for(int i =1;i<n;i++)
            {
                if(i == n - 1 )
                {
                    return jumps;
                }
                maxr = max(maxr,i + arr[i]); //i isliye + ke ager 0 hai and step bhi 0 to i = higa i ke to -1 age nhi ja skate
                step--;
                if(step == 0)
                {
                    jumps++;
                    if(i >= maxr)
                    {
                        return -1;
                    }
                    step = maxr - i;//itne step ke bad to jump lene hi page gi
                }
            }
        }
    }*/
//Merge Without Extra Space
/*void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
             int left = n - 1;
             int right = 0;
             while(left >= 0 && right < m)
             {
                 if(arr1[left] > arr2[right])
                 {
                     swap(arr1[left],arr2[right]);
                     left--, right++;
                 }
                 else {
                     break;
                 }
             }
             sort(arr1,arr1 + n);
             sort(arr2,arr2 + m);
        }*/
//Merge Intervals
/*vector<vector<int>> merge(vector<vector<int>>& intervals) {
       int n = intervals.size();
       vector<vector<int>> ans;
       sort(intervals.begin(),intervals.end());
       for(int i =0;i<n;i++)
       {
          int start = intervals[i][0];
          int end = intervals[i][1];
          if(!ans.empty() && end <= ans.back()[1])
          {
            continue;
          }
          for(int j=i + 1;j<n;j++)
          {
            if(intervals[j][0] <= end)
            {
                end = max(end,intervals[j][1]);
            }
            else {
                break;
            }
          }
          ans.push_back({start,end});
       }   
       return ans;
    }*/
    //or
    /*vector<vector<int>> merge(vector<vector<int>>& intervals) {
       int n = intervals.size();
       vector<vector<int>> ans;
       sort(intervals.begin(),intervals.end());
       for(int i =0;i<n;i++)
       {
          if(ans.empty() || intervals[i][0] > ans.back()[1])
          {
            ans.push_back(intervals[i]);
          }
          else {
            ans.back()[1] = max(ans.back()[1] , intervals[i][1]);
          }
       }   

       return ans;
    }*/
//Next Permutation
//first by the stl predifined function
/*vector<int> nextPermutation(int N, vector<int> arr){
        next_permutation(arr.begin(),arr.end());
        return arr;
    }*/ 
	//or
	/*void nextPermutation(vector<int>& nums) {
        int index = -1;
        int n = nums.size();
        for(int i = n - 2;i>=0;i--)
        {
            if(nums[i] < nums[i + 1])
            {
                index = i;
                break;
            }
        }
        if(index == -1)
        {
            reverse(nums.begin(),nums.end());
        }
        else {
            for(int i = n - 1;i>index;i--)
            {
                if(nums[i] > nums[index])
                {
                    swap(nums[i],nums[index]);
                    break;
                }
            }
            reverse(nums.begin() + index + 1,nums.end());
        }
        
    } */ 
//count subarray with given sum k
/*int subarraySum(vector<int>& nums, int k) {
         
         int count = 0;
         int sum = 0;
         unordered_map<int,int> mp;
         mp[0] = 1;
         for(int i=0;i<nums.size();i++)
         {
            sum += nums[i];
            int precheck = sum - k;
            count += mp[precheck];
            mp[sum] += 1;
         }
         return count;
        
    } */
//Longest Sub-Array with Sum K
/*int lenOfLongSubarr(int A[],  int N, int K) 
    { 
         unordered_map<int,int> mp;
         int sum = 0;
         int xlen = 0;
         for(int i=0;i<N;i++)
         {
             sum += A[i];
             if(sum == K)
             {
                xlen = max(xlen,i + 1);
             }
             int presum = sum - K;
             if(mp.find(presum) != mp.end())
             {
                 int len = i - mp[presum];
                 xlen = max(xlen,len);
             }
             if(mp.find(sum) == mp.end())
             {
                 mp[sum] = i;
             }
         }
         return xlen;
    }*/
////Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    /*bool subArrayExists(int arr[], int n)
    {
        //Your code here
        unordered_map<int,int> mp;
        int count = 0;
        int sum=0;
        mp[0]=1;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            int precheck = sum - 0;
            count += mp[precheck];
            if(count > 0)
            {
                return true;
            }
            mp[sum]++;
        }
        return false;
    }*/
//Factorials of large numbers    
/*void multiply(vector<int>& nums, int &size, int &multiplier) {
        int carry = 0;
    
        for(int i = 0; i<size; i++) {
            int result = (multiplier*nums[i])+carry;
    
            nums[i]   = result%10;
    
            carry     = result/10;
        }
    
        while(carry) {
            nums[size] = carry%10;
            size++;
            carry /= 10;
        }
    }
    
    vector<int> factorial(int N){
        vector<int> nums(10000, 0);
        nums[0] = 1;
        int size = 1;
        int fact = N;
    
    
        for(int multiplier = 2; multiplier<=fact; multiplier++)
            multiply(nums, size, multiplier);
        
        vector<int> result;
        for(int i = size-1; i>=0 ; i--)
            result.push_back(nums[i]);
        return result;
    }*/	
// Function to find maximum product subarray
	/*long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long ans = LLONG_MIN;
	    long long pre = 1, suff = 1;
	    
	    for(int i=0;i<n;i++){
	        if(pre == 0) pre = 1;
	        if(suff == 0) suff = 1;
	        
	        pre = pre*arr[i];
	        suff = suff*arr[n-i-1];
	       // cout<<pre << " "<< suff<<endl;
	        ans = max(ans, max(pre,suff));
	    }
	    return ans;
	}*/
//Longest consecutive subsequence
//in T.C = O(NlogN) ans space = O(1)
/*int longestConsecutive(vector<int>& nums) {
        int cnt = 0;
        if(nums.size() == 0) return 0;
        sort(nums.begin(),nums.end());
        int lastsmaller = INT_MIN;
        int longest = 1;
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i] - 1 == lastsmaller)
            {
                   cnt++;
                   lastsmaller = nums[i];
            }
            else if(lastsmaller != nums[i])
            {
                cnt = 1;
                lastsmaller = nums[i];
            }
            longest = max(longest,cnt);
        }
        return longest;
    }*/
//second way    
// T.C = O(R) r is max element in arr and S.C = O(N)
/*int findLongestConseqSubseq(int arr[], int N)
    {
       int longest = 1;
       int cnt = 0;
       if(N == 0) return 0;
       unordered_set<int> st;
       for(int i =0;i<N;i++)
       {
           st.insert(arr[i]);
       }
       for(auto it: st)
       {
           if(st.find(it - 1) == st.end()) // not there
           {
               cnt = 1;
               int x = it;
               while(st.find(x + 1) != st.end())
               {
                   cnt++;
                   x = x + 1;
               }
               longest = max(longest,cnt);
           }
       }
       return longest;
    }*/ 
//Majority Element - I using space O(N)
 /*int majorityElement(vector<int>& nums) {
       int n = nums.size();
       map<int,int> mp;
       for(int i =0;i<n;i++)
       {
           mp[nums[i]]++;
       }
       for(auto it: mp)
       {
          if(it.second > (n/2))
          {
            return it.first;
          }
       }
       return -1;
    }*/
//2 way using moore voting algo then checking the count 
/*int majorityElement(int a[], int n)
    {
        
        int element ;
        int cnt = 0;
        for(int i =0;i<n;i++)
        {
            if(cnt == 0)
            {
                cnt = 1;
                element = a[i];
            }
            else if(a[i] == element)
            {
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int cnt2 = 0;
        for(int i =0;i<n;i++)
        {
            if(a[i] == element) cnt2++;
        }
        if(cnt2 > n/2)
        {
            return element;
        }
        return -1;
        
    }*/	 	   
// Majority Element II(> n/3) using space
/*vector<int> majorityElement(vector<int>& nums) {
        vector<int> ls;
        map<int,int> mp;
        int n = nums.size();
        for(int i =0;i<n;i++)
        {
            mp[nums[i]]++;
            if(mp[nums[i]] == floor(n/3) + 1)
            {
                ls.push_back(nums[i]);
            }
            if(ls.size() == 2) break;
        }
        return ls;
    }*/
//2 way using moore voting algo
 /*vector<int> majorityElement(vector<int>& nums) {
       int cnt1 = 0 , cnt2 = 0;
       int n = nums.size();
       int el1 = INT_MIN , el2 = INT_MIN;
       for(int i =0;i<n;i++)
       {
          if(cnt1 == 0 && el2 != nums[i])
          {
            el1 = nums[i] ;
            cnt1 = 1;
          }
          else if(cnt2 == 0 && el1 != nums[i])
          {
              el2 = nums[i];
              cnt2 = 1;
          }
          else if(el1 == nums[i]) cnt1++;
          else if(el2 == nums[i]) cnt2++;
          else{
            cnt1-- ;
            cnt2-- ;
          }
       }
       //manual check
       vector<int> ans;
       cnt1 = 0;
       cnt2= 0;
       for(int i=0;i<n;i++)
       {
          if(el1 == nums[i]) cnt1++;
          if(el2 == nums[i]) cnt2++;
       }
       int m = (int)(n/3) + 1;
       if(cnt1 >= m) ans.push_back(el1);
       if(cnt2 >= m) ans.push_back(el2);
       return ans;
    }*/ 
//triplet sum if nums[i] + nums[j] + nums[k] = 0 return these array
/*vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            set<int> hash;
            for(int j=i + 1;j<n;j++)
            {
                int third = -(nums[i] + nums[j]);
                if(hash.find(third) != hash.end())
                {
                    vector<int> temp = {nums[i] , nums[j] , third};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                hash.insert(nums[j]);
            }
        }
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }*/
//second way
/*vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i = 0;i<n;i++)
        {
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            int j = i + 1;
            int k = n - 1;
            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum < 0)
                {
                    j++;
                }
               else if(sum > 0)
               {
                  k--;
               }
               else{
                    vector<int> temp = {nums[i] , nums[j] , nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j<k && nums[j] == nums[j - 1]) j++;
                    while(j<k && nums[k] == nums[k + 1]) k--;
                }
            }
            
        }
        return ans;
    }*/
//Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    /*bool find3Numbers(int A[], int n, int X)
    {
    
        sort(A, A + n);
        for(int i = 0;i<n;i++)
        {
            if(i > 0 && A[i] == A[i - 1]) continue;
            int j = i + 1;
            int k = n - 1;
            while(j < k){
                int sum = A[i] + A[j] + A[k];
                if(sum < X)
                {
                    j++;
                }
               else if(sum > X)
               {
                  k--;
               }
               else{
                    return true;
                }
            }
            
        }
        return false;
    } */  
//Fourth SUM
/*vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        set<vector<int>> st;
        for(int i = 0;i<n;i++)
        {
            for(int j = i + 1;j<n;j++)
            {
                set<int> hash;
                for(int k=j + 1;k<n;k++)
                {
                    int sum = nums[i] + nums[j];
                    sum += nums[k];
                    int fourth = target - (sum);
                    if(hash.find(fourth) != hash.end())
                    {
                        vector<int> temp = {nums[i] , nums[j] , nums[k] , fourth};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                    hash.insert(nums[k]);
                }
            }
            
        }
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }*/
//second way
 /*vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i =0;i<n;i++)
        {
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            for(int j = i + 1;j<n;j++)
            {
                if(j > i + 1 && nums[j] == nums[j - 1]) continue;
                int k = j + 1;
                int l = n - 1;
                while(k < l)
                {
                    long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[l];
                    if(sum == target)
                    {
                        vector<int> temp = {nums[i] , nums[j] , nums[k] , nums[l]};
                        ans.push_back(temp);
                        k++;
                        l--;
                        while(k < l && nums[k] == nums[k - 1]) k++;
                        while(k < l && nums[l] == nums[l + 1]) l--;
                    }
                    else if(sum < target)
                    {
                        k++;
                    }
                    else{
                        l--;
                    }
                }
            }
        }
        return ans;
    }*/  
//Tapping water
/*long long trappingWater(int arr[], int n){
        int prefix[n];
        int suffix[n];
        int maxi = arr[0];
        for(int i=0;i<n;i++)
        {
            maxi = max(maxi,arr[i]);
            prefix[i] = maxi;
        }
        maxi = arr[n - 1];
        for(int i =n - 1;i>=0;i--)
        {
            maxi = max(maxi,arr[i]);
            suffix[i] = maxi;
        }
        long long ans = 0;
        for(int i = 0;i<n;i++)
        {
            ans += min(prefix[i],suffix[i]) - arr[i];
        }
        return ans;
    }*/
//Second way without using space
/*int trap(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        int leftmax = 0 , rightmax = 0;
        int l = 0 , r = n - 1;
        for(int i =0;i<n;i++)
        {
            if(arr[l] <= arr[r])
            {
                if(arr[l] >= leftmax) leftmax = arr[l];
                else  ans += leftmax - arr[l];
                l++;
            }
            else{
                if(arr[r] >= rightmax) rightmax = arr[r];
                else ans += rightmax - arr[r];
                r--;
            }
        }
        return ans; 
    }*/ 
//Chocolate Distribution Problem There are M students, the task is to distribute chocolate packets among M students such that :
//1. Each student gets exactly one packet.
//2. The difference between maximum number of chocolates given to a student and minimum number of chocolates given to a student is minimum.
/*long long findMinDiff(vector<long long> a, long long n, long long m){
    
          sort(a.begin(),a.end());
          long long ans = 1e18;
          int i =0 , j = i + (m - 1);
          while(j < n)
          {
              ans = min(ans,a[j] - a[i]);
              i++ , j++;
          }
          return ans;
    
    }*/ 
//Smallest Subarray with sum greater than a given value	
/*int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = 0;
        int length = 1e9;
        long long sum = 0;
        while(high < n)
        {
            sum += nums[high];
            high++;
            while(sum >= target)
            {
                int currentlength = high - low;
                length = min(length,currentlength);
                sum -= nums[low];
                low++; 
            }
        }
        if(length == 1e9)
        {
            return 0;
        }
        return length;
    }*/   
//Function to partition the array around the range such 
    //that array is divided into three parts.
    /*void threeWayPartition(vector<int>& array,int a, int b)
    {
        int n = array.size();
        int start = 0;
        int mid = 0;
        int end = n - 1;
        while(mid <= end)
        {
            if(array[mid] < a)
            {
                swap(array[start],array[mid]);
                start++;
                mid++;
            }
            else if(array[mid] >= a && array[mid] <= b)
            {
                mid++;
            }
            else if(array[mid] > b)
            {
                swap(array[mid],array[end]);
                end--;
            }
        }
    }*/
//Find the minimum number of swaps required to bring all the numbers less than or equal to k together, i.e. make them a contiguous subarray.
/*int minSwap(int arr[], int n, int k) {
        int count = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i] <= k)
            {
                count++;
            }
        }
        int curr_window = 0;
        for(int i=0;i< count;i++)
        {
            if(arr[i] <= k)
            {
                curr_window++;
            }
        }
        int ans = count - curr_window;
        //now traversing the window
        for(int i=count;i<n;i++)
        {
            if(arr[i] <= k)
            {
                curr_window++;
            }
            if(arr[i - count] <= k) //ager start element <=k tha to
            {
                curr_window--;
            }
            ans = min(ans,count - curr_window);
        }
        return ans;
    }*/
//Minimum Number of Moves to Make Palindrome				  
/*int minMovesToMakePalindrome(string s) {
        int n = s.size();
        int lt = 0,rt = n - 1 , ans = 0;
        while(lt < rt){
            int l = lt , r = rt;
            while(s[l] != s[r]) r--;
            if(l == r)
            {
                swap(s[r] , s[r + 1]);
                ans++;
                continue;
            }
            else{
                while(r<rt){
                    swap(s[r],s[r + 1]);
                    ans++;
                    r++;
                }
            }
            lt++;
            rt--;
        }
        return ans;
    }*/	    
//Search in Rotated Sorted Array
/*int search(vector<int>& A, int key) {
        int n =  A.size();
        int l = 0  , h = n - 1;
        while(l<=h)
        {
            int mid = l + (h - l)/2;
            if(A[mid] == key) return mid;
            if(A[mid] == A[l] && A[h] == A[mid]) // handles duplicate case in it
            {
                l++;
                h--;
                continue;
            }
            if(A[l] <= A[mid])//fisrt line
            {
                if(A[l] <= key && A[mid] >= key)
                {
                    h = mid - 1;
                }
                else{
                    l = mid + 1;
                }
            }
            else{
                //second line
                if(A[mid] <= key && A[h] >= key)
                {
                    l = mid + 1;
                }
                else{
                    h = mid - 1;
                }
            }
        }
        return -1;
    }*/	
//Floor in a Sorted Array	 
/*int findFloor(vector<long long> v, long long n, long long x) {
        long long l = 0, hi = n - 1;
        int ans = -1;
        while (l <= hi) {
            long long mid = l + (hi - l) / 2;
            if (v[mid] <= x) {
                ans = mid;
                l = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        return ans;
  }*/
//Minimum element in a sorted and rotated array
/*int findMin(int nums[], int n){
        int l = 0 , h = n - 1;
        int ans = INT_MAX;
        while(l<=h)
        {
            int mid = l + (h - l)/2;
            if(nums[l] <= nums[mid])
            {
                ans = min(ans,nums[l]);
                l = mid + 1;
            }
            else{
                ans = min(ans,nums[mid]);
                h = mid - 1;
            }
        }
        return ans;
    
    }*/
//Given an unsorted array Arr[] of N integers and an integer X, find floor and ceiling of X in Arr[0..N-1].
/*pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    sort(arr,arr + n);
    int l = 0, hi = n - 1;
    int floor = -1, ceil = -1;

    // Finding floor
    while (l <= hi) {
        int mid = l + (hi - l) / 2;
        if (arr[mid] <= x) {
            floor = arr[mid];
            l = mid + 1;
        } else {
            hi = mid - 1;
        }
    }

    // Reset variables for finding ceil
    l = 0;
    hi = n - 1;

    // Finding ceil
    while (l <= hi) {
        int mid = l + (hi - l) / 2;
        if (arr[mid] >= x) {
            ceil = arr[mid];
            hi = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    return make_pair(floor, ceil);
}*/
//Search Insert Position
/*int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0 , h = n - 1;
        int ans;
        if(nums[n - 1] < target)
        {
            return n;
        }
        if(nums[0] > target)
        {
            return 0;
        }
        while(l <= h)
        {
            int mid = l + (h - l)/2;
            if(nums[mid] == target)
            {
                return mid;
            }
            if(nums[mid] > target)
            {
                  ans = mid;
                  h = mid - 1;

            }
            else{
                l = mid + 1;
            }
        }
        return ans;
    }*/
//First and last occurrences of x
/*void funcfirst(vector<int> &ans1,vector<int> &nums,int n , int target)
    {
        int low = 0 , hi = n - 1;
        int ans = -1;
        while(low <= hi)
        {
            int mid = low + (hi - low)/2;
            if(nums[mid] == target)
            {
                ans = mid;
                hi = mid - 1; 
            }
            else if(nums[mid] > target)
            {
                hi = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        ans1.push_back(ans);
    }
    void funclast(vector<int> &ans1,vector<int> &nums,int n , int target)
    {
        int low = 0 , hi = n - 1;
        int ans = -1;
        while(low <= hi)
        {
            int mid = low + (hi - low)/2;
            if(nums[mid] == target)
            {
                ans = mid;
                low = mid + 1; 
            }
            else if(nums[mid] > target)
            {
                hi = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        ans1.push_back(ans);
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        funcfirst(ans,nums,n,target);
        funclast(ans,nums,n,target);
        return ans;
    }*/	
//Given an ascending sorted rotated array arr of distinct integers of size n. The array is right-rotated k times. Find the value of k.		  	    
/*int findKRotation(int arr[], int n) {
        int l = 0, h = n - 1;
        int ans1 = -1;
        int ans = INT_MAX;
        
        while (l <= h) {
            int mid = l + (h - l) / 2;
            
            if (arr[l] <= arr[h]) {  // If the subarray is already sorted
                if (arr[l] < ans) {
                    ans1 = l;
                    ans = arr[l];
                }
                break;
            }
            
            if (arr[l] <= arr[mid]) {  // Left part is sorted
                if (arr[l] < ans) {
                    ans1 = l;
                    ans = arr[l];
                }
                l = mid + 1;
            } else {  // Right part is sorted
                if (arr[mid] < ans) {
                    ans1 = mid;
                    ans = arr[mid];
                }
                h = mid - 1;
            }
        }
        
        return ans1;
    }*/
//Return single Element in a Sorted Array
/*int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0]; // if single element in nums
        if(nums[0] != nums[1]) return nums[0];
        if(nums[n - 1] != nums[n - 2]) return nums[n - 1];
        int l = 1 , h = n - 2;
        while(l<=h)
        {
            int mid = l + (h - l)/2;
            if(nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
            {
                return nums[mid];
            }
            else if((mid%2 == 1 && nums[mid] == nums[mid - 1]) || (mid%2 == 0 && nums[mid] == nums[mid + 1]))
            {
                l = mid + 1; //eliminating left half in it
            }
            else{
                h = mid - 1;
            }
        }
        return -1;
    }*/
//Find Peak Element
/*int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return 0;
        if(nums[0] > nums[1]) return 0;
        if(nums[n - 1] >= nums[n - 2]) return n - 1;
        int l = 1 , h = n - 2;
        while(l<=h)
        {
            int mid = l + (h - l)/2;
            if(nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])
            {
                return mid;
            }
            else if(nums[mid] > nums[mid - 1])//first line
            {
                l = mid + 1;
            }
            else if(nums[mid] > nums[mid + 1]){//second line
                h = mid - 1;
            }
            else{//if multiple peak and mid is at bottom of two peaks
                l = mid + 1; //or we can also do h = mid + 1;

            }
        }
       return -1;
    }*/
//Given an integer x, find the square root of x. If x is not a perfect square, then return floor(vx).
/*int mySqrt(int x) {
         int l = 1 , h = x;
         int  ans;
         while(l<=h)
         {
             int mid = l + (h - l)/2;
             long long square = (long long)mid * mid;
             if(square == x)
             {
                 return mid;
             }
             else if(square > x)
             {
                 h = mid - 1;
             }
             else{
                 ans = mid;
                 l = mid + 1;
             }
         }
         return ans;
    }*/
//Find Nth root of M
	/*int f(int mid,int n ,int m)
	{
	    long long ans = 1;
	    for(int i = 1;i<=n;i++)
	    {
	        ans = ans*mid;
	        if(ans > m) return 2;
	    }
	    if(ans == m)
	    {
	        return 1;
	    }
	    return 0;
	}
	int NthRoot(int n, int m)
	{
	    int l = 1 , h = m;
	    while(l<=h)
	    {
	        int mid = l + (h - l)/2;
	        int mide = f(mid,n,m);
	        if(mide == 1)
	        {
	            return mid;
	        }
	        else if(mide == 0)
	        {
	            l = mid + 1;
	        }
	        else{
	            h  = mid - 1;
	        }
	    }
	    return -1;
	}*/
//Koko Eating Bananas(Given N piles of bananas, the ith pile has piles[i] bananas and H hours time until guards return (N <= H). Find the minimum (S) bananas to eat per hour such that Koko can eat all the bananas within H hours. Each hour, Koko chooses some pile of bananas and eats S bananas from that pile. If the pile has less than S bananas, then she consumes all of them, and wont eat any more bananas during that hour. )
/*int f1(vector<int> &piles,int N)
    {
        int ans = INT_MIN;
        for(int i=0;i<N;i++)
        {
            ans = max(ans,piles[i]);
        }
        return ans;
    }
    long long f2(vector<int> &piles,int mid,int n)
    {
        long long total = 0;
        for(int i=0;i<n;i++)
        {
            total += ceil((double)piles[i]/(double)mid);
        }
        return total;
    }
    int Solve(int N, vector<int>& piles, int H) {
        int l = 1 , h = f1(piles,N);
        int ans = INT_MAX;
        while(l<=h)
        {
            int mid = l + (h - l)/2;
            long long total = f2(piles,mid,N);
            if(total <= H)
            {
                ans = mid;
                h = mid - 1;
            }
            else{
                l = mid + 1;
            }
            
        }
        return ans;
    }*/
//Minimum days to make M bouquets
/*int f1(vector<int>&a,int n)
    {
        int ans = INT_MAX;
        for(int i=0;i<n;i++)
        {
            ans = min(ans,a[i]);
        }
        return ans;
    }
    int f2(vector<int>&a,int n)
    {
        int ans = INT_MIN;
        for(int i=0;i<n;i++)
        {
            ans = max(ans,a[i]);
        }
        return ans;
    }
    bool ispossible(vector<int> &a,int M,int K,int mid)
    {
        int cnt = 0;
        int noof = 0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i] <= mid)
            {
                cnt++;
            }
            else{
                noof  += (cnt/K);
                cnt = 0;
            }
        }
        noof += (cnt/K);
        return noof >=M;
    }
    int solve(int M, int K, vector<int> &a){
      int n = a.size();    
      int l = f1(a,n);
      int h = f2(a,n);
      int ans = -1;
      while(l<=h)
      {
          int mid = l + (h -l)/2;
          if(ispossible(a,M,K,mid))
          {
              ans = mid;
              h = mid - 1;
          }
          else{
              l = mid + 1;
          }
      }
      return ans;
    }*/
//Smallest Divisor(You are given an array of integers nums and an integer K, your task is to find the smallest positive integer divisor, such that upon dividing all the elements of the given array by it, the sum of the division's result is less than or equal to the given integer K.)
/*int f1(vector<int>&a)
    {
        int ans = INT_MIN;
        for(int i=0;i<a.size();i++)
        {
            ans = max(ans,a[i]);
        }
        return ans;
    }
    int f2(vector<int> &a,int mid)
    {
        int sum = 0;
        for(int i =0;i<a.size();i++)
        {
            sum += ceil((double)a[i]/(double)mid);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int K) {

        int l = 1 , h = f1(nums);
        int ans = h;
        while(l<=h)
        {
            int mid = l + (h - l)/2;
            if(f2(nums,mid) <= K)
            {
                ans = mid;
                h = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        return ans;
    }*/
//Capacity To Ship Packages Within D Days
/*int f1(vector<int> &a,int n)
    {
        int ans = INT_MIN;
        for(int i=0;i<n;i++)
        {
            ans = max(ans,a[i]);
        }
        return ans;
    }
    int f2(vector<int> &a,int n)
    {
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            ans += a[i];
        }
        return ans;
    }
    int f3(vector<int> &a,int n ,int d,int mid)
    {
        int day = 1 , load = 0;
        for(int i =0;i<n;i++)
        {
            if(a[i] + load > mid)
            {
                day += 1;
                load = a[i];
            }
            else{
                load += a[i];
            }
        }
        return day;
    }
    int shipWithinDays(vector<int>& arr, int d) {
        int n = arr.size();
        int l = f1(arr,n) , h = f2(arr,n);
        int ans;
        while(l<=h)
        {
            int mid = l + (h - l)/2;
            int noofdays = f3(arr,n,d,mid);
            if(noofdays <= d)
            {
                ans = mid;
                h = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        return ans;
    }*/ 
//Kth Missing Positive Number
 /*int findKthPositive(vector<int>& a, int k) {
        int n = a.size();
        int l = 0 , h = n - 1;
        while(l<=h)
        {
            int mid = l + (h - l)/2;
            int missing = a[mid] - (mid + 1);
            if(missing < k)
            {
                l = mid + 1;
            }
            else{
                h = mid - 1;
            }
        }
        return h + 1 + k;
    }*/
//K-th missing element taking the first element of the array as starting point in the increasing sequence. If no k-th missing element is there, output -1.
/*int KthMissingElement(int a[], int n, int k) {
    int l = 0, h = n - 1;

    // Perform binary search to find the right boundary
    while (l <= h) {
        int mid = l + (h - l) / 2;
        int missing = a[mid] - a[0] - mid;
        
        if (missing < k) {
            l = mid + 1;
        } else {
            h = mid - 1;
        }
    }

    // After exiting the loop, l is the index of the first element where missing >= k
    // or the end of the array if not enough missing elements
    if (l == n) {
        return -1; // Not enough missing elements in the array
    }

    return a[0] + k + h;
}*/
//Aggressive Cows(You are given an array consisting of n integers which denote the position of a stall. You are also given an integer k which denotes the number of aggressive cows. You are given the task of assigning stalls to k cows such that the minimum distance between any two of them is the maximum possible.)
/*bool canplace(vector<int> &a,int k ,int n ,int mid)
    {
        int cowcount = 1;
        int lastpos = a[0];//1st cow always sit at first position
        for(int i=0;i<n;i++)
        {
            if(a[i] - lastpos >= mid)
            {
                cowcount++;
                if(cowcount == k)
                {
                    return true;
                }
                lastpos = a[i];
            }
        }
        return false;
    }
    int solve(int n, int k, vector<int> &a) {
    
        int l = 0 ;
        int ans = -1;
        sort(a.begin(),a.end());
        int h = a[n - 1];
        while(l<=h)
        {
            int mid = l + (h - l)/2;
            if(canplace(a,k,n,mid))
            {
                ans = mid;
                l = mid + 1;
            }
            else{
                h = mid - 1;
            }
        }
        return ans;
    }*/
//Allocate minimum number of pages  // Painters Partition  // Split Array 
/*int countstu(int arr[],int pages,int n)
    {
        int student = 1;
        long long pagestu = 0;
        for(int i=0;i<n;i++)
        {
            if(pagestu + arr[i] <= pages)
            {
                pagestu += arr[i];
            }
            else{
                student += 1;
                pagestu = arr[i];
            }
        }
        return student;
    }
    long long findPages(int n, int arr[], int m) {
        if(m > n) return -1;// student are more than books
        long long l = *max_element(arr,arr + n);
        long long h = accumulate(arr,arr + n,0);
        while(l<=h)
        {
            long long mid = l + (h - l)/2;
            int student = countstu(arr,mid,n);
            if(student > m)
            {
                l = mid + 1;
            }
            else{
                h = mid - 1;
            }
        }
        return l;
    }*/    
//Minimize Max Distance to Gas Station
/*int no(double dist, vector<int>& a){
        int cbt = 0;
        for(int i=1;i<a.size();i++){
            int noinbet = ((a[i] - a[i - 1]) / dist);
            if((a[i] - a[i - 1])/ dist == noinbet*dist){
                noinbet--;
            }
            cbt += noinbet;
        }
        return cbt;
    
    }
    double findSmallestMaxDist(vector<int> &a, int k) {
        int n = a.size();
        double low = 0;
        double high = 0;
        for(int i=0;i<n - 1;i++){
            high = max(high, (double)(a[i + 1] - a[i]));
        }
        double dif = 1e-6;
        while(high - low > dif)
        {
            double mid = (low + high) / (2.0);
            int cat = no(mid,a);
            if(cat > k){
                low = mid;
            }
            else{
                high = mid;
            }
        }
        return high;
    }*/	 
//Median of 2 Sorted Arrays of Different Sizes	   
/*double MedianOfArrays(vector<int>& a, vector<int>& b)
    {
        int n1 = a.size() , n2 = b.size();
        if(n1 > n2) return MedianOfArrays(b,a);
        int low = 0 , high = n1;
        int left = (n1 + n2 + 1)/2;
        while(low <= high){
            int mid1 = (low + high) >> 1;
            int mid2 = left - mid1;
            int l1 = INT_MIN , l2 = INT_MIN , r1= INT_MAX ,r2 = INT_MAX;
            if(mid1 < n1) r1 = a[mid1];
            if(mid2 < n2) r2 = b[mid2];
            if(mid1 - 1 >= 0) l1 = a[mid1 - 1];
            if(mid2 - 1 >= 0) l2 = b[mid2 - 1];
            if(l1 <= r2 && l2 <= r1){
                if((n1 + n2)%2 == 1) return max(l1,l2);
                return (double)(max(l1,l2) + min(r1,r2))/2.0;
            }else if(l1 > r2){
                high = mid1 - 1;
            }else{
                low = mid1 + 1;
            }
        }
        return 0;
    }*/
//K-th element of two Arrays
/*int kthElement(int a[], int b[], int n1, int n2, int k)
    {
        if(n1 > n2) return kthElement(b,a,n2,n1,k);
        int low = max(k - n2,0) , high = min(k,n1);
        int left = k;
        int n = n1 + n2;
        while(low <= high){
            int mid1 = (low + high) >> 1;
            int mid2 = left - mid1;
            int l1 = INT_MIN , l2 = INT_MIN, r1 = INT_MAX , r2 = INT_MAX;
            if(mid1 < n1) r1 = a[mid1];
            if(mid2 < n2) r2 = b[mid2];
            if(mid1 - 1 >= 0) l1 = a[mid1 - 1];
            if(mid2 - 1 >= 0) l2 = b[mid2 - 1];
            if(l1 <= r2 && l2 <= r1){
                return max(l1,l2);
            }
            else if(l1 > r2) high = mid1 - 1;
            else low = mid1 + 1;
        }
        return 0;
    }*/    
//Row with max 1s
/*int rowWithMax1s(vector<vector<int>> arr, int n, int m) {
        int maxCount = 0;
        int index = -1;
        for (int i = 0; i < n; i++) {
            // Find the first occurrence of 1 in the current row
            auto it = lower_bound(arr[i].begin(), arr[i].end(), 1);
            // Calculate the number of 1s in the current row
            int count1s = distance(it, arr[i].end());
            // Update the maximum count and index if the current row has more 1s
            if (count1s > maxCount) {
                maxCount = count1s;
                index = i;
            }
        }
        return index;
    }*/	   	   
//Search in a matrix 1
/*int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    int low = 0 , high = N*M - 1;
	    while(low <= high)
	    {
	        int mid = (low + high)/2;
	        int row = mid/M  , col = mid%M;
	        if(mat[row][col] == X)
	        {
	            return 1;
	        }
	        else if(mat[row][col] < X) low = mid + 1;
	        else high = mid - 1;
	    }
	    return 0;
	}*/
//Find a Peak Element in matrix
/*int maxElement(vector<vector<int>>&mat,int col,int n)
    {
        int maxi = -1;
        int index = -1;
        for(int i=0;i<n;i++)
        {
            if(mat[i][col] > maxi)
            {
                maxi = mat[i][col];
                index = i;
            }
        }
        return index;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size() , m = mat[0].size();
        int low = 0 , high = m - 1;
        vector<int> ans;
        while(low <= high)
        {
            int mid = (low + high) / 2;
            int row = maxElement(mat,mid,n);
            int left = mid - 1 >= 0 ? mat[row][mid - 1] : -1;
            int right = mid + 1 < m ? mat[row][mid + 1] : -1;
            if(mat[row][mid] > left && mat[row][mid] > right)
            {
                ans.push_back(row);
                ans.push_back(mid);
                return ans;
            }
            else if(mat[row][mid] < left) high = mid - 1;
            else low = mid + 1;
        }
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }*/	    
//Median in a row-wise sorted Matrix
/*int count1(vector<vector<int>> &matrix,int R , int mid)
    {
        int cnt = 0;
        for(int i =0;i<R;i++)
        {
            auto it   = upper_bound(matrix[i].begin(),matrix[i].end(),mid);
            int dist = distance(matrix[i].begin(),it);
            cnt += dist;
        }
        return cnt;
    }
    int median(vector<vector<int>> &matrix, int R, int C){
        int low = INT_MAX , high = INT_MIN;
        for(int i =0;i<R;i++)
        {
            low = min(low,matrix[i][0]);
            high = max(high,matrix[i][C - 1]);
        }
        int req = (R*C)/2;
        while(low <= high)
        {
            int mid = low + (high - low)/2;
            int smallequal = count1(matrix,R,mid);
            if(smallequal <= req) low = mid + 1;
            else high = mid - 1;
        }
        return low;
    }*/	    
//Spirally traversing a matrix
/*vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        int left = 0 , right = c - 1 , bottom = r - 1 , top = 0;
        vector<int> ans;
        while(left <= right && top <= bottom)
        {
            for(int i=left;i<=right;i++)
            {
                ans.push_back(matrix[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++)
            {
                ans.push_back(matrix[i][right]);
            }
            right--;
            if(top <= bottom)
            {
                for(int i=right;i>=left;i--)
                {
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if(left <= right)
            {
                for(int i=bottom;i>=top;i--)
                {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
    }*/						   
//Spiral Matrix II(Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.)
/*vector<vector<int>> generateMatrix(int n) {
        if(n == 0)
        {
            return {};
        }
        vector<vector<int>> ans(n,vector<int>(n));
        int num = 1;
        int left = 0 , right = n - 1 , bottom = n - 1 , top = 0;
        while(left <= right && top <= bottom)
        {
            for(int i=left;i<=right;i++)
            {
                ans[top][i] = num;
                num++;
            }
            top++;
            for(int i=top;i<=bottom;i++)
            {
                ans[i][right] = num;
                num++;
            }
            right--;
            if(top <= bottom)
            {
                for(int i=right;i>=left;i--)
                {
                    ans[bottom][i] = num;
                    num++;
                }
                bottom--;
            }
            if(left <= right)
            {
                for(int i=bottom;i>=top;i--)
                {
                    ans[i][left] = num;
                    num++;
                }
                left++;
            }
        }
        return ans;
    }*/
//Find kth element in spiral form Given a matrix of size N x M. You have to find the Kth element which will obtain while traversing the matrix spirally starting from the top-left corner of the matrix.
/*int findK(vector<vector<int>> &a, int r, int c, int k)
    {
        int left = 0 , right = c - 1 , bottom = r - 1 , top = 0;
        int n , m;
        int count = 0;
        while(left <= right && top <= bottom)
        {
            for(int i=left;i<=right;i++)
            {
                n = top;
                m = i;
                count++;
                if(count == k)
                {
                    return a[n][m];
                }
            }
            top++;
            for(int i=top;i<=bottom;i++)
            {
                n = i;
                m = right;
                count++;
                if(count == k)
                {
                    return a[n][m];
                }
            }
            right--;
            if(top <= bottom)
            {
                for(int i=right;i>=left;i--)
                {
                    n = bottom;
                    m = i;
                    count++;
                    if(count == k)
                    {
                        return a[n][m];
                    }
                }
                bottom--;
            }
            if(left <= right)
            {
                for(int i=bottom;i>=top;i--)
                {
                    n = i;
                    m = left;
                    count++;
                    if(count == k)
                    {
                        return a[n][m];
                    }
                }
                left++;
            }
        }
        return -1;
    }*/	
//Function to rotate matrix anticlockwise or clockwise by 90 degrees.
    /*void rotateby90(vector<vector<int> >& arr, int n) 
    { 
        
    for(int i=0;i<n - 1;i++)
	{
	        for(int j=i + 1;j<n;j++)
	        {
	            swap(arr[i][j],arr[j][i]);
	        }
	}
	    //reverse row wise if clockwise and colwise if anti
	    //here row
	for(int i=0;i<n;i++)
	{
	        reverse(arr[i].begin(),arr[i].end());
	}
	//here col
	for(int i=0;i<n/2;i++)
	{
	  for(int j=0;j<n;j++)
	        {
	            swap(arr[i][j],arr[n - i - 1][j]);
	        }
	    }
    }*/
//Kth smallest element in row wise sorted matrix	 
/*int kthSmallest(int mat[MAX][MAX], int n, int k) {
    vector<int> row_pointer(n, 0);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    // Initialize the priority queue with the first element of each row
    for (int i = 0; i < min(n, k); ++i) {
        pq.push({mat[i][0], i});
    }

    int curr = 0;
    while (k--) {
        // Get the smallest element and its row index
        pair<int, int> p = pq.top();
        pq.pop();
        curr = p.first;
        int rowindex = p.second;

        // Move to the next element in the same row, if it exists
        if (row_pointer[rowindex] < n - 1) {
            row_pointer[rowindex]++;
            pq.push({mat[rowindex][row_pointer[rowindex]], rowindex});
        }
    }

    return curr;
}*/	
//Find a common element in all rows of a given row-wise sorted matrix
/*int findCommon(int grid[M][N]) 
{ 
    // A hash map to store count of elements 
    unordered_map<int, int> cnt; 
  
    int i, j; 
  
    for (i = 0; i < M; i++) { 
  
        // Increment the count of first 
        // element of the row 
        cnt[grid[i][0]]++; 
  
        // Starting from the second element 
        // of the current row 
        for (j = 1; j < N; j++) { 
  
            // If current element is different from 
            // the previous element i.e. it is appearing 
            // for the first time in the current row 
            if (grid[i][j] != grid[i][j - 1]) 
                cnt[grid[i][j]]++; 
        } 
    } 
  
    // Find element having count equal to number of rows 
    for (auto ele : cnt) { 
        if (ele.second == M) 
            return ele.first; 
    } 
  
    // No such element found 
    return -1; 
} */
//Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.
/*void recur(int index ,vector<int> &nums, vector<vector<int>> &ans)
    {
        if(index == nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=index;i<nums.size();i++)
        {
            swap(nums[i],nums[index]);
            recur(index + 1,nums,ans);
            swap(nums[i],nums[index]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        recur(0,nums,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }*/
//Given a collection of numbers, nums, that might contain duplicates, return all possible unique permutations in any order.
/*void recur(int index, vector<int> &nums, vector<vector<int>> &ans, set<vector<int>> &seen) {
    if (index == nums.size()) {
        if (seen.find(nums) == seen.end()) {
            ans.push_back(nums);
            seen.insert(nums);
        }
        return;
    }
    for (int i = index; i < nums.size(); i++) {
        swap(nums[i], nums[index]);
        recur(index + 1, nums, ans, seen);
        swap(nums[i], nums[index]); // backtrack
    }
}

vector<vector<int>> permuteUnique(vector<int>& nums) {
    vector<vector<int>> ans;
    set<vector<int>> seen;
    recur(0, nums, ans, seen);
    return ans;
}*/
//Given two arrays of equal size N and an integer K. The task is to check if after permuting both arrays, we get sum of their corresponding element greater than or equal to k i.e Ai + Bi >= K for all i (from 0 to N-1). Return true if possible, else false.
/*bool isPossible(long long a[], long long b[], int n, long long k) {
        // Sort array a in ascending order
        sort(a, a + n);
        // Sort array b in descending order
        sort(b, b + n, greater<long long>());
        
        // Check if sum of corresponding elements is >= k
        for (int i = 0; i < n; i++) {
            if (a[i] + b[i] < k) {
                return false;
            }
        }
        return true;
    }*/
//k largest elements
/*vector<int> kLargest(int arr[], int n, int k) {
        priority_queue<int> pq;
        for(int i=0;i<n;i++){
            pq.push(arr[i]);
        }
        vector<int> ans;
        for (int i = 0; i < k; ++i) {
            ans.push_back(pq.top()); // Get the number with the highest
            pq.pop();
        }
        return ans;
	}*/    
//Top K Frequent Elements
/*vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int> ans;
        priority_queue<pair<int,int>> pq;
        for(auto p:mp){
            pq.push({p.second,p.first});
        }
        for(int i=0;i<k;i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }*/	//can also do it using 2d vector instead of heap by storing map's count it's index and value to its values
//Top k numbers in a stream(in descending order with there frequencies ,  If two numbers have equal frequency, place the smaller number first in the array)
/*vector<vector<int>> kTop(vector<int>& arr, int N, int K) {
        vector<vector<int>> ans;
        unordered_map<int, int> mp;
    
        for (int i = 0; i < N; ++i) {
            mp[arr[i]]++;
            
            // Custom comparator for the priority queue
            auto cmp = [](pair<int, int>& a, pair<int, int>& b) {
                if (a.first == b.first) return a.second > b.second;
                return a.first < b.first;
            };
    
            priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> pq(cmp);
    
            for (const auto& p : mp) {
                pq.push({p.second, p.first});
            }
    
            vector<int> ans1;
            int k = K;
            while (k > 0 && !pq.empty()) {
                ans1.push_back(pq.top().second);
                pq.pop();
                k--;
            }
    
            ans.push_back(ans1);
        }
    
        return ans;
    }*/
//more optimal
/*vector<vector<int>> kTop(vector<int>& arr, int N, int K) {
    vector<vector<int>> ans;
    unordered_map<int, int> freq;
    set<pair<int, int>> sorted_elements;

    for (int i = 0; i < N; ++i) {
        int element = arr[i];

        if (freq.find(element) != freq.end()) {
            sorted_elements.erase({-freq[element], element});
        }

        freq[element]++;
        sorted_elements.insert({-freq[element], element});

        vector<int> ans1;
        auto it = sorted_elements.begin();
        for (int j = 0; j < K && it != sorted_elements.end(); ++j, ++it) {
            ans1.push_back(it->second);
        }

        ans.push_back(ans1);
    }

    return ans;
}
Explanation:
Frequency Map: freq keeps track of the frequency of each element.
Sorted Elements Set: sorted_elements is a set that keeps elements sorted first by frequency (in descending order) and then by the element value (in ascending order) using a pair of {-frequency, element}.
Insert and Erase: For each element in the array, we update its frequency in the map. If the element already exists in the set, we erase it first (to update its position based on the new frequency) and then insert it back with the updated frequency.
Retrieve Top K: To retrieve the top K elements, we iterate through the set and collect the first K elements.*/

//Generate All possible IP Addresses(A valid IP address must be in the form of A.B.C.D, where A, B, C, and D are numbers from 0-255. The numbers cannot be 0 prefixed unless they are 0.)
/*bool check(string s){
        int n = s.size();
        if(n <= 0 || n > 3) return false;
        if(s[0] == '0' && n > 1) return false;
        int p = stoi(s); //string to integer in it
        if(p < 0 || p > 255) return false;
        return true;
    }
    string gen(string &s,int n,int i,int j,int k){
        string s1 = s.substr(0,i + 1);
        string s2 = s.substr(i + 1,j - i);
        string s3 = s.substr(j + 1,k - j);
        string s4 = s.substr(k + 1,n - 1 - k);
        if(check(s1) && check(s2) && check(s3) && check(s4)){
            string s5 = s1+"."+s2+"."+s3+"."+s4;
            return s5;
        }
        return "";
    }
    vector<string> genIp(string &s) {
        vector<string> ans;
        int n = s.size();
        for(int i=0;i<n;i++){
            for(int j=i + 1;j<n;j++){
                for(int k=j + 1;k<n;k++){
                    string st = gen(s,n,i,j,k);
                    if(st.size() > 0){
                        ans.push_back(st);
                    }
                }
            }
        }
        return ans;
    }*/
	  					 	   	 
