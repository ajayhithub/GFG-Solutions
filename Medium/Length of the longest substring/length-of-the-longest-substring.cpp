//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string S){
        //code
        
        int n = S.length();
        int ans = 0;
        int cnt = 0;
        int i = 0;
        int j = 0;
        vector<int> mpp(26,0);
        //  while(j<n)
        // {
            
            
        //     if(mpp[S[j]]==0)
        //     {
        //         cnt++;
        //         ans = max(ans,cnt);
        //         mpp[S[j]]++;
        //         j++;
        //     }
        //     else if(i<j)
        //     {
        //         mpp[S[i]]--;
        //         cnt--;
        //         i++;
        //     }
        //     else j++;
        // }
        for(j=0;j<n;j++)
        {
            while(i<j && mpp[S[j]-'a']>0)
            {
                mpp[S[i]-'a']--;
                i++;
            }
            mpp[S[j]-'a']++;
            ans=max(ans,j-i+1);
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
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends