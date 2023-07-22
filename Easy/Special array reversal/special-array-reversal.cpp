//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    string reverse(string str)
    { 
        string ans=str;
        int i=0;
        int n = str.length();
        int j = n-1;
        while(i<j)
        {
            if(str[i]<65 || (str[i]>90 && str[i]<97) || str[i]>122)
            {
               i++; 
            }
             if(str[j]<65 || (str[j]>90 && str[j]<97) || str[j]>122)
            {
               j--;    
            }
            
            if(((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122)) && ((str[j]>=65 && str[j]<=90) || (str[j]>=97 && str[j]<=122)))
            {
                swap(ans[i],ans[j]);
                i++;
                j--;
            }
            
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