//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        int n = 0;
        Node* node = head;
        Node* pre = NULL;
        while(node!=NULL)
        {
           pre = node;    
           node = node->next;
           n++;
        }
        
        if(k==n)
        return head;
        
        k = k%n;
        
        
        
     
        Node* ans = NULL;
        Node* hh = head;
        while(hh!=NULL)
        {
           if(k==1)
           {
             ans = hh->next;
             hh->next = NULL;
             hh = ans;
           }
           hh = hh->next;
           k--;
        }
        
        pre->next = head;
      
        return ans;
    }
};
    


//{ Driver Code Starts.

void printList(Node *n)
{
    while (n != NULL)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, val, k;
        cin>>n;
        
        cin>> val;
        Node *head = new Node(val);
        Node *tail = head;
        
        for(int i=0; i<n-1; i++)
        {
            cin>> val;
            tail->next = new Node(val);
            tail = tail->next;
        }
        
        cin>> k;
        
        Solution ob;
        head = ob.rotate(head,k);
        printList(head);
    }
    return 1;
}

// } Driver Code Ends