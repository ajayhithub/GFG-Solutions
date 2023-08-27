//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
         int n1 = s1.length();
         int n2 = s1.length();
         
         if(n1!=n2)
         return false;
         if(s1==s2)
         return true;
         
         string ss = s1;
         for(int i=0;i<n1;i++)
         {
           char ch = ss[0]; 
           ss.erase(ss.begin());
           ss.push_back(ch);
           if(ss == s2)
           return true;
            
         }
         
         return false;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}

// } Driver Code Ends