//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    data =x;
	    next = NULL;
	}
};
/* Function to print linked list */


void append(struct Node** headRef, struct Node** tailRef, int newData)
{
	struct Node* new_node = new Node(newData);
	struct Node *last = *headRef;
	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    *tailRef = *headRef;
	    return;
	}
	
	(*tailRef) -> next = new_node;
	*tailRef = (*tailRef) -> next;
}

// A utility function to print a linked list
void printList(Node *head)
{
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}



// } Driver Code Ends

/*
struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    data =x;
	    next = NULL;
	}
};
*/

class Solution
{
    public:
    // your task is to complete this function
   Node* reverse(Node* head) {
        Node *prev = nullptr;
        Node *current = head;
        Node *next = nullptr;
    
        while (current != nullptr) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
    
        return prev;
    }
    
    Node* merge(Node* l1,Node* l2){
         if(!l1) return l2;
         if(!l2) return l1;
         if(l1->data<=l2->data){
             l1->next=merge(l1->next,l2);
             return l1;
         }
         else{
             l2->next=merge(l1,l2->next);
             return l2;
         }
     }

    public:
    // your task is to complete this function
    void sort(Node **head)
    {
         
         Node * temp1 = new Node(-1);
         Node * temp2 = new Node(-1);
         Node * temp1head = temp1;
         Node * temp2head = temp2;
         Node * temp = *head;
         
         int flag = true;
         
         while(temp){
             if(flag){
                 temp1 -> next = temp;
                 temp1 = temp1 -> next;
                 temp = temp -> next;
                 temp1 -> next = NULL;
             }
             else{
                 temp2 -> next = temp;
                 temp2 = temp2 -> next;
                 temp = temp -> next;
                 temp2 -> next = NULL;
             }
             flag = !flag;
             
         }
         
        temp2head = reverse(temp2head->next);
             
        *head = merge(temp1head -> next , temp2head);
         
    }
};

//{ Driver Code Starts.
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
	    struct Node* head = NULL;
	    struct Node* tail = NULL;
	    int n, k;
	    cin>>n;
	    for(int i=0; i<n ;i++){
	        cin>>k;
	        append(&head, &tail, k);
	    }
	    Solution ob;
	    ob.sort(&head);
	    printList(head);
	}
	return 0;
}

// } Driver Code Ends