//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    bool areKAnagrams(string str1, string str2, int k) {
        // code here
     
       map<char,int> mpp;
       int l1  = str1.length();
       int l2  = str2.length();
       
       if(l1 != l2)
       return false;
       
       for(int i=0;i<l1;i++)
       {
            mpp[str1[i]]++;
       }
        for(int i=0;i<l2;i++)
        {
            mpp[str2[i]]--;
        }
  
       
       int cnt = 0;
        for(int i=0;i<l1;i++)
        {
           if(mpp[str1[i]]>0)
           {cnt += mpp[str1[i]];
           
           //cout<<str1[i]<<mpp[str1[i]]<<" ";
           }
           mpp[str1[i]] = 0;
        }
        
        //cout<<cnt<<" ";
      //  cout<<l1<<" "<<l2<<" ";
       if(cnt <= k)
       return true;
       else
       return false;
       
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str1,str2;
		cin>>str1>>str2;
		int k;
		cin>>k;
		Solution ob;
		if(ob.areKAnagrams(str1, str2, k) == true)
			cout<<"1\n";
		else
			cout<<"0\n";
	}
}
// } Driver Code Ends