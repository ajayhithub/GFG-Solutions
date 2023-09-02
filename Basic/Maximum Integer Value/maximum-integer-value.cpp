//{ Driver Code Starts
// Initial temolate for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// user function temolate for C++

class Solution {
  public:
    long long int MaximumIntegerValue(string S) {
        // code here
        long long int ans = S[0]-'0';
        int n = S.length();
        long long int num = S[0]-'0';
        
        for(int i=1;i<n;i++)
        {
            
           ans = max(num*(S[i]-'0'),num+S[i]-'0');
           num = ans;
          
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.MaximumIntegerValue(S) << endl;
    }
    return 0;
}
// } Driver Code Ends