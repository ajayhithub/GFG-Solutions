//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
  int fun(int i,int j,int n,vector<vector<int>>& triangle, vector<vector<int>> &dp)
  {
      if(i==n-1 && j==triangle[n-1].size())
      return triangle[i][j];
      if(dp[i][j]!=-1)
      return dp[i][j];
      
       int b=0 ,c=0;
       
       if(i+1<n && j<triangle[i+1].size())
       b = fun(i+1,j,n,triangle,dp);
       if(i+1<n && j<triangle[i+1].size())
       c = fun(i+1,j+1,n,triangle,dp);
       
       dp[i][j] = min(b,c) + triangle[i][j];
       return min(b,c) + triangle[i][j];
  }
  
    int minimizeSum(int n, vector<vector<int>>& triangle) {
        // Code here
        vector<vector<int>> dp(n,vector<int>(n,-1));
       return fun(0,0,n,triangle,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> triangle;

        for (int i = 0; i < n; i++) {
            vector<int> temp;
            for (int j = 0; j <= i; j++) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            triangle.push_back(temp);
        }
        Solution obj;
        cout << obj.minimizeSum(n, triangle) << "\n";
    }
    return 0;
}
// } Driver Code Ends