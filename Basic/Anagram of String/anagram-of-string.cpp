//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
// Your code goes here
    int n1 = str1.length();
    int n2 = str2.length();
    int ans  = 0;
    int cnt = 0;
    if(n1>n2)
    {
        unordered_map<char,int> mpp;
        for(int i=0;i<n1;i++)
        mpp[str1[i]]++;
        
        for(int i=0;i<n2;i++)
        {
            if(mpp[str2[i]]>0)
            {
                cnt++;
                mpp[str2[i]]--;
            }
            
        }
    }
    else
    {
        unordered_map<char,int> mpp;
        for(int i=0;i<n2;i++)
        mpp[str2[i]]++;
        
        for(int i=0;i<n1;i++)
        {
            if(mpp[str1[i]]>0)
            {
                cnt++;
                mpp[str1[i]]--;
            }
            
        }
    }
    
    
    return n1+n2-cnt-cnt;
}