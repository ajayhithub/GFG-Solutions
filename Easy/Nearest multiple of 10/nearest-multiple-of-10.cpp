//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    string roundToNearest(string N) 
    { 
        // Complete the function
        int n = N.length();
        int rem = N[n-1]-'0';
       
        if(n == 1)
        {
            if(N[0] > '5')
            return "10";
            else
            return "0";
        }
        string ans = N;
        
        if(rem<=5)
        {
            ans[n-1] = '0';

        }
        else
        {
           for(int i=n-1;i>=0;i--)
           {
               if(i==n-1)
               ans[i] = '0';
               else if(i==0)
               {
                   if(ans[i]=='9')
                   {
                      ans[i] = '0';
                      ans.push_back('1');
                      ans[n] = '0';
                      ans[0] = '1';
                      return ans;
                      
                   }
                   else
                   {
                      ans[i] = ans[i]+1; 
                      return ans;
                   }
               }
               else
               {
                   if(ans[i]!='9')
                   {
                      ans[i] = ans[i]+1;
                      break;
                   }
                   else
                   {
                      ans[i] = '0';
                   }
                  
               }
               
           }
        }
        
        if(rem<=5)
        return ans;
        else
        return ans;
    }  

};

//{ Driver Code Starts.

int main() {
    
    int t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout << ob.roundToNearest(s) << endl;
    }
    
	return 0;
}
// } Driver Code Ends