//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    string reverse(string str)
    { 
        //code here.
        stack<char> s;
        string ans = "";
        for(int i=0;i<str.length();i++)
        {
            if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
            s.push(str[i]);
            
            
        }
        
      
        for(int i=0;i<str.length();i++)
        {
         if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
             {
                 
                 ans += s.top();
                 s.pop();
             }
             else
             ans += str[i];
             
        }
        
        return ans;
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.reverse(s) << endl;
    }
return 0;
}


// } Driver Code Ends