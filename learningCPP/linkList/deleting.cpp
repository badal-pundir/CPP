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
    cout<< "After: ";
    // printList(head);

    deleteKth(head, 2);
    cout<< "Deleting node at 2nd position:\n";
    printList(head);

    return 0;
}