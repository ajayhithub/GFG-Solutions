//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        map<int,int> mpp;
        int ans  = 0;
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            sum += A[i];
            if(sum == 0)
            ans = max(ans,i+1);
            
            if(mpp.find(sum)!=mpp.end())
            {
              ans = max(ans,i-mpp[sum]);  
            }
            else
            {
                mpp[sum] = i;
            }
            
        }
            // if(mpp.find(sum)!=mpp.end())
            // {
            //   ans = max(ans,n-mpp[sum]);  
            // }
           
        
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
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends