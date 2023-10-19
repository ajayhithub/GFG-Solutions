//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	
	int fun(vector<int>nums, int amount,int i,vector<vector<int>> &dp)
	{
	    if(amount==0)
	    return 0;
	    if(i==0)
	    {
	       if(amount%nums[0]==0)
	       return amount/nums[0];
	       
	       
	       return 1e7;
	    }
	    if(dp[i][amount]!=-1)
	    return dp[i][amount];
	    
	    int r = fun(nums,amount,i-1,dp);
	    
	    int l = 1e7;
	    if(nums[i]<=amount)
	    l = 1+fun(nums,amount-nums[i],i,dp);
	    
	    dp[i][amount] = min(l,r);
	    return min(l,r);
	}
	
	int MinCoin(vector<int>nums, int amount)
	{
	    // Code here
	    vector<vector<int>> dp(nums.size()+1,vector<int>(amount+1,-1));
	    int ans = fun(nums,amount,nums.size()-1,dp);
	    if(ans>=1e7)
	    return -1;
	   
	   
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, amount;
		cin >> n >> amount;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.MinCoin(nums, amount);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends