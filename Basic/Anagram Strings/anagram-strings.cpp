//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int areAnagram(string S1, string S2) {
        // code here
        unordered_map<char,int> mpp;
        int n = S2.length();
        for(int i=0;i<n;i++)
        {
            mpp[S2[i]]++;
        }
        
        int nn = S1.length();
        for(int i=0;i<nn;i++)
        {
           mpp[S1[i]]--; 
        }
        

        for(auto it:mpp)
        {
            if(it.second != 0)
            return 0;
        }
        
        return 1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S1, S2;
        cin >> S1;
        cin >> S2;
        Solution ob;
        cout << ob.areAnagram(S1, S2) << endl;
    }
    return 0;
}

// } Driver Code Ends