//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	
	int fun(string str1,string str2, int i, int j, vector<vector<int>> &dp)
	{
	    if(i<0 || j<0)
	    return 0;
	    if(dp[i][j]!=-1)
	    return dp[i][j];
	    
	    if(i!=j && str1[i]==str2[j])
	    return dp[i][j] = 1+fun(str1,str2,i-1,j-1,dp);
	    else 
	    return dp[i][j] = max(fun(str1,str2,i,j-1,dp),fun(str1,str2,i-1,j,dp));
	}
	
	int fun1(string str)
	{
	        int n = str.length();
		    vector<vector<int>> dp(n+1,vector<int>(n+1,0));
		  
		    
		    for(int i=1;i<=n;i++)
		    {
		        for(int j=1;j<=n;j++)
		        {
		            if(i!=j && str[i-1]==str[j-1])
	                 dp[i][j] = 1+dp[i-1][j-1];
	                else 
	                dp[i][j] = max(dp[i][j-1],dp[i-1][j]);   
		        }
		    }
		    
		    return dp[n][n];
		    
	}
	
	  int LongestRepeatingSubsequence(string str){
		    // Code here
		    
		  //  int n = str.length();
		  //  vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
		  //  return fun(str,str,n-1,n-1,dp);
		    
		    return fun1(str);
		    
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
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends