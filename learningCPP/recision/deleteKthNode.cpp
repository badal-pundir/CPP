#include<bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    Node* next;
    Node(int data_, Node* next_): data(data_), next(next_){};
    Node(int data_): data(data_), next(nullptr){};
};

Node* returnLLfromArray(vector<int> arr) {
    Node* head = new Node(arr[0], nullptr);
    Node* mover = head;
    for(int i = 1; i < static_cast<int>(arr.size()); i++) {
        Node* temp = new Node(arr[i], nullptr);
        mover -> next = temp;
        mover = temp;
    }
    return head;
}
void deleteKthNode(Node*& head, int k) {
    Node* mover = head;
    Node* following = head; 
    int counter = 1;
    while(counter!=k) {
        following = mover;
        mover = mover -> next;
        counter++;        
    }
    following -> next = mover -> next;
    delete(mover);
}
void recursiveDelete(Node*& mover, int k, int count, Node*& following) {
    if(mover -> next == nullptr) return;
    following = mover;
    mover = mover -> next;
    if(count == k) {
        following -> next = mover -> next;
        delete(mover);
        return;
    }
    recursiveDelete(mover -> next, k,  count + 1, following);
}
void printLL(Node* head) {
    Node* mover = head;
    while(mover != nullptr) {
        cout<< mover -> data<<" ";
        mover = mover -> next;
    }
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    Node* head = nullptr;
    head = returnLLfromArray(arr);
    cout<<"Before delete: ";
    printLL(head);
    cout<<"\nAfter delete 3th node: ";
    // deleteKthNode(head, 3);
    int k = 3;
    recursiveDelete(head, k, 1, head);
    printLL(head);

    // cout<< head -> data;
    return 0;
}