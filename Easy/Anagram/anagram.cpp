//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        map<char,int> mpp;
        int aa = a.length();
        int bb = b.length();
        for(int i=0;i<aa;i++)
        {
          mpp[a[i]]++;  
        }
        
        for(int i=0;i<bb;i++)
        {
            mpp[b[i]]--;
        }
        
        for(auto it:mpp)
        {
            if(it.second != 0)
            return false;
        }
        return true;
        
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends