//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            // code here
            unordered_map<char,int> mppA;
            unordered_map<char,int> mppB;
            int n = A.length();
            for(int i=0;i<n;i++)
            {
                mppA[A[i]]++;
            }
            int nn = B.length();
            for(int i=0;i<nn;i++)
            {
                mppB[B[i]]++;
            }
            
            string ans = "";
            for(int i=0;i<n;i++)
            {
                if(mppB[A[i]]==0)
                {
                  ans += A[i];
                  mppB[A[i]]++;
                }
            
            }
            
            for(int i=0;i<nn;i++)
            {
                if(mppA[B[i]]==0)
                {
                  ans += B[i];
                  mppA[B[i]]++;
                }
                
            }
            
            if(ans.length()==0)
            return "-1";
           sort(ans.begin(),ans.end());
           
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
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends