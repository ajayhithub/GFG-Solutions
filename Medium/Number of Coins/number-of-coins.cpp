//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	
	int fun(int i,int coins[], int M, int V,vector<vector<int>> &dp)
	{
	    if(i==0 && V%coins[0] == 0)
	    {
	        return V/coins[0];
	    }
	   else if(i==0)
	   return 1e8;
	   if(dp[i][V]!=-1)
	   return dp[i][V];
	    
	    
	    int non = fun(i-1,coins,M,V,dp);
	    
	    int tak = 1e8;
	    if(coins[i]<=V)
	    tak = 1+fun(i,coins,M,V-coins[i],dp);
	    
	    return dp[i][V] = min(tak,non);
	}
	
	int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	    vector<vector<int>> dp(M+1,vector<int>(V+1,-1));
	    int ans = fun(M-1,coins,M,V, dp);
	    if(ans >= 1e8)
	    return -1;
	    else
	    return ans;
	} 
	  
};

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends