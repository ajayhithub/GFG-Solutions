//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	
	 int fun1(int n, int m, string s1, string s2)
    {
         vector<vector<int>> dp(n+1,vector<int>(m+1,0));
         
         for(int i=1;i<=n;i++)
         {
             for(int j=1;j<=m;j++)
             {
                 int l = 0;
                 if(s1[i-1]==s2[j-1])
                 l = 1+dp[i-1][j-1];
        
                 int r = max(dp[i][j-1],dp[i-1][j]);
                 dp[i][j] = max(l,r);
             }
         }
         
         return dp[n][m];
    }
	
	int minOperations(string str1, string str2) 
	{ 
	    // Your code goes here
	    
	    int n =  fun1(str1.length(),str2.length(),str1,str2);
	    
	    int del =  str1.length()-n;
	    int ins =  str2.length()-n;
	   
	    return del+ins;
	    
	} 
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends