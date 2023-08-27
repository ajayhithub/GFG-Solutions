//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        map<char,int> mpp;
        int n = str.length();
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            mpp[str[i]]++;  
            cnt = max(cnt,mpp[str[i]]);
        }
        
        // if(cnt<=1)
        // return 
        for(auto it:mpp)
        {
            if(cnt == it.second)
            return it.first;
        }
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends