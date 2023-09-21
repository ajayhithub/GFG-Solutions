//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

bool saveIronman(string ch);


int main()
{
    int t,b,c,d,e,f,g,h;
    cin>>t;
    char cc;
    cc = getchar();
    
    while(t--)
    {
        string ch;
        getline(cin,ch);
        
        if(saveIronman(ch)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
        
    }
}

// } Driver Code Ends

bool fun(string ch)
{
    int n = ch.length();
    int i = 0;
    int j = n-1;
    
    while(i<=j)
    {
        if(ch[i]!=ch[j])
        {
            return false;
        }
        i++;
        j--;
    }
    
    return true;
}

bool saveIronman(string ch)
{
    // Complete the function
    int n = ch.length();
    int i=0;
    int j=n-1;
    string s = "";
    for(int i=0;i<n;i++)
    {
        if(ch[i]>='a' && ch[i]<='z')
        s += ch[i];
        else if(ch[i]>='A' && ch[i]<='Z')
        s += ch[i]+32;
        else if(ch[i]>='0' && ch[i]<='9')
        s += ch[i];
    }

    
    return fun(s);
    
}
