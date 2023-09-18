//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


int minFlips (string S)
{
    // your code here
    int n = S.length();
    int e1 = 0;
    
    
    for(int i=0;i<n;i++)
    {
      if(i%2==0 && S[i] == '0')
       e1++;
      else if(i%2 != 0 && S[i] == '1')
       e1++;    
    }
    
    int zero = 0;
     for(int i=0;i<n;i++)
    {
      if(i%2==0 && S[i] == '1')
       zero++;
      else if(i%2 != 0 && S[i] == '0')
       zero++;    
    }
    
    if(e1>zero)
    return zero;
    else
    return e1;
    
    
}