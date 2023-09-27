//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    string solve(int arr[], int n) {
        // code here
         
         string ans = "";
        sort(arr,arr+n);
        string a = "";
        string b = "";
        int p = -1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0)
            {
              p = i; 
              break;
            }
        }
        
        if(p==-1)
        return "0";
        
        int k = p+1;
        while(p<n)
        {
            a += arr[p]+'0';
            p = p+2;
        }
        
         while(k<n)
        {
            b += arr[k]+'0';
            k = k+2;
        }
        
        int aa = a.length()-1;
        int bb = b.length()-1;
        int i = aa, j = bb;
        int car = 0;
        while(i>=0 && j>=0)
        {
            if(a[i]-'0'+b[j]-'0'+car < 10)
            {
               ans +=  '0' + a[i]-'0'+b[j]-'0'+car;
               car = 0;
            }
            else
            {
                ans +=  '0' + (a[i]-'0'+b[j]-'0'+car)%10;
                car = (a[i]-'0'+b[j]-'0'+car)/10;    
            }
            i--;
            j--;
        }
        
        while(i>=0)
        {
            if(a[i]-'0'+car < 10)
            {
                ans += '0'+a[i]-'0'+car;
                car = 0;
            }
            else
            {
                ans += '0'+(a[i]-'0'+car)%10;
                car = (a[i]-'0'+car)/10; 
            }
            i--;
        }
        while(j>=0)
        {
            if(a[j]-'0'+car < 10)
            {
                ans += '0'+a[j]-'0'+car;
                 car = 0;
            }
            else
            {
                ans += '0'+(a[j]-'0'+car)%10;
                car = (a[j]-'0'+car)/10; 
            }
            j--;
        }
        
        if(car != 0)
        ans.push_back(car+'0');
        
        
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.solve(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends