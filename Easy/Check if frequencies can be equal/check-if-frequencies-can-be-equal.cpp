//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s)
	{
	    // code here 
	    unordered_map<char,int> mpp;
	    int n = s.length();
	    int aa = INT_MIN;
	    int bb = INT_MAX;
	    for(int i=0;i<n;i++)
	    {
	        mpp[s[i]]++;
	        aa = max(aa,mpp[s[i]]);
	    }
	    for(auto it:mpp)
	    {
	        bb=min(bb,it.second);
	    }
	    
	    set<int> ss;
	    int cntaa = 0;
	   	int cntbb = 0;
	    for(auto it:mpp)
	    {
	        //cout<<it.second;
	        ss.insert(it.second);
	        if(it.second == aa)
	        cntaa++;
	        if(it.second == bb)
	        cntbb++;
	    }

	  //  cout<<"\n"<<aa<<bb<<cntaa<<cntbb<<ss.size();
	    if(ss.size() == 1)
	    return true;
	    else if(ss.size() == 2)
	    {
	      if((cntbb==1 && bb==1)|| (cntaa==1 && (aa-1==bb)))
	      return true;
	      else
	      return false;
	   
	    }
	    else
	    return false;
	    
	  
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends