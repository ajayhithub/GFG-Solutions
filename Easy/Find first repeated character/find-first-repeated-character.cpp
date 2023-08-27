//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string firstRepChar(string s)
{
    //code here.
    int n = s.length();
    unordered_map<char,int> mpp;
    for(int i=0;i<n;i++)
    {
        char aa = s[i];
        string as ;
        as += aa;
        
        if(mpp[s[i]]!=0)
        return as;
        
        mpp[s[i]]++;
    }
    
    return "-1";
}