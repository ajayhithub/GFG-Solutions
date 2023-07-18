//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    
      long long int fun(long long int i)
      {
          long long int sum = 0;
            while(i!=0)
            {
               sum += i%10;
               i = i/10;
            }
            return sum;
      }
    
        long long int numberCount(long long int N, long long int K)
        {
            // your code here
            long long int cnt = 0;
            
            for(int i=1;i<=N;i++)
            {
              long long int sum = fun(i);
              if(i-sum >= K)
              cnt++;
            }
            
            return cnt;
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