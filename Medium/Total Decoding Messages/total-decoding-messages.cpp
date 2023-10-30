//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	
	int fun(string str, int i, int n, int mod, int t, vector<vector<int>> &dp)
	{
	    if(i>=n)
	    {
	      if(t==1)
	      return 0;
	      else
	      return 1;
	    }
	    if(dp[i][t]!=-1)
	    return dp[i][t];
	    
	    int l = 0;
	    if(str[i]=='0')
	     l = fun(str,i+1,n,mod,1,dp);
	    else
	     l = fun(str,i+1,n,mod,t,dp);
	    
	    int r = 0;
	    if((str[i]-'0')*10+str[i+1]-'0'<27 && i+1<n && str[i]!='0')
	    {
	    // cout<<(str[i]-'0')*10+str[i+1]-'0'<<endl;   
	       r = fun(str,i+2,n,mod,t,dp);
	    }   
	    
	    dp[i][t] = (l+r)%mod;
	    return (l+r)%mod;
	}
	
		int CountWays(string str){
		    // Code here
		    int n = str.length();
		    int mod = pow(10,9)+7;
		    vector<vector<int>> dp(n+1,vector<int>(2,-1));
		    return fun(str,0,n,mod,0,dp);
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends