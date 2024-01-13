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
        string a = "";
        string b = "";
         while(first!=NULL)
         {
             a += first->data+'0';
             first = first->next;
         }
         
         while(second!=NULL)
         {
             b += second->data+'0';
             second = second->next;
         }
          
     
         Node* pre = NULL;
         int car = 0;
         int aa = a.length()-1;
         int bb = b.length()-1;
         while(aa>=0 && bb>=0)
         {
            if((a[aa]+b[bb]-'0'-'0'+car)<=9)
            {
            Node* node = new Node(a[aa]+b[bb]-'0'-'0'+car);
            node->next = pre;
            pre = node;
            aa--;
            bb--;
            car = 0;
            }
            else
            {
            Node* node = new Node((a[aa]+b[bb]-'0'-'0'+car)%10);
            node->next = pre;
            pre = node;
            car = (a[aa]+b[bb]-'0'-'0'+car)/10;
            aa--;
            bb--;
            }
         }
         
        //  cout<<car<<endl;
         while(aa>=0)
         {
            if((a[aa]-'0'+car)<=9)
            {
            Node* node = new Node(a[aa]-'0'+car);
            node->next = pre;
            pre = node;
            aa--;
            car = 0;
            }
            else
            {
            Node* node = new Node((a[aa]-'0'+car)%10);
            node->next = pre;
            pre = node;
            car = (a[aa]-'0'+car)/10;
            aa--;
            }
         }
         
         while(bb>=0)
         {
            if((b[bb]-'0'+car)<=9)
            {
            Node* node = new Node(b[bb]-'0'+car);
            node->next = pre;
            pre = node;
            bb--;
            car = 0;
            }
            else
            {
            Node* node = new Node((b[bb]-'0'+car)%10);
            node->next = pre;
            pre = node;
            car = (b[bb]-'0'+car)/10;
            bb--;
            }
         }
         
     //    cout<<car<<endl;
         if(car!=0)
         {
            Node* node = new Node(car);
            node->next = pre;
            pre = node; 
         }
         
         return pre;
         
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