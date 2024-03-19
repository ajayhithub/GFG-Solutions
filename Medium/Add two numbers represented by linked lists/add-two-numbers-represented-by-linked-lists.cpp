//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {    
        // code here
        struct Node* a = first;
        struct Node* b = second;
        
        struct Node* pre = NULL;
        while(a!=NULL)
        {
            struct Node* aa = a;
            a = a->next;
            aa->next = pre;
            pre = aa;
        }
        a = pre;
      
        struct Node* pre1 = NULL;
        while(b!=NULL)
        {
            struct Node* aa = b;
            b = b->next;
            aa->next = pre1;
            pre1 = aa;
        }
        b = pre1;
       
        int car = 0;
        struct Node* ans = NULL;
        while(a!=NULL && b!=NULL)
        {
          int num = a->data + b->data+car;        
          struct Node* node = new Node(num%10);
          car = num/10;
          
          node->next = ans;
          ans = node;
          
          a = a->next;
          b = b->next;
        }
      
        while(a!=NULL)
        {
          int num = a->data + car;        
          struct Node* node = new Node(num%10);
          car = num/10;
          
          node->next = ans;
          ans = node;
          
          a = a->next;
        }
    
          while(b!=NULL)
        {
          int num = b->data + car;        
          struct Node* node = new Node(num%10);
          car = num/10;
          
          node->next = ans;
          ans = node;
          
          b = b->next;
        }
        
        if(car!=0)
        {
           struct Node* node = new Node(car); 
           node->next = ans;
           ans = node;
        }
        
        return ans;
    }    
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends