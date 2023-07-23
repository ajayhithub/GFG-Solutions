//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int countDistinctSubarray(int arr[], int n)
    {
        //code here.
        int ans = 0;
        set<int> s;
        for(int i=0;i<n;i++)
        {
            s.insert(arr[i]);
        }
        
        int cnt = s.size();
        
        set<int> ss;
        map<int,int> mpp;
        int p = 0;
        
        for(int i=0;i<n;i++)
        {
           ss.insert(arr[i]);
           mpp[arr[i]]++;
           while(ss.size()==cnt && p<=i)
           {
               ans += n-i;
                mpp[arr[p]]--;
               if(mpp[arr[p]]==0)
               ss.erase(arr[p]);
               
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
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;	
		cout<<ob.countDistinctSubarray(a,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends