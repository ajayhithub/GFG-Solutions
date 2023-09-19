//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
// #define ll long long
class Solution{
public:
    vector<ll> nthRowOfPascalTriangle(int n) {
        // code 
        vector<vector<ll>> arr;
        long long mod = pow(10,9)+7;
        
        for(int i=0;i<n;i++)
        {
            vector<ll> vis;
            for(int j=0;j<=i;j++)
            {
               if(j==0 || j==i)
               vis.push_back(1);
               else
               {
                   long long num = (arr[i-1][j-1]+arr[i-1][j])%mod;
                    vis.push_back(num);
               }
               
            }
            arr.push_back(vis);
        }
        
        return arr[n-1];
    }
};


//{ Driver Code Starts.


void printAns(vector<ll> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends