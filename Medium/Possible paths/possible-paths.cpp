//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
  public:
  
  int dfs(vector<int> adj[], int u, int v, int k, vector<vector<int>> &dp, int mod)
  {
      if(u==v && k==0)
      return 1;
      if(k<0)
      return 0;
      if(dp[u][k]!=-1)
      return dp[u][k];
      
     
      int ans = 0;
      for(auto it:adj[u])
      {
            ans += dfs(adj,it,v,k-1,dp,mod)%mod; 
            ans = ans%mod;
      }
      
      
      return dp[u][k] = ans%mod;
  }
  
	int MinimumWalk(vector<vector<int>>&graph, int u, int v, int k){
	    // Code here
	    int n = graph.size();
	    int m = graph[0].size();
	    
	    vector<int> adj[n+1];
	    int mod = 1e9 + 7;
	    for(int i=0;i<n;i++)
	    { 
	         for(int j=0;j<m;j++)
	         {
	             if(graph[i][j] == 1)
	             adj[i].push_back(j); 
	         }
	    }
	    
	    vector<vector<int>> dp(n+1,vector<int>(k+1,-1));
	    return dfs(adj,u,v,k,dp,mod);
	    
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>graph(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> graph[i][j];
			}
		}
		int u, v, k;
		cin >> u >> v >> k;
		Solution obj;
		int ans = obj.MinimumWalk(graph, u, v, k);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends