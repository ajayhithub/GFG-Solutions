//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
    void fun(int K,int N, vector<vector<int>> &ans,vector<int> arr, int i, int sum)
    {
        if(sum == N && arr.size()==K)
        {
            ans.push_back(arr);
            return; 
        }
        if(arr.size()>K)
        return;
        if(i>9)
        return;
        
        sum += i;
        arr.push_back(i);
        fun(K,N,ans,arr,i+1,sum);
        sum -= i;
        arr.pop_back();
       // if(i<=9)
        fun(K,N,ans,arr,i+1,sum);
    
    }
  
    vector<vector<int>> combinationSum(int K, int N) {
        // code here
        vector<vector<int>> ans;
        vector<int> arr;
        
        fun(K,N,ans,arr,1,0);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K >> N;

        Solution obj;
        vector<vector<int>> ans = obj.combinationSum(K, N);
        sort(ans.begin(), ans.end());
        for (auto &arr : ans) {
            for (auto it : arr) cout << it << ' ';
            cout << endl;
        }
    }
    return 0;
}
// } Driver Code Ends