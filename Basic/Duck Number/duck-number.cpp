//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 
bool check_duck(string N);
 
int main(void)
{
    int t; 
    cin>>t;
    while(t--)
    {
        string N; 
        cin>>N; 
  
        if (check_duck(N)) 
            cout << "YES\n"; 
        else
            cout << "NO\n"; 
     
    }
}
// } Driver Code Ends


bool check_duck(string N){
    //code
    if(N.length()==1 && N[0]=='0')
    return false;
    else if(N.length()==1 && N[0]!='0')
    return false;
    
    int n = N.length();
    int t = -1;
   for(int i=0;i<n;i++)
   {
       if(N[i] != '0')
       {
           t = i;
           break;
       }
   }
   
   if(t == -1)
   return false;
   
   
   int p = -1;
    for(int i=t;i<n;i++)
    {
        if(N[i] == '0')
       {
           p = 1;
           break;
       }
    }
    
      if(p == -1)
      return false;
      else if(p == 1)
      return true;
      
}