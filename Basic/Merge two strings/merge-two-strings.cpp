//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

string merge (string s1, string s2);

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << merge (s1, s2) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends



string merge (string S1, string S2)
{
    // your code here
    string ans = "";
    
    int n = S1.length();
    int nn = S2.length();
    
    int i = 0;
    int j = 0;
    
    while(i<n && j<nn)
    {
        ans += S1[i];
        ans += S2[j];
        
        i++;
        j++;
    }
    while(i<n)
    {
        ans += S1[i];
        i++;
    }
    
     while(j<nn)
    {
        ans += S2[j];
        j++;
    }
    
    return ans;
}