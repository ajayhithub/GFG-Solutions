//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        int n = str1.length();
        if(n==1 && str1==str2)
        return true;
        else if(n==1 && str1!=str2)
        return false;
        
        string ss = str1;
        char a = str1[0];
        char b = str1[1];
        
        for(int i=2;i<n;i++)
        {
            str1[i-2] = str1[i];
        }
        str1[n-2] = a;
        str1[n-1] = b;
        
        if(str1==str2)
        return true;
        
        char aa = ss[n-1];
        char bb = ss[n-2];
        for(int i=n-3;i>=0;i--)
        {
            ss[i+2] = ss[i];
        }
        ss[0] = bb;
        ss[1] = aa;
        
     
        if(ss==str2)
        return true;
        else
        return false;
        
        
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends