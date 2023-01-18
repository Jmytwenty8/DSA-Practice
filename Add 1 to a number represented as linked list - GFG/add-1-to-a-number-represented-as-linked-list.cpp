//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

Node* reverse(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    
    while(curr != NULL){
        Node* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    
    head = prev;
    
    return head;
}

class Solution
{
    public:
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        
        Node* temp = reverse(head);
        Node* ptr = temp;
        int carry = 0;
        
        if(ptr->data == 9){
            ptr->data = 0;
            carry = 1;
        }else{
            ptr->data = ptr->data + 1;
        }
        
        ptr = ptr->next;
        
        while(ptr){
            if(ptr->data == 9 && carry){
                ptr->data = 0;
                carry = 1;
            }else{
                ptr->data = ptr->data+carry;
                carry = 0;
            }
            
            ptr = ptr->next;
        }
        
        Node* ans = reverse(temp);
        if(carry){
            Node* carryNode = new Node(1);
            carryNode->next = ans;
            return carryNode;
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
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends