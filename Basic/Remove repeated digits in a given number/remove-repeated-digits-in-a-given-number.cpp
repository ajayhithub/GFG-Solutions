//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

long long int modify (long long int n);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n; cin >> n;
        cout << modify (n) << endl;
    }
    return 0;
}
// Contributed By: Pranay Bansal

// } Driver Code Ends



long long int modify (long long int N)
{
    // your code here
    string aa = to_string(N);
    int n = aa.length();
    
    string t = "";
       t += aa[0];
    
    for(int i=1;i<n;i++)
    {
        if(aa[i-1]!=aa[i])
        t += aa[i];
    }
    
    long long int ans  = 0;
    long long int tt  = 1;
    int nn = t.length();
    
    for(int i=nn-1;i>=0;i--)
    {
        ans += (t[i]-'0')*tt;
        tt = tt*10;
        
    }


    return ans;
    
}