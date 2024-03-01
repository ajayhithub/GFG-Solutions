//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        int n = str1.length();
        int m = str2.length();
        if(n==2 || n==1 || n!=m)
        return false;

       int j = 0;
       
       int t = 0;
      for(int i=2;i<n;i++)
      {
         if(str1[i]!=str2[j])
         {
             t = 1;
             break;
         }
         
         j++;
      }
      if(t==0)
      return true;
      
     
      
      
      j = 0;
      int tt = 0;
       for(int i=2;i<m;i++)
      {
         if(str1[j]!=str2[i])
         {
            return false;
         }
         
         
         j++;
      }
      
      
      return true;
  
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends