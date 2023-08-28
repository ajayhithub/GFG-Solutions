//{ Driver Code Starts
// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
    	
    	// Your code here
    	int ans = 0;
    	string s = "";
    	int  n = str.length();
    	for(int i=0;i<n;i++)
    	{
    	    if(str[i]>=48 && str[i]<=57)
    	    s += str[i];
    	    else
    	    {
    	        if(s!="")
    	        {
    	           int myint2 = stoi(s);
    	            ans += myint2;    
    	        }
                
    	        s = "";
    	    }
    	}
    	
         	 if(s!="")
    	        {
    	           int myint2 = stoi(s);
    	            ans += myint2;    
    	        }
    	
    	return ans;
    	
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
	// input alphanumeric string
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution obj;
	    cout << obj.findSum(str);
        cout<<endl;
	}
	return 0;
}

// } Driver Code Ends