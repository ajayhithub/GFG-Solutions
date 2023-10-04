//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
    
	string addBinary(string A, string B)
	{
	    // your code here
	   string ans = "";
	   int a = A.length()-1;
	   int b = B.length()-1;
	   int i=0,j=0,car=0;
	   
	   while(a>=0 && b>=0)
	   {
	      if(A[a]-'0'+B[b]-'0'+car == 0)
	      {
	          ans += '0';
	          car = 0;
	      }
	      else if(A[a]-'0'+B[b]-'0'+car == 1)
	      {
	          ans += '1';
	          car = 0;
	      }
	       else if(A[a]-'0'+B[b]-'0'+car == 2)
	      {
	          ans += '0';
	          car = 1;
	      }
	       else if(A[a]-'0'+B[b]-'0'+car == 3)
	      {
	          ans += '1';
	          car = 1;
	      }
	      
	      a--;
	      b--;
	   }
	   while(a>=0)
	   {
	       if(A[a]-'0'+car == 0)
	      {
	          ans += '0';
	          car = 0;
	      }
	      else if(A[a]-'0'+car == 1)
	      {
	          ans += '1';
	          car = 0;
	      }
	       else if(A[a]-'0'+car == 2)
	      {
	          ans += '0';
	          car = 1;
	      }
	       else if(A[a]-'0'+car == 3)
	      {
	          ans += '1';
	          car = 1;
	      }
	      
	      a--;
	   }
	   
	   	 while(b>=0)
	   {
	       if(B[b]-'0'+car == 0)
	      {
	          ans += '0';
	          car = 0;
	      }
	      else if(B[b]-'0'+car == 1)
	      {
	          ans += '1';
	          car = 0;
	      }
	       else if(B[b]-'0'+car == 2)
	      {
	          ans += '0';
	          car = 1;
	      }
	       else if(B[b]-'0'+car == 3)
	      {
	          ans += '1';
	          car = 1;
	      }
	      
	      b--;
	   }
	   
	   if(car == 1)
	     ans += '1';
	     
	     reverse(ans.begin(),ans.end());
	     string aaa = "";
	     int nn = ans.length();
	     int p = 0;
	     for(int i=0;i<nn;i++)
	     {
	         if(ans[i]=='1')
	         {
	           p = i;
	           break;
	         }
	     }
	     
	     for(int i=p;i<nn;i++)
	     aaa += ans[i];
	     
	    
	     return aaa;
	}
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string A, B; cin >> A >> B;
		Solution ob;
		cout << ob.addBinary (A, B);
		cout << "\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends