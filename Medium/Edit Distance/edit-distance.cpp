//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
  int fun(int i, int j, string s, string t, vector<vector<int>> &dp)
  {
      if(i<0)
      return j+1;
      if(j<0)
      return i+1;
      if(dp[i][j]!=-1)
      return dp[i][j];
      
      int l = 1e9, r = 1e9;
      if(s[i]==t[j])
      l = fun(i-1, j-1, s,t,dp);
      else
      {
        r = 1+min(fun(i-1, j, s,t,dp) , min(fun(i, j-1, s,t,dp),fun(i-1, j-1, s,t,dp)));
      }
      
      dp[i][j] = min(l,r);
      return min(l,r);
  }
  
    int editDistance(string s, string t) {
        // Code here
        int n = s.length();
        int m = t.length();
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        return fun(n-1, m-1, s,t,dp);    
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends