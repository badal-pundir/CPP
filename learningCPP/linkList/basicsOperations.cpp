#include<iostream>
#include<vector>
using namespace std;

// Creating a node.
struct Node
{
    int data;
    Node* next;
    Node(int data) : data(data), next(nullptr){};
};
/*
Node*:
Node* is a pointer to a Node. It means head is a pointer that can hold 
the address of a Node object.
Node*&:
Node*& is a reference to a Node* pointer. This means that head is a reference 
to a pointer to a Node.
Using a reference to a pointer allows functions to modify the actual pointer 
itself (not just the data it points to). This is useful when you want to update 
the pointer (e.g., to point to a new node) and have that change reflect outside 
the function.
*/
/*
void insertAtHead(Node* head, int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;  <<<<>>>>// This will not change the caller's head pointer
}
*/

// Converting the array to LL.
void convertArr2LL(Node*& head, vector<int>& arr) {
    head = new Node(arr[0]);
    Node* mover = head;
    
    for(int i = 1; i < static_cast<int>(arr.size()); i ++) {
        Node* temp = new Node(arr[i]);
        mover -> next = temp;
        mover = temp;
    }
}
// Adding node at the beginning.
void insertAtHead(Node*& head, int data) {
    Node* newNode = new Node(data);
    newNode -> data = data;
    head = newNode;
}
// Adding a node at end of the ll.  
void insertAtTail(Node*& head, int data) {
    Node* newNode = new Node(data);
    if(head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp -> next != nullptr) {
       temp = temp -> next;
    }
    temp -> next = newNode;
}

// Inserting a node.
void insertAtPosition(Node*& head, int data, int position) {
    Node* newNode = new Node(data);
    if(position == 0) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;
    for(int i = 0;  temp!= nullptr && i< position -1; i++) {
        temp = temp->next;
    }
    if(temp == nullptr) {
        cout<< "Position out of bounds" << endl;
        delete newNode;
        return;
    }

    newNode -> next = temp -> next;
    temp -> next = newNode;
}

// Deletion operations.
void deleteAtHead(Node*& head) {
    if(head == nullptr) return ;
    Node* temp = head;
    head = head -> next;
    delete temp;
}

// Deleting the node.
void deleteAtTail(Node*& head) {
    // no element in tht ll
    if(head == nullptr) return ;
    // only one element in the ll;
    if(head -> next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }
    //
    Node* temp = head;
    while (temp -> next -> next != nullptr)
    {
        temp = temp -> next;
    }
     
    delete temp -> next;
    temp -> next = nullptr;
}

// 
void printList(Node* head) {
    Node* curr_node = head;
    while(curr_node != nullptr) {
        cout<< curr_node ->data << " ";
        curr_node = curr_node -> next;
    }
}

// 
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    Node* head = nullptr;

    convertArr2LL(head, arr);

    printList(head);
    insertAtHead(head, 8);
    insertAtTail(head, 9);
    insertAtTail(head, 10);
    printList(head);
    // insertAtPosition(head, 4, 1);
}
