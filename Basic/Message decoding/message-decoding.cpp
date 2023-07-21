//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

bool decode (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << decode (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


bool decode (string S)
{
    // your code here
    queue<char> q;
    q.push('h');
    q.push('e');
    q.push('l');
    q.push('l');
    q.push('o');
    for(int i=0;i<S.length();i++)
    {
       if(q.front()==S[i])
       q.pop();
       
       if(q.empty())
       return true;
       
    }
    
    if(q.empty())
     return true;
    else
    return false;
    
}