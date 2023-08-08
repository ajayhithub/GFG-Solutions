//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    
    bool dfs(int node, vector<int> vis, vector<int> adj[],int cnt,int N)
    {
       if(cnt == N-1)
       {
         return true;    
       }
       
       
       vis[node] = 1;
       cnt++;
       for(auto it:adj[node])
       {
           if(!vis[it])
           {
               if(dfs(it,vis,adj,cnt,N)==true)
               return true;
           }
       }
       
       return false;    
    }
    
    bool check(int N,int M,vector<vector<int>> Edges)
    {
        // code here
        vector<int> adj[N+1];
        for(auto it:Edges)
        {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        
      vector<int> vis(N+1,0);
      int cnt = 0;
      for(int i=1;i<=N;i++)
      {
         if(dfs(i,vis,adj,cnt,N)==true)
          return true;
      }
      return false;
        
    }
};
 

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
    	int N,M,X,Y;
    	cin>>N>>M;
    	vector<vector<int>> Edges;
    	for(int i=0;i<M;i++)
    	{
    		cin>>X>>Y;
    		Edges.push_back({X,Y});
    	}
    	Solution obj;
    	if(obj.check(N,M,Edges)){
    		cout<<"1"<<endl;
    	}
    	else
    	cout<<"0"<<endl;
	}
}
// } Driver Code Ends