#include<iostream>
#include<vector>
#include<stack>
using namespace std;

// Creating a node.
struct Node
{
    int val;
    Node* next;
    Node(int val_param, Node* p_next_param) : val(val_param), next(p_next_param){};
};

void convertArr2LL(Node*& head, vector<int>& arr) {
    head = new Node(arr[0], nullptr);
    Node* mover = head;
    
    for(int i = 1; i < static_cast<int>(arr.size()); i++) {
        Node* temp = new Node(arr[i], nullptr);
        mover -> next = temp;
        mover = temp;
    }
}

void printList(Node* head) {
    Node* curr_node = head;
    while(curr_node != nullptr) {
        cout<< curr_node ->val << " ";
        curr_node = curr_node -> next;
    }
}


void reverseLL(Node*& head) {
    if(head == nullptr || head -> next == nullptr) return;
    Node* prev = nullptr;
    Node* curr = head;
    Node* next_ = nullptr;

    while(curr != NULL) {
        next_ = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next_;
        
    }
    //
    // curr -> next =prev;
    head = prev;
    return;
}

// using stack
// Function to reverse the linked list
void reverseList(Node*& head) {
      
    // Create a stack to store the nodes
    stack<Node*> s;
  
    Node* temp = head;
  
      // Push all nodes except the last node into stack
    while (temp->next != NULL) {
        s.push(temp);
        temp = temp->next;
    }
      
      // Make the last node as new head of the linked list
    head = temp;
  
      // Pop all the nodes and append to the linked list
    while (!s.empty()) {
          
        // append the top value of stack in list
        temp->next = s.top();
        
          // Pop the value from stack
        s.pop();
        
          // move to the next node in the list
        temp = temp->next;
    }
      
      // Update the next pointer of last node of stack to NULL
    temp->next = NULL;
  
      return;
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    // Node* head = new Node(val,  nullptr);
    
    Node* head = nullptr;
    convertArr2LL(head, arr);
    cout<<"Before: ";
    printList(head);
    cout<<"\nReversed: ";
    reverseLL(head);
    printList(head);
    
    return 0;
}