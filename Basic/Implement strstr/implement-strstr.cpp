//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}

// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     //Your code here
     int n = s.length();
     int nn = x.length();
     
     for(int i=0;i<n;i++)
     {
         if(s[i]==x[0])
         {
            int j = 0;
            int tt = 0;
            for(int j=0;j<nn;j++)
            {
               if(s[i+j]!=x[j])
               {
                   tt = 1;
                   break;
               }
            }
            if(tt==0)
            return i;
            
         }
     }
     
    
     return -1;
    
}