#include<iostream>
#include<vector>
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

void rotateLL(Node*& head, int k) {
    // k is smaller than ll length.
    if(head == nullptr || head -> next == nullptr) return;
    int count = 0;
    Node* mover = head;
    Node* temp_head = head;
    Node* temp = nullptr;
    while(mover -> next != nullptr) {
        count++;
        if(count == k ) {
            temp = mover;
            mover = mover -> next;
            head = mover; // update head to rotation node.
            temp -> next = nullptr;
            continue;
        }
            mover = mover -> next;
    }
    mover -> next = temp_head;
    return;
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    // Node* head = new Node(val,  nullptr);
    
    Node* head = nullptr;
    convertArr2LL(head, arr);
    printList(head);
    rotateLL(head, 5);
    cout<<"\nAfter rotation: ";
    printList(head);
    return 0;
}