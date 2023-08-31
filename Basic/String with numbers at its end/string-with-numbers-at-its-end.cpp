//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
		
	int isSame(string s)
	{
	    // Your code goes here
	    int n = s.length();
	    string num = "";
	    int cnt = 0;
	    int  p  = 0;
	   for(int i=0;i<n;i++)
	    {
	        if(s[i]!='0' && !(s[i]>='a' && s[i]<='z'))
	        {
	            p = i;
	            break;
	        }
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]>='a' && s[i]<='z')
	        cnt++;
	        else if(i>=p)
	        {
	            num += s[i];
	            if(num.length()>6)
	            break;
	        }
	    }
	    
	    if(cnt < num.length())
	    return 0;
	    
	    if(num.length()<=6)
	    {
	          int aa = stoi(num);
	         if(cnt == aa)
	          return 1;
	         else
	          return 0;
	    }
	    else
	    return 0;
	  
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;
        Solution ob;
   		cout << ob.isSame(str) << "\n";
   	}

    return 0;
}
// } Driver Code Ends