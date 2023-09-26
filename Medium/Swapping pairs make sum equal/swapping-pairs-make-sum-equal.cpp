//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findSwapValues(int A[], int n, int B[], int m)
	{
        // Your code goes here
        sort(A,A+n);
        sort(B,B+m);
        
        int suma = 0;
        for(int i=0;i<n;i++)
        suma += A[i];
        
        int sumb = 0;
        for(int i=0;i<m;i++)
        sumb += B[i];
        
        if(suma==sumb)
        return 1;
        
        int i=0;
        int j=0;
       while(i<n && j<m)
       {
           if(suma-A[i]+B[j] == sumb-B[j]+A[i])
           return 1;
           else if(suma-A[i]+B[j] < sumb-B[j]+A[i])
           {
             j++;     
           }
            else if(suma-A[i]+B[j] > sumb-B[j]+A[i])
           {
             i++;      
           }
       }
        
        return -1;  
	}

};

//{ Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        

        Solution ob;
        cout <<  ob.findSwapValues(a, n, b, m);
	    cout << "\n";
	     
    }
    return 0;
}






// } Driver Code Ends