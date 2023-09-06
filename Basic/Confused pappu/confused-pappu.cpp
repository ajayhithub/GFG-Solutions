//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
long long findDiff(long long n);

int main(){
    long t;
    cin>>t;
    while(t--){
        long long amount;
        cin>>amount;
        cout<<findDiff(amount)<<endl;
    }
    return 0;
}
// } Driver Code Ends


long long findDiff(long long amount){
    //code
    
    string s = to_string(amount);
    int l = s.length();
    
    for(int i=0;i<l;i++)
    {
        if(s[i] == '6')
        s[i] = '9';
    }
    
    long long mm = 0;
     long long t = 1;
     for(int i=l-1;i>=0;i--)
    {
       mm = mm + t*(s[i]-'0');
       t = t*10;
    }
    
    return mm-amount;
}