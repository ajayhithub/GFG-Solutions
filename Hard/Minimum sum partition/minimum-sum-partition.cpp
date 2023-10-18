//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
  
  int fun(int n, int arr[], int tsum, int i, int num, vector<vector<int>> &dp)
  {
      if(i==n)
      return abs(num-(tsum-num));
      else if(dp[i][num] != -1)
      return dp[i][num];
      
    
    int l = fun(n,arr,tsum,i+1,num+arr[i],dp);
    int r =  fun(n,arr,tsum,i+1,num,dp);
     
     dp[i][num]  = min(l,r);
     return min(l,r);
  }
  
  
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int tsum = 0;
	   for(int i=0;i<n;i++)
	   tsum += arr[i];
	   
	   vector<vector<int>> dp(n,vector<int>(tsum+1,-1));
	   return fun(n,arr,tsum,0,0,dp);
	  
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
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends