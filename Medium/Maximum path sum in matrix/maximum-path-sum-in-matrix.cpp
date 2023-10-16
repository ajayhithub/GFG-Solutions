//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

   int fun(int i,int j,vector<vector<int>>& Matrix, vector<vector<int>> &dp, int N)
	{
	    if(i==0 && j>=0 && j<N)
	    return Matrix[i][j];
	    if(i<0 && (j<0 || j>=N))
	    return 0;
	    if(dp[i][j]!=-1)
	    return dp[i][j];
	    
	    int num = 0;
	    for(int p=-1;p<=1;p++)
	    {
	        int a = 0;
	        if(p+j>=0 && p+j<N)
	        a = fun(i-1,j+p,Matrix,dp,N);
	         
	       num = max(num,a);
	    }
	    
	    dp[i][j] = num + Matrix[i][j];
	    return num + Matrix[i][j];
	}
	
	int fun1(int N, vector<vector<int>> Matrix)
	{
	     vector<vector<int>> dp(N,vector<int>(N,0));
        for(int i=0;i<N;i++)
        dp[0][i] = Matrix[0][i];
        
        for(int i=1;i<N;i++)
        {
             for(int j=0;j<N;j++)
             {
                     int num = 0;
	                 for(int p=-1;p<=1;p++)
	                 {
	                    int a = 0;
	                    if(p+j>=0 && p+j<N)
	                     a = dp[i-1][j+p];
	         
	                     num = max(num,a);
	                  }
	    
	              dp[i][j] = num + Matrix[i][j];
             }
        }
        
        int num = 0;
	    for(int p=0;p<N;p++)
	    {
	        int a = dp[N-1][p];
	        num = max(num,a);
	    }
	    
        return num;
	}

    	int fun2(int N, vector<vector<int>> Matrix)
    	{
    	    vector<int> cur(N,0), pre(N,0);
    	    
    	    for(int i=0;i<N;i++)
    	     pre[i] = Matrix[0][i];
    	      
    	 for(int i=1;i<N;i++)
         {
             for(int j=0;j<N;j++)
             {
               int num = 0;
	           for(int p=-1;p<=1;p++)
	            {
	              int a = 0;
	              if(p+j>=0 && p+j<N)
	               a = pre[j+p];
	         
	               num = max(num,a);
	            }
	    
	            cur[j] = num + Matrix[i][j];
             }
            pre = cur; 
             
          }
    	  
    	 int num = 0;
	    for(int p=0;p<N;p++)
	    {
	        int a = pre[p];
	        num = max(num,a);
	    }
	    
        return num;
 }

    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        // code here
    //      vector<vector<int>> dp(N,vector<int>(N,-1));
    //      int num = 0;
	   // for(int p=0;p<N;p++)
	   // {
	   //    int a = fun(N-1,p,Matrix,dp,N);
	   //     num = max(num,a);
	   // }
	    
    //     return num;
    
   //   return fun1(N,Matrix);
    
    return fun2(N,Matrix);
    
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> Matrix(N, vector<int>(N, 0));
        for(int i = 0;i < N*N;i++)
            cin>>Matrix[(i/N)][i%N];
        
        Solution ob;
        cout<<ob.maximumPath(N, Matrix)<<"\n";
    }
    return 0;
}
// } Driver Code Ends