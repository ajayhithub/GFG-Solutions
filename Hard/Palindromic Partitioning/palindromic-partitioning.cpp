//{ Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

   bool chk(int i, int j, string s)
   {
       while(i<=j)
       {
           if(s[i]!=s[j])
           return false;
           
           i++;
           j--;
       }
       
       return true;
   }

  int fun(int i, int n ,string str,vector<int> &dp)
  {
      if(i==n)
      return 0;
      if(dp[i]!=-1)
      return dp[i];
      
      int mini = 1e9;
      for(int j=i;j<n;j++)
      {
          if(chk(i,j,str))
          {
             int par = 1+fun(j+1,n,str,dp);
             mini = min(mini,par);
          }
      }
      
      dp[i] = mini;
      return mini;
  }

    int palindromicPartition(string str)
    {
        // code here
        int n = str.length();
        vector<int> dp(n+1,-1);
        return fun(0,n,str, dp)-1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}
// } Driver Code Ends