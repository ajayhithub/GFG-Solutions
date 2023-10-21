//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
  
     int fun(vector<int> prices, int n, int ind ,int buy, vector<vector<int>> &dp)
    {
        if(ind==n)
        return 0;
        if(dp[ind][buy]!=-1)
        return dp[ind][buy];
        
        int pro = 0;
        if(buy)
        {
          pro = max(-prices[ind]+fun(prices,n,ind+1,0,dp),fun(prices,n,ind+1,1,dp));
        }
        else
        {
          pro = max(prices[ind]+fun(prices,n,ind+1,1,dp),fun(prices,n,ind+1,0,dp)); 
          
        }
        
        dp[ind][buy] = pro;
        return pro;
    }
  
  int fun1(int n,vector<int>&price)
{
   vector<vector<int>> dp(n+1,vector<int>(2,0));
   
   for(int i=n-1;i>=0;i--)
   {
       for(int buy=0;buy<=1;buy++)
       {
              int pro = 0;
             if(buy)
             {
                 pro = max(-price[i]+dp[i+1][0],dp[i+1][1]);
              }
              else
              {
                pro = max(price[i]+dp[i+1][1],dp[i+1][0]); 
          
               }
      
                dp[i][buy] = pro;
       }
   }
   
   return dp[0][1];
}
  
    int stockBuyAndSell(int n, vector<int> &prices) {
        // code here
        // vector<vector<int>> dp(n,vector<int>(2,-1));
        // return fun(prices,n,0,1,dp);
        
        return fun1(n,prices);
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        vector<int> prices(n);
        Array::input(prices,n);
        
        Solution obj;
        int res = obj.stockBuyAndSell(n, prices);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends