//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	
	int fun(int arr[], int i,int pre, int n, vector<vector<int>> &dp)
	{
	    if(i==n)
	    return 0;
	    if(dp[i][pre+1]!=-1)
	    return dp[i][pre+1];
	    
	    int r = fun(arr,i+1,pre,n,dp);
	    
	    int l = -1e9;
	    if(pre==-1 || arr[i]>arr[pre])
	    l = arr[i] + fun(arr,i+1,i,n,dp);
	    
	    dp[i][pre+1] = max(l,r);
	    return max(l,r);
	}
	
	int fun1(int arr[], int n)
	{
	    vector<vector<int>> dp(n+1, vector<int>(n+1,0));
	    
	    for(int i=n-1;i>=0;i--)
	    {
	        for(int pre=i-1;pre>=-1;pre--)
	        {
	           int r = dp[i+1][pre+1];
	    
	          int l = -1e9;
	          if(pre==-1 || arr[i]>arr[pre])
	           l = arr[i] + dp[i+1][i+1];
	    
	          dp[i][pre+1] = max(l,r); 
	        }
	    }
	    
	    return dp[0][0];
	}
	
	int fun2(int arr[], int n)
	{
	    vector<int> dp(n,0);
         for(int i=0;i<n;i++)
         dp[i] = arr[i];
         
	    int ans = 0;
	     for(int i=0;i<n;i++)
	    {
	        for(int pre=0;pre<i;pre++)
	        {
	           if(arr[i]>arr[pre])
	           dp[i] = max(dp[i],arr[i]+dp[pre]);
	        }
	        ans = max(ans,dp[i]);
	    }
	    
	    return ans;
	}
	
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	   // vector<vector<int>> dp(n+1, vector<int>(n+1,-1));
	   // return fun(arr,0,-1,n,dp);
	   
	  // return fun1(arr,n);
	  
	  return fun2(arr,n);
	   
	}  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends