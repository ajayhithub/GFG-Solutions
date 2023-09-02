//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int check(string a,string b);
int main(){
    int t;
    cin>>t;
    while(t--)
    {
       string a, b;
    cin >> a >> b;
    cout<<check(a,b)<<'\n';


    }

    return 0;
}

// } Driver Code Ends


int check(string a,string b){
    //code
    
    int aa = a.length();
    int bb = b.length();
    
    int p = -1;
   for(int i=0;i<aa;i++)
   {
       if(a[i]!='0')
       {
           p = i;
           break;
       }
   }
   
    int q = -1;
   for(int i=0;i<bb;i++)
   {
       if(b[i]!='0')
       {
           q = i;
           break;
       }
   }
   
   
   if( p==-1 && q==-1)
   return 3;
   else if(p==-1)
   return 1;
   else if(q == -1)
   return 2;
   
   
    if(aa-p<bb-q)
    return 1;
    else if(aa-p > bb-q)
    return 2;
    
    int i = p;
    int j = q;
    while(i<aa && j<bb)
    {
         if(a[i]<b[j])
         return 1;
         else if(a[i] > b[j])
         return 2;
         
         i++;
         j++;
       
    }
    
    return 3;
    
}