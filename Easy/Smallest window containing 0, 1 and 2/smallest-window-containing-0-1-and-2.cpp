//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string S) {
        // Code here
        int ans = INT_MAX;
        int cnt0=0,cnt1=0,cnt2=0;
        
        int p = 0;
        for(int i=0;i<S.length();i++)
        {
              if(S[i] == '0')
              cnt0++;
              else if(S[i] == '1')
              cnt1++;
              else if(S[i] == '2')
              cnt2++;
              
           while(cnt0>0 && cnt1>0 && cnt2>0 && p<i)
           {
              ans = min(ans,i-p+1);
              
              if(S[p] == '0')
              cnt0--;
              else if(S[p] == '1')
              cnt1--;
              else if(S[p] == '2')
              cnt2--;
              
              p++;
           }
          
        }
        
        if(ans == INT_MAX)
        return -1;
        else
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
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}
// } Driver Code Ends