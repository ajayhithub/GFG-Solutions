//{ Driver Code Starts
/* program to construct tree using inorder and postorder traversals */
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

/* This funtcion is here just to test buildTreeUtil() */
void preOrder(Node* node) {
    if (node == NULL) return;

    /* then print the data of node */
    printf("%d ", node->data);

    /* first recur on left child */
    preOrder(node->left);

    /* now recur on right child */
    preOrder(node->right);
}

Node* buildTree(int in[], int post[], int n);

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int in[n], post[n];
        for (int i = 0; i < n; i++) cin >> in[i];
        for (int i = 0; i < n; i++) cin >> post[i];
        Node* root = buildTree(in, post, n);
        preOrder(root);
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

//Function to return a tree created from postorder and inoreder traversals.

 Node* fun(int in[], int post[], int &ind, int inS, int inE)
 {
     if(ind<0 || inS>inE)
     return NULL;
     
     Node* node = new Node(post[ind--]);
     int len = 0;
     for(int i=inS;i<=inE;i++)
     {
         if(in[i] == node->data)
         {
             len = i;
             break;
         }
     }
     
     
     node->right = fun(in,post,ind,len+1,inE);
     node->left = fun(in,post,ind,inS,len-1);
     
     
     return node;
 }

Node *buildTree(int in[], int post[], int n) {
    // Your code here
    
    int ind = n-1;
    return fun(in,post,ind,0,n-1);
}
