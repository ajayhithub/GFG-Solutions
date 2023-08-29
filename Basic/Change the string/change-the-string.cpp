//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    
    string modify (string s)
    {
        // your code here
        string ans = "";
        int n = s.length();
        if(s[0]>=65 && s[0]<=90)
        {
            for(int i=0;i<n;i++)
            {
               if(s[i]>=65 && s[i]<=90)
                ans += s[i];
                else if(s[i]>=97 && s[i]<=122)
                ans += s[i]-32;
            }
        }
        else if(s[0]>=97 && s[0]<=122)
        {
             for(int i=0;i<n;i++)
             {
                if(s[i]>=97 && s[i]<=122)
                ans += s[i];
                else if(s[i]>=65 && s[i]<=90)
                ans += s[i]+32;
             }
        }
        
        return ans;
        
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
		cout << ob.modify (s) << endl;
	}
}
// } Driver Code Ends