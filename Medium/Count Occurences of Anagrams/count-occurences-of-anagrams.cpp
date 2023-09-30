//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	     
	     int ans = 0;
	     vector<int> mpp(256,0);
	     vector<int> mp(256,0);
       	 int p = pat.length();
       	 int t = txt.length();
       	 int i=0, j=0, cnt = 0;
       	 
       	 for(int i=0;i<p;i++)
       	 {
       	    mpp[pat[i]-'a']++; 
       	 }
       	 
       	 while(j<t)
       	 {
       	    if(mp[txt[j]-'a']<mpp[txt[j]-'a']) 
       	    cnt++;
       	  
       	    mp[txt[j]-'a']++;
       	    while(cnt == p)
       	    {
       	        if(p == j-i+1)
       	        ans++;
       	        
       	        if(mp[txt[i]-'a']==mpp[txt[i]-'a']) 
       	         cnt--;
       	         
       	        
       	        mp[txt[i]-'a']--;
       	        i++;
       	    }
       	    
       	     j++;
       	 }
	      
	     return ans; 
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends