//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int maxlength(string s);
int main()
{
int t;
cin>>t;
while(t--)
{
string s;
cin>>s;
cout<<maxlength(s)<<endl;
}
return 0;
}

// } Driver Code Ends


int maxlength( string s)
{
// your code here
  int ans = -1e7;
  int n = s.length();
  int cnt = 0;
  for(int i=0;i<n;i++)
  {
      if(s[i]=='1')
      cnt++;
      else
      {
          ans = max(ans,cnt);
          cnt = 0;
      }
  }
  
  ans = max(ans,cnt);
  if(ans == -1e7)
  return -1;
  else
  return ans;
    
}