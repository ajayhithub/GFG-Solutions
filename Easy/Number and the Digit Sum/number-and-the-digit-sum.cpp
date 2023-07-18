//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    

    
        long long int numberCount(long long int N, long long int K)
        {
                double x=(double)K/9; 
                int a=N-(ceil(x)*10)+1;
            if(a>=0)
            {
                return a;
            }
            return 0;
        }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n, k;
		cin >> n >> k;
		Solution ob;
		cout <<ob.numberCount(n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends