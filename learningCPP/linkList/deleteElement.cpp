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

void deleteEl( Node*& head, int el) {
    if(head -> data == el) {
        Node* temp = head;
        head = head -> next;
        free(temp);
        return;
    }
    Node* temp = head;
    Node* prev = nullptr;

    while(temp != nullptr) {
        if(temp -> data == el) {
            prev -> next = prev -> next -> next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp -> next;
    }

    return;
}
// deleting kth element
void deleteKth(Node*& head, int position) {

    // if list is empty
    if(head == nullptr) return;

    Node* temp = head;

    // if k = 1, index 0
    if( position == 1) { 
        head = head -> next;
        delete temp;
        return;
    }
    // deleting kth element

    // Node* temp = head;
    Node* prev = nullptr;
    int k = 1;

    while(temp != nullptr && k < position) {
        prev = temp;
        temp = temp -> next;
        k++;
    }

    if(temp == nullptr) return;

    prev->next = temp->next;
    delete temp;
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
        cout<< curr_node ->data << " ";
        curr_node = curr_node -> next;
    }
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    // Node* head = new Node(data,  nullptr);
    
    Node* head = nullptr;
    convertArr2LL(head, arr);
    cout<< "Before: ";
    printList(head);
    cout<< endl;
    // deleteAtTail(head);
    cout<< "After: ";
    // printList(head);

    deleteEl(head, 2);
    cout<< "Deleting node having data(2) position:\n";
    printList(head);

    return 0;
}