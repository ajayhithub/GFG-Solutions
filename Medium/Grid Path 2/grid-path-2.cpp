//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
    int fun(int i, int j, vector<vector<int>> &grid,vector<vector<int>> &dp, int mod)
  {
      if(i==0 && j==0)
      return 1;
      if(i<0 || j<0)
      return 0;
      if(grid[i][j]==1)
      return 0;
      if(dp[i][j]!=-1)
      return dp[i][j];
      
      int l = fun(i-1,j,grid,dp,mod);
      int r = fun(i,j-1,grid,dp,mod);
      
      dp[i][j] = (l+r)%mod;
      return (l+r)%mod;
  }
  
  int tabu(int n, int m, vector<vector<int>> &grid)
  {
        vector<vector<int>> dp(n,vector<int>(m,0));
        dp[0][0] = 1;
       
        int mod = pow(10,9)+7;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 && j==0)
                continue;
                
                int l=0,r=0;
                if(i>=1)
                l = dp[i-1][j];
                if(j>=1)
                r = dp[i][j-1];
                
                if(grid[i][j]==1)
                dp[i][j] = 0;
                else
                dp[i][j] = (l+r)%mod;
                
            }
        }
        
        return dp[n-1][m-1];
  }
  
   int opt(int n, int m, vector<vector<int>> &grid)
   {
       vector<int> cur(m,0) , pre(m,0);
        int mod = pow(10,9)+7;
        
        cur[0] = 1;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 && j==0)
                continue;
                
                int l=0,r=0;
                if(j>=1)
                l = cur[j-1];
                if(i>=1)
                r = pre[j];
                       
                if(grid[i][j]==1)
                cur[j] = 0;
                else
                cur[j] = (l+r)%mod;
                
            }
            pre = cur;
        }
        
        return cur[m-1];
        
   }
   
    int totalWays(int n, int m, vector<vector<int>>& grid) {
        // Code here
        
      if(grid[n-1][m-1]==1 || grid[0][0]==1)
         return 0;
        
       // vector<vector<int>> dp(n,vector<int>(m,-1));
       // int mod = pow(10,9)+7;
        // return fun(n-1,m-1,grid,dp,mod);
        
      //  return tabu(n,m,grid);
       
        return opt(n,m,grid);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int i = 0; i < m; ++i) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            grid.push_back(temp);
        }

        Solution obj;
        cout << obj.totalWays(n, m, grid) << "\n";
    }
    return 0;
}
// } Driver Code Ends