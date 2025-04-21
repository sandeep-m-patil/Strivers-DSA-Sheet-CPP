#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node* constructLL(vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return nullptr; 
        Node* head = new Node(arr[0]); 
        Node* curr = head;

        for (int i = 1; i < n; i++) { 
            curr->next = new Node(arr[i]); 
            curr = curr->next;
        }

        return head;
        
 }

 // Time Complexity is O(N) as we need to traverser to second last element and update next field of second last element
 Node* deleteEnd(Node* head){
     if(head == NULL || head->next==NULL ){
         delete head;
         return NULL;
     }
     
     Node* temp = head;
     while(temp->next->next!=NULL)temp=temp->next;
     
     delete temp->next;
     temp->next=NULL;
     return head;
 }
 
void print(Node *head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data;
        if (temp->next != NULL)
            cout << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    
    vector<int> a= {1,2,3,4,5};
    Node* head=constructLL(a);
    cout << "Original List: ";
    print(head);

    head = deleteEnd(head); 

    cout << "After Deletion from Ending : ";
    print(head);
    
}