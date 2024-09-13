#include<iostream>
#include<vector>
using namespace std;

// Creating a node.
struct Node
{
    int val;
    Node* next;
    Node(int val) : val(val), next(nullptr){};
};

void insertHead(Node*& head, int el) {
    Node* temp = new Node(el);
    temp -> next = head ;
    head = temp;
    return ;
}

void insertTail(Node*& head, int el) {
    if(head -> next == nullptr) {
        head -> next = new Node(el);
    }

    Node* temp = head;
    while(temp -> next!= nullptr) {
            temp = temp -> next;
    }

    temp -> next = new Node(el);
    return;


}

void insertAtIndex(Node*& head, int el, int pos) {
    if(pos == 1) {
        insertHead(head, el);
        return;
    }
    int count = 1;
    Node* mover = head;
    Node* newNode = new Node(el);
    Node* prev = nullptr;
    while(count <= pos && mover != nullptr) {
        
        if(count == pos) {
            prev -> next = newNode;
            newNode -> next = mover;
            return;
        }
        prev = mover;
        mover = mover -> next;
        count ++;
    }
    if(mover == nullptr)     
    return;
}
void convertArr2LL(Node*& head, vector<int>& arr) {
    head = new Node(arr[0]);
    Node* mover = head;
    
    for(int i = 1; i < static_cast<int>(arr.size()); i++) {
        Node* temp = new Node(arr[i]);
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
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    // Node* head = new Node(val,  nullptr);
    
    Node* head = nullptr;
    convertArr2LL(head, arr);
    cout<< "Before: ";
    printList(head);
    cout<< endl;
    // deleteAtTail(head);
    // cout<< "Insert 10 at Head: ";
    // insertHead(head, 10);
    // printList(head);
    // cout<<endl;
    // cout<< "Insert 90 at Tail: ";
    // insertTail(head, 90);
    // printList(head);
    // cout<<endl;

    cout<< "Insert 87 at position 3: ";
    insertAtIndex(head, 87, 3);
    printList(head);
    cout<<endl;

    return 0;
}