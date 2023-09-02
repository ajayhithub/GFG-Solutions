//{ Driver Code Starts
// CPP program to print the number which
// contain the digit d from 0 to n
#include <bits/stdc++.h>
using namespace std;
vector<int> solve(int n, int d);


int main() {
    int t, n, d;
    cin >> t;
    while (t--) {
        cin >> n >> d;
        vector<int> v = solve(n, d);
        for (auto it : v) cout << it << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends


vector<int> solve(int n, int d)
{
    //code here
    vector<int> ans;
    
    for(int i=0;i<=n;i++)
    {
        string s = to_string(i);
        int nn = s.length();
        for(int j=0;j<nn;j++)
        {
            if(s[j]-'0' == d)
            {
               ans.push_back(i);
               break;   
            }
        }
        
    }
    if(ans.size() == 0)
    ans.push_back(-1);
    
    return ans;
    
}