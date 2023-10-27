//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    
    int fun(int i ,int pre, int a[], int n,vector<vector<int>> &dp)
    {
      if(i==n)
      return 0;
      if(dp[i][pre+1]!=-1)
      return dp[i][pre+1];
      
      int non = fun(i+1,pre,a,n,dp);
      int pic = 0;
      if(pre==-1 || a[i]>a[pre])
      pic  = 1+fun(i+1,i,a,n,dp);
      
      dp[i][pre+1] = max(pic,non);
      return max(pic,non);
      
    }
    
    int fun1(int n, int a[])
    {
       vector<vector<int>> dp(n+1,vector<int>(n+1,0)); 
       
       for(int i=n-1;i>=0;i--)
       {
           for(int pre=i-1;pre>=-1;pre--)
           {
                  int non = dp[i+1][pre+1];
                  int pic = 0;
                  if(pre==-1 || a[i]>a[pre])
                  pic  = 1+dp[i+1][i+1];
      
                  dp[i][pre+1] = max(pic,non);
           }
       }
       
       return dp[0][0];
    }
    
       int fun2(int n, int a[])
    {
      vector<int> cur(n+1,0), prev(n+1,0);
       
       for(int i=n-1;i>=0;i--)
       {
           for(int pre=i-1;pre>=-1;pre--)
           {
                  int non = prev[pre+1];
                  int pic = 0;
                  if(pre==-1 || a[i]>a[pre])
                  pic  = 1+prev[i+1];
      
                  cur[pre+1] = max(pic,non);
           }
           prev = cur;
       }
       
       return prev[0];
    }
    
    int fun3(int n, int a[])
    {
      vector<int> dp(n,1);
       int ans = 1;
       for(int i=0;i<n;i++)
       {
           for(int pre=0;pre<i;pre++)
           {
                if(a[pre]<a[i])
                dp[i] = max(dp[i],1+dp[pre]);
           }
           ans = max(ans, dp[i]);
       }
       
       return ans;
    }
    
    int fun4(int n, int a[])
    {
        vector<int> arr;
        arr.push_back(a[0]);
       int pre = 0;
        int len = 1;
        for(int i=1;i<n;i++)
        {
            if(arr.back()<a[i])
            {
              len++;
              arr.push_back(a[i]);
            }
            else
            {
            int ind = lower_bound(arr.begin(), arr.end(), a[i])-arr.begin();
             arr[ind] = a[i];
            }
        }
        
        return len;
    }
    
    int longestSubsequence(int n, int a[])
    {
       // your code here
    //   vector<vector<int>> dp(n,vector<int>(n+1,-1));
    //   return fun(0,-1,a,n,dp);
       
     //  return fun1(n,a);
      // return fun2(n,a);
     // return fun3(n,a);
      return fun4(n,a);
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends