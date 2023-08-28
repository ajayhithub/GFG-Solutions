//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int isPossible (string s);

int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		if (isPossible (s))
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int isPossible (string S)
{
    // your code here
    int n = S.length();
   
    if(n%2==0)
    {
         unordered_map<char,int> mpp;
       for(int i=0;i<n;i++)
       {
           mpp[S[i]]++;
       }
       int t = 1;
       for(auto it:mpp)
       {
           if(it.second%2 != 0)
           {
             t = 0;
             break;
           }
           
       }
       return t;
    }
    else
    {
         unordered_map<char,int> mpp;
         for(int i=0;i<n;i++)
       {
           mpp[S[i]]++;
       }
       int t = 0;
       for(auto it:mpp)
       {
           if(it.second%2 != 0)
           {
             t++;
           }
           
           if(t>1)
           return 0;
           
       }
       return 1;
    }
}