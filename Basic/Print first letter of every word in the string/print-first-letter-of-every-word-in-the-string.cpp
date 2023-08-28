//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	string firstAlphabet(string S)
	{
	    // Your code goes here
	    int n = S.length();
	    string ans = "";
	    
	     if(S[0]>=97 && S[0]<=122)
	       ans = S[0];
	        
	    for(int i=1;i<n;i++)
	    {
	       if((S[i]>=97 && S[i]<=122) && (S[i-1]<97 || S[i-1]>122))
	       ans += S[i];
	        
	    }
	    
	    return ans;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   	
        Solution ob;
   		cout << ob.firstAlphabet(s) << "\n";
   	}

    return 0;
} 

// } Driver Code Ends