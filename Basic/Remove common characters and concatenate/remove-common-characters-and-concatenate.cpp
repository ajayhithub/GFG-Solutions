//{ Driver Code Starts
// C++ program Find concatenated string with 
// uncommon characters of given strings 
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends


class Solution
{
    public:
    //Function to remove common characters and concatenate two strings.
    string concatenatedString(string s1, string s2) 
    { 
        // Your code here
        unordered_map<char, int> mpp1;
        unordered_map<char, int> mpp2;
        int n1 = s1.length();
        int n2 = s2.length();
        for(int i=0;i<n1;i++)
        {
            mpp1[s1[i]]++;
        }
        for(int i=0;i<n2;i++)
        {
            mpp2[s2[i]]++;
        }
        
        string ans = "";
        for(int i=0;i<n1;i++)
        {
            if(mpp2[s1[i]]==0)
             ans += s1[i];
        }
         for(int i=0;i<n2;i++)
        {
            if(mpp1[s2[i]]==0)
            ans += s2[i];
        }
        
        if(ans == "")
        return "-1";
        else
        return ans;
    }

};

//{ Driver Code Starts.

/* Driver program to test above function */
int main() 
{ 
	int t;
	cin >> t;
	
	while(t--){
    	string s1, s2;
    	cin >> s1 >> s2;
    	Solution obj;
    	string res = obj.concatenatedString(s1, s2);
    	cout<<res<<endl;
	}
	return 0; 
}

// } Driver Code Ends