// { Driver Code Starts
#include<iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node* sortedMerge(struct Node* a, struct Node* b);

/* Function to print Nodes in a given linked list */
void printList(struct Node *n)
{
    while (n!=NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

/* Driver program to test above function*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        int data;
        cin>>data;
        struct Node *head1 = new Node(data);
        struct Node *tail1 = head1;
        for (int i = 1; i < n; ++i)
        {
            cin>>data;
            tail1->next = new Node(data);
            tail1 = tail1->next;
        }

        cin>>data;
        struct Node *head2 = new Node(data);
        struct Node *tail2 = head2;
        for(int i=1; i<m; i++)
        {
            cin>>data;
            tail2->next = new Node(data);
            tail2 = tail2->next;
        }

        Node *head = sortedMerge(head1, head2);
        printList(head);
    }
    return 0;
}
// } Driver Code Ends


 

/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
//Function to merge two sorted linked list.
Node* sortedMerge(Node* l1, Node* l2)  
{  
    // code here
     if(l1==NULL || l2==NULL){
            return (l1==NULL)?l2:l1;// if one of the list have NULL then return other list
        }
        Node *p1=l1, *p2=l2;
        Node *new_head= new Node(-1);// avoid null pointer exception
        Node *it= new_head;
        
        while(p1 && p2){
            if(p1->data < p2->data){
                it->next=p1;
                p1=p1->next;
            }else{
                it->next=p2;
                p2=p2->next;
            }
            it=it->next;
        }
        if(p1!=NULL){// if one of the smaller size list exhaust then append greater size list in iterator
            it->next=p1;
        }else{
            it->next=p2;
        }
        return new_head->next;// avoid -1
}  