//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sentencePalindrome(string s) 
	{
	    // code here
	    int i=0;
	    int n = s.length();
	    int j=n-1;
	    
	    while(i<j)
	    {
	        if(s[i]==s[j] && (s[i]>=97 && s[i]<=122) && (s[j]>=97 && s[j]<=122))
	        {
	            i++;
	            j--;
	        }
	       else if(s[i]!=s[j] && (s[i]>=97 && s[i]<=122) && (s[j]>=97 && s[j]<=122))
	       return false;
	        
	        if(s[i]<97 || s[i]>122)
	        i++;
	        if(s[j]<97 || s[j]>122)
	        j--;
	        
	    }
	    return true;
	}
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        Solution ob;
        cout<<ob.sentencePalindrome(str)<<endl;
    }
    return 0;
}  


// } Driver Code Ends