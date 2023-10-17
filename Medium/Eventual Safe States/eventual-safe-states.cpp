//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool fun(int node,vector<int> adj[],int vis[], int path[], int ch[])
   {
       vis[node] = 1;
       path[node] = 1;
       ch[node] = 0;
       
       for(auto i:adj[node])
       {
           if(!vis[i])
           {
             if(fun(i,adj,vis,path,ch)==true)
             {
                 ch[node] = 0;
                 return true;
             }
           }
           else if(path[i]==1)
           {
               ch[node] = 0;
                return true;
           }
       }
       
       ch[node] = 1;
       path[node] = 0;
       return false;
   }
  
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        // code here
        int vis[V] = {0};
        int path[V] = {0};
        int ch[V] = {0};
        
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            fun(i,adj,vis,path,ch);
        }
        
        vector<int> ans;
        for(int i=0;i<V;i++)
        {
            if(ch[i]==1)
            ans.push_back(i);
        }
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int V, E;
        cin >> V >> E;
        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends