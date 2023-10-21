//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
     int fun(vector<int> price, int n, int ind ,int buy, int cap ,vector<vector<vector<int>>> &dp)
    {
       
        if(ind==n || cap==0)
        return 0;
        if(dp[ind][buy][cap]!=-1)
        return dp[ind][buy][cap];
        
        int pro = 0;
        if(buy)
        {
          pro = max(-price[ind]+fun(price,n,ind+1,0,cap,dp),fun(price,n,ind+1,1,cap,dp));
        }
        else
        {
          pro = max(price[ind]+fun(price,n,ind+1,1,cap-1,dp),fun(price,n,ind+1,0,cap,dp)); 
          
        }
      
        
        dp[ind][buy][cap] = pro;
        return dp[ind][buy][cap];
    }

int fun1(vector<int>&price)
{
     int n = price.size();
   vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(2,vector<int>(3,0)));
   
   for(int i=n-1;i>=0;i--)
   {
       for(int buy=0;buy<=1;buy++)
       {
           for(int cap=1;cap<=2;cap++)
           {
              int pro = 0;
             if(buy)
             {
                 pro = max(-price[i]+dp[i+1][0][cap],dp[i+1][1][cap]);
              }
              else
              {
                pro = max(price[i]+dp[i+1][1][cap-1],dp[i+1][0][cap]); 
          
               }
      
                dp[i][buy][cap] = pro;
           }
       }
   }
   
   return dp[0][1][2];
}


int maxProfit(vector<int>&price){
    //Write your code here..
     int n = price.size();
    //  vector<vector<vector<int>>> dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
    //   return fun(price,n,0,1,2,dp);
    
    return fun1(price);
}

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        cout<<maxProfit(price)<<endl;
    }

}

// } Driver Code Ends