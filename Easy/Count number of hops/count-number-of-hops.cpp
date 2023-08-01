//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    
  long long fun(int n,vector<long long> &dp)
    {
        if(n==0)
        return 1;
        
        if(n<0)
        return 0;
        
        if(dp[n]!=-1)
        return dp[n];
        
        
      long long a = fun(n-1,dp);
      long long b = fun(n-2,dp);
      long long c = fun(n-3,dp);
    
      dp[n] = a%1000000007+b%1000000007+c%1000000007;
      return dp[n];  
    }
    
    long long countWays(int n)
    {
      // your code here
      vector<long long> dp(n+1,-1);
      long long ans = fun(n,dp);
      return ans%1000000007;
        
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends