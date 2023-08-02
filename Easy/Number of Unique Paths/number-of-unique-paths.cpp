//{ Driver Code Starts
//Initial template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution
{
    public:
      int fun(int a, int b,map<pair<int,int>,int> &dp)
    {
        if(a==1 && b==1)
        return 1;
        
        if(a==0 || b==0)
        return 0;
        
        if(dp[{a,b}]!=-1)
        return dp[{a,b}];
        
     int l = fun(a-1,b,dp);
     int r = fun(a,b-1,dp);
    
    
      dp[{a,b}] = (l+r);
     return dp[{a,b}];
    }
    //Function to find total number of unique paths.
    int NumberOfPath(int a, int b)
    {
        //code here
        
         map<pair<int,int>,int> dp;
         for (int i = 0; i <= a+1; i++)
         {
            for (int j = 0; j <= b+1; j++)
            {
                dp[{i,j}] = -1;
            }
         }
         
        return fun(a,b,dp);
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
        //taking dimensions of the matrix
        int a,b;
        cin>>a>>b;
        Solution ob;
        //calling NumberOfPath() function
        cout << ob.NumberOfPath(a,b) << endl;
    }
}


// } Driver Code Ends