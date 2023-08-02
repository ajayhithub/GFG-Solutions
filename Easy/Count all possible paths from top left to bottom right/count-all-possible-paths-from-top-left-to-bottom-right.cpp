//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  
    long long int fun(int m, int n,map<pair<int,int>,int> &dp)
    {
        if(m==1 && n==1)
        return 1;
        
        if(m==0 || n==0)
        return 0;
        
        if(dp[{m,n}]!=-1)
        return dp[{m,n}];
        
    long long int l = fun(m-1,n,dp);
    long long int r = fun(m,n-1,dp);
    
    long long int a = pow(10,9)+7;
    
      dp[{m,n}] = (l+r)%a;
     return dp[{m,n}];
    }
  
    long long int numberOfPaths(int m, int n){
        // code here
        // long long int t = m*n+2;
         map<pair<int,int>,int> dp;
         for (int i = 0; i <= m+1; i++)
         {
            for (int j = 0; j <= n+1; j++)
            {
                dp[{i,j}] = -1;
            }
         }
         
        return fun(m,n,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> m >> n;
        Solution ob;
        cout<<ob.numberOfPaths(m,n)<<endl;
    }
    return 0;
}

// } Driver Code Ends