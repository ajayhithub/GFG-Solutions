//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
  int fun(int i, int a , int b, int n, int m ,vector<vector<int>>& grid,vector<vector<vector<int>>> &dp)
  {
     if(a<0 || a>=m || b<0 || b>=m)
     return 0;
     if(i==n-1)
     {
         if(a==b)
         return grid[i][a];
         else
         return grid[i][a]+grid[i][b];
     }
     if(dp[i][a][b] != -1)
     return dp[i][a][b];
    
      
      int num = 0;
      for(int p=-1;p<=1;p++)
      {
         
         for(int q=-1;q<=1;q++)
         {
           int aa=0;
           if(a==b)
           aa = grid[i][a] + fun(i+1,a+p,b+q,n,m,grid,dp);
           else
           aa = grid[i][a] + grid[i][b] + fun(i+1,a+p,b+q,n,m,grid,dp);
         
           num = max(num,aa);
         }
      }
      
      dp[i][a][b] = num;
      return num;
      
  }
  
    int solve(int n, int m, vector<vector<int>>& grid) {
        // code here
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(m,vector<int>(m,-1)));
        return fun(0,0,m-1,n,m,grid,dp);
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
        for (int i = 0; i < n; i++) {
            vector<int> temp;
            for (int j = 0; j < m; j++) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            grid.push_back(temp);
        }

        Solution obj;
        cout << obj.solve(n, m, grid) << "\n";
    }
    return 0;
}
// } Driver Code Ends