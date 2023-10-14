//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node *right;
    Node *left;

    Node(int x) {
        data = x;
        right = NULL;
        left = NULL;
    }
};

Node *insert(Node *tree, int val) {
    Node *temp = NULL;
    if (tree == NULL) return new Node(val);

    if (val < tree->data) {
        tree->left = insert(tree->left, val);
    } else if (val > tree->data) {
        tree->right = insert(tree->right, val);
    }

    return tree;
}


// } Driver Code Ends
//User function Template for C++

class Solution{
public:

    int fun(Node *root, int p)
    {
       if(root==NULL)
       return 1e7;
       if(root->left==NULL && root->right==NULL)
       return root->data;
    
     //  cout<<root->data<<endl;
       
       int l = fun(root->left,p);
       int r =  fun(root->right,p);
      
//cout<<l<<" "<<r<<endl;
       if(p==0)
       return min(l,r)+root->data;
       else
       return min(l,r)+root->data;
    }

    int maxDifferenceBST(Node *root,int target){
        // Code here
        
        int pre = 0;
        int p = 0;
        if(root->data > target)
        p = 1;
        
       while(root!=NULL)
       {
           if(root->data < target)
           {
               pre += root->data;
               root = root->right;
           }
           else if(root->data > target)
           {
              pre += root->data;
              root = root->left; 
           }
           else 
           {
               
             int post = fun(root,p);
             post = post-root->data;
             
       //      cout<<pre<<" "<<post<<endl;
             return pre-post;
           }
       }
       
       return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        Node *root = NULL;

        int N;
        cin >> N;
        for (int i = 0; i < N; i++) {
            int k;
            cin >> k;
            root = insert(root, k);
        }

        int target;
        cin >> target;
        Solution ob;
        cout << ob.maxDifferenceBST(root, target);
        cout << endl;
    }
}
// } Driver Code Ends