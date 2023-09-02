//{ Driver Code Starts
//Initial Template for C++

// CPP program for implementation of efficient 
// approach to find length of last word 
#include <bits/stdc++.h> 
using namespace std; 

int findLength(string s);

// Driver code 
int main() 
{ 
	int t;
	cin>>t;
	t+=1;
	bool flag = false;
	while(t--){
	    string s;
	    getline(cin,s);
	    if(!flag){
	        flag = true;
	        continue;
	    }
	    cout<<findLength(s)<<endl;
	}
	return 0;
} 

// } Driver Code Ends


//User function Template for C++

int findLength(string s){
    //code
    
    int i = s.length()-1;
    int j = 0;
    while(i>=0)
    {
        if(s[i]!= ' ')
        {
            break;
        }
        
        i--;
    }
    
    j = i;
    while(j>=0)
    {
        if(s[j] == ' ')
        break;
        
        j--;
    }
    
    return i-j;
    
}