//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
  
     int fun(int price[], int i, int sum, vector<vector<int>> &dp)
  {
      if(i==0)
      {
          return sum*price[0];
      }
      if(dp[i][sum]!=-1)
      return dp[i][sum];
      
       int non = fun(price,i-1,sum,dp);
       int tak = -1e7;
      if(i+1<=sum)
       tak = price[i] + fun(price,i,sum-i-1, dp);
       
       dp[i][sum] = max(non,tak);
       return max(non,tak);
  }
  
    int cutRod(int price[], int n) {
        //code here
        
          vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
         return fun(price,n-1,n, dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends