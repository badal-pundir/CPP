#include<iostream>
#include<vector>
using namespace std;

struct Node
{
    int data;
    Node* next = nullptr;
    Node(int data_param, Node* next_param) : data(data_param), next(next_param) {};
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

void insertAfterValue(Node*& head, int el, int val) {
    if(head == NULL) {
        return;
    }
    if(head -> data == val) {
        Node* temp = new Node(el, nullptr); // it will be the last node;
        head -> next = temp;
        return;
    }

    Node* temp = head;

    while(temp -> next != NULL) {
        if(temp -> data == val) {
            Node* x = new Node(el,temp -> next);
            temp -> next = x;
            break;
        }
        temp = temp -> next;
    }
    if(temp -> data == val) { // if value is at last node.
        Node* x = new Node(el, nullptr);
        temp -> next = x;
        return;
    }
    cout<<"entered value is not in the list";
}

void printList(Node* head) {
    Node* curr_node = head;
    while(curr_node != nullptr) {
        cout<< curr_node ->data << " ";
        curr_node = curr_node -> next;
    }
}
int main() {
    vector<int> arr = {1, 2, 3, 5};
    // Node* head = new Node(data,  nullptr);
    
    Node* head = nullptr;
    convertArr2LL(head, arr);
    cout<< "Before: ";
    printList(head);
    cout<< "\nAfter inserting 4 after 3: ";
    // insert element 4 after value 3.
    insertAfterValue(head, 4, 5);
    printList(head);


    
    return 0;
}