//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int addMinChar(string str){    
        //code here
        int n = str.length();
        int i=0, j=n-1,end=n-1;
        int ans = 0;
        while(i<j)
        {
            if(str[i]!=str[end])
            {
                ans++;
                i = 0;
                j--;
                end = j;
            }
            else if(str[i]==str[end])
            {
              i++;
              end--;
            }
        }
        
      return ans;  
    }
};

//{ Driver Code Starts.


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin >> str;
        
        Solution ob;
        cout << ob.addMinChar(str) << endl;
    }
    return 0; 
} 
// } Driver Code Ends