//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
public:
    bool passed (string s) {
        //code here.
        
        int n = s.length();
        
        unordered_map<char,int> mpp;
        for(int i=0;i<n/2;i++)
        {
           mpp[s[i]]++; 
        }
        
    
        if(n%2 != 0)
        n = n/2 + 1;
        else
        n = n/2;
        
        int nn = s.length();
        for(int i=n;i<nn;i++)
        {
           mpp[s[i]]--; 
        }
        
        for(auto it:mpp)
        {
            if(it.second != 0)
            return false;
        }
        return true;
    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        if (ob.passed (s))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
// } Driver Code Ends