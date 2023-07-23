//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int appleSequences(int n, int m, string arr){
        // code here 
        int cnta=0,cnto=0;
        
        int ans = 0;
        int p=0;
        
        for(int i=0;i<n;i++)
        {
          if(arr[i]=='O')
           cnto++;
          
         if(cnto>0 && cnto<=m)
         {
             ans = max(ans,i-p+1);
         }
         
          if(arr[i]=='A' && cnto==0)
          ans = max(ans,i-p+1);
          
         while(cnto>m && p<i)
         {
            if(arr[p]=='O')
            cnto--;
            
            p++;
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
        int N, M;
        cin >> N >> M;
        string arr;
        cin >> arr;
        
        Solution ob;
        cout << ob.appleSequences(N, M, arr) << endl;
    }
    return 0; 
} 
// } Driver Code Ends