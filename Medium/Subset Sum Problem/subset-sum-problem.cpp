//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:

bool fun(vector<int>arr, int sum, int i,int n, vector<vector<int>> &dp)
{
    if(sum == 0)
    return true;
     if(sum < 0)
    return false;
    if(i>=n)
    return false;
    if(dp[i][sum] != -1)
    return dp[i][sum];
    
    bool l = fun(arr,sum-arr[i],i+1,n,dp);
    bool r = fun(arr,sum,i+1,n,dp);
    
    dp[i][sum] = (l||r);
    return (l||r);
}

    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        vector<vector<int>> dp(arr.size(),vector<int>(sum+1,-1));
        return fun(arr,sum,0,arr.size(),dp);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends