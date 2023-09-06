//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long performOperation(long long n);
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        cout<<performOperation(n)<<endl;
    }
}
// } Driver Code Ends


long long performOperation(long long n)
{
    //code here.
 
    string s = to_string(n);
    int l = s.length();
    long long m = 0;
    
     string ss = to_string(n);
    long long min = 0;
    for(int i=0;i<l;i++)
    {
       if(s[i] == '5')
       {
           s[i] = '6';
       }
       
        if(ss[i] == '6')
       {
           ss[i] = '5';
       }
       
    }
    
    long long t = 1;
    long long tt = 1;
    
      for(int i=l-1;i>=0;i--)
      {
        m = m+t*(s[i]-'0');
        t = t*10;
        
        min = min+tt*(ss[i]-'0');
        tt = tt*10;
      }
 
 
    
     
   // cout<<m<<" "<<min<<" ";
    return m+min;
    
}
