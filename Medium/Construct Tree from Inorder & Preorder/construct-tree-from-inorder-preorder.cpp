//{ Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

// } Driver Code Ends

/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;Fgjksgdfgzdfd
  Node* right;
};
*/
class Solution{
    public:
    
     Node* fun(int pre[],int &preS, int n,int in[],int inS, int inE,  map<int,int> &mpp)
    {
        if(preS>=n || inS>inE)
         return NULL;
         
         Node* node = new Node(pre[preS++]);
        // cout<<node->data<<endl;
         int len = 0;
         for(int i=inS;i<=inE;i++)
         {
             if(in[i] == node->data)
             {
                 len = i;
                 break;
             }
         }
       //int len = mpp[node->data]-inS;
         
        
         node->left = fun(pre,preS,n, in , inS,len-1, mpp);
         node->right = fun(pre,preS,n, in ,len+1, inE,mpp);
         
         return node;
    }
    
    Node* buildTree(int in[],int pre[], int n)
    {
       // Code here
        map<int,int> mpp;
        for(int i=0;i<n;i++)
        {
            mpp[in[i]] = i;
        }
        
        int preS = 0;
        return fun(pre,preS,n,in,0,n-1,mpp);
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}

// } Driver Code Ends