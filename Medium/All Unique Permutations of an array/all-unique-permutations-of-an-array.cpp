//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
  void fun(vector<int> arr,vector<int> &vis,vector<int> &aa,vector<vector<int>> &ans, int n,set<vector<int>> &s)
  {
      if(aa.size()==n)
      {
          if(s.find(aa)==s.end())
             ans.push_back(aa);
             
             
             s.insert(aa);
           return;
      }
      
      for(int i=0;i<n;i++)
      {
          if(!vis[i])
          {
              vis[i] = 1;
              aa.push_back(arr[i]);
              fun(arr,vis,aa,ans,n,s);
               vis[i] = 0;
               aa.pop_back();
          }
      }
  }
  
    vector<vector<int>> uniquePerms(vector<int> arr ,int n) {
        // code here
        vector<vector<int>> ans;
        vector<int> vis(n,0);
         vector<int> aa;
         set<vector<int>> s;
         
         fun(arr,vis,aa,ans,n, s);
         sort(ans.begin(),ans.end());
         return ans;
         
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;
        vector<int> arr(n);
        
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];

        Solution ob;
        vector<vector<int>> res = ob.uniquePerms(arr,n);
        for(int i=0; i<res.size(); i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends