//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
  long long int fun(int coins[], int i, int sum, vector<vector<long long int>> &dp)
  {
      if(i==0)
      {
          if(sum%coins[0] == 0)
          return 1;
          else
          return 0;
      }
      if(dp[i][sum]!=-1)
      return dp[i][sum];
      
      long long int non = fun(coins,i-1,sum,dp);
      long long int tak = 0;
      if(coins[i]<=sum)
      tak = fun(coins,i,sum-coins[i], dp);
       
       dp[i][sum] = non+tak;
       return non+tak;
  }
  
    long long int count(int coins[], int N, int sum) {

        // code here
        vector<vector<long long int>> dp(N+1,vector<long long int>(sum+1,-1));
        return fun(coins,N-1,sum, dp);
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends