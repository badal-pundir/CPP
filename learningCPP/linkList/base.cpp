#include<iostream>
#include<vector>
using namespace std;

// Creating a node.
struct Node
{
    int data;
    Node* next;
    Node(int data_param, Node* p_next_param) : data(data_param), next(p_next_param){};
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
        cout<< curr_node ->data << " ";
        curr_node = curr_node -> next;
    }
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    // Node* head = new Node(data,  nullptr);
    
    Node* head = nullptr;
    convertArr2LL(head, arr);
    printList(head);
    
    return 0;
}