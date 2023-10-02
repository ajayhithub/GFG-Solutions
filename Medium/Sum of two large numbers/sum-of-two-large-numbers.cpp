//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string findSum(string X, string Y) {
        // Your code goes here
       
       string ans  = "";
       int x = X.length();
       int y = Y.length();
       
       int aa=-1, bb=-1;
       for(int i=0;i<x;i++)
       {
           if(X[i]!='0')
           {
               aa = i;
               break;
           }
       }
       for(int i=0;i<y;i++)
       {
            if(Y[i]!='0')
           {
               bb = i;
               break;
           }
       }
       
       if(aa==-1 && bb==-1)
       return "0";
       
       int i=x-1, j=y-1;
       int cnt = 0;
       
       
       while(i>=aa && j>=bb && aa!=-1 && bb!=-1)
       {
           if(i==aa && j==bb)
           {
               ans += (X[i]-'0'+Y[j]-'0'+cnt)%10 + '0';
               if((X[i]-'0'+Y[j]-'0'+cnt)/10 != 0)
               ans += (X[i]-'0'+Y[j]-'0'+cnt)/10 + '0';
               
                i--;
                j--;
                break;
               
           }
           
           int a = (X[i]-'0'+Y[j]-'0'+cnt)%10;
           ans += a+'0';
           cnt = (X[i]-'0'+Y[j]-'0'+cnt)/10;
           i--;
           j--;
           
       }
       
      while(i>=aa && aa!=-1)
      {
           if(i==aa)
           {
               ans += (X[i]-'0'+cnt)%10 + '0';
               if((X[i]-'0'+cnt)/10 != 0)
               ans += (X[i]-'0'+cnt)/10 + '0';
               
               i--;
               break;
           }
           
           int a = (X[i]-'0'+cnt)%10;
           ans += a+'0';
           cnt = (X[i]-'0'+cnt)/10;
           
           i--;
          
      }
       
       while(j>=bb && bb!=-1)
      {
            if(j==bb)
           {
               ans += (Y[j]-'0'+cnt)%10 + '0';
                if((Y[j]-'0'+cnt)/10 != 0)
               ans += (Y[j]-'0'+cnt)/10 + '0';
               
               
               j--;
               break;
               
           }
           
           int a = (Y[j]-'0'+cnt)%10;
           ans += a+'0';
           cnt = (Y[j]-'0'+cnt)/10;
           
           j--;
      }
       
       reverse(ans.begin(),ans.end());
       
       return ans;
    }
};


//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string x, y;
        cin >> x >> y;
        Solution ob;
        cout << ob.findSum(x, y) << "\n";
    }

    return 0;
}
// } Driver Code Ends