//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
        // code here
        long long ans = 0;
        long long pre1 = 1;
        long long pre2 = 0;
        for(int i=1;i<n;i++)
        {
          ans = (pre1+pre2)%1000000007;
          pre2 = pre1%1000000007;
          pre1 = ans%1000000007;
        }
        
        
        int t = ans%1000000007;
      
        return t;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends