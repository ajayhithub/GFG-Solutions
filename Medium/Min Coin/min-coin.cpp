//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	
	int fun(vector<int>nums, int amount,int i,vector<vector<int>> &dp)
	{
	   // if(amount==0)
	   // return 0;
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
	
		int fun1(vector<int>nums, int amount)
		{
		    vector<vector<int>> dp(nums.size()+1,vector<int>(amount+1,1e7));
		   
		   for(int t=0;t<=amount;t++)
		   {
              if(t%nums[0]==0)
	          dp[0][t] = t/nums[0];
		   }

		    int n = nums.size();
		    for(int i=1;i<n;i++)
		    {
		        for(int t=0;t<=amount;t++)
		        {
		            int non = dp[i-1][t];
		            int tak = 1e7;
		            if(nums[i]<=t)
		            tak = 1 + dp[i][t-nums[i]];
		            
		            dp[i][t] = min(non,tak);
		          //  cout<<dp[i][t]<<" ";
		        }
		    //    cout<<endl;
		    }
		    
		    if(dp[n-1][amount] >= 1e7)
		    return -1;
		    
		    
		   return dp[n-1][amount]; 
		   
		}
	
	int MinCoin(vector<int>nums, int amount)
	{
	    // Code here
	   // vector<vector<int>> dp(nums.size()+1,vector<int>(amount+1,-1));
	   // int ans = fun(nums,amount,nums.size()-1,dp);
	   // if(ans>=1e7)
	   // return -1;
	   
	   // return ans;
	    
	    return fun1(nums,amount);
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