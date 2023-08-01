//{ Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    
  long long fun(long long n, vector<long long>&ans, vector<long long> &dp)
    {
        if(n<=1)
        return n;
        
        if(dp[n]!=-1)
        return dp[n];
        
      long long l = fun(n-1,ans,dp);
      long long r = fun(n-2,ans,dp);
      
      ans.push_back(l+r);
      return dp[n] = l+r;
    }
    
    vector<long long> printFibb(int n) 
    {
        //code here
        vector<long long>ans;
        ans.push_back(1);
        vector<long long> dp(n+1,-1);
        fun(n,ans,dp);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
 {
     //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking number of elements
        int n;
        cin>>n;
        Solution obj;
        //calling function printFibb()
        vector<long long> ans = obj.printFibb(n);
        
        //printing the elements of vector
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends