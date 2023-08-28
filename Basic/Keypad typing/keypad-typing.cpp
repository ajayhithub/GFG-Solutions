//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

string printNumber(string , int);

// User function pasted here
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,temp;
		cin>>s;
		int i,len=s.length();
		
		cout << printNumber(s,len) << "\n";
	}
	return 0;
}
// } Driver Code Ends


//User function template for C++


//Function to find matching decimal representation of a string as on the keypad.
string printNumber(string s, int n) 
{
    //code here
    unordered_map<char,int> mpp;
    string ans = "";
    
    mpp['a'] = '2';
    mpp['b'] = '2';
    mpp['c'] = '2';
    mpp['d'] = '3';
    mpp['e'] = '3';
    mpp['f'] = '3';
    mpp['g'] = '4';
    mpp['h'] = '4';
    mpp['i'] = '4';
    mpp['j'] = '5';
    mpp['k'] = '5';
    mpp['l'] = '5';
    mpp['m'] = '6';
    mpp['n'] = '6';
    mpp['o'] = '6';
    mpp['p'] = '7';
    mpp['q'] = '7';
    mpp['r'] = '7';
    mpp['s'] = '7';
    mpp['t'] = '8';
    mpp['u'] = '8';
    mpp['v'] = '8';
    mpp['w'] = '9';
    mpp['x'] = '9';
    mpp['y'] = '9';
    mpp['z'] = '9';
    
    for(int i=0;i<n;i++)
    {
      
        ans += mpp[s[i]];
    }
    return ans;
 
    
}
