//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  //Your code here 
  string ans = "";
  int n = src.length();
  int cnt = 1;
  for(int i=1;i<n;i++)
  {
      if(src[i-1] != src[i])
      {
        ans += src[i-1];
        ans += '0'+cnt;
        
        cnt = 0;
      }
      cnt++;
  }
  
        ans += src[n-1];
        ans += '0'+cnt;
        
  return ans;
}     
 
