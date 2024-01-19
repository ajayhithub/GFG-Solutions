//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    
    double fractionalKnapsack(int w, Item arr[], int n)
    {
        // Your code here
         vector<pair<double,int>> aaa;
         for(int i=0;i<n;i++)
         {
           double p = (arr[i].value*1.0)/(arr[i].weight*1.0);
           aaa.push_back({p,i});
         }
         
         sort(aaa.begin(),aaa.end(),greater<pair<double,int>>());
         double ans = 0;
         for(int i=0;i<n;i++)
         {
            if(w<=arr[aaa[i].second].weight)
            {
              ans = ans+w*aaa[i].first*1.0;  
              break;
            }
            else if(w>arr[aaa[i].second].weight)
            {
              ans = ans+arr[aaa[i].second].value; 
              w = w-arr[aaa[i].second].weight; 
            }
         }
         
         return ans;
    }
        
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(6)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends