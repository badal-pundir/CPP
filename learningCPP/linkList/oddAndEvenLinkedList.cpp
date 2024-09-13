#include<bits/stdc++.h>
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

Node* odd_even_LL(Node* &head) {

    // vector<int> oddEven;
    // Node* temp = head;  
    // int i = 2;
    // while(i-- > 0) {
    // while(temp != nullptr ){//&& temp -> next != nullptr) {
    //     oddEven.push_back(temp->val);
    //     if(temp -> next == nullptr || temp -> next -> next == nullptr)break;
    //     temp = temp -> next -> next;
    
    // }
    // // if(temp) oddEven.push_back(temp -> val);
    // temp = head -> next;
    // }
    // Node* mover = head;
    
    // int k = 0;
    // while(mover != nullptr) {
    //     mover -> val = oddEven[k++];
    //     mover = mover -> next;
    // }

    Node* odd = head;
    Node* even = head -> next;
    Node* evenHead = head -> next;
    
    while(
        (even != nullptr && even -> next != nullptr) && 
        (odd != nullptr && odd -> next != nullptr)
        ) {
        odd -> next = odd -> next -> next;
        odd = odd -> next;

        even -> next = even -> next -> next;
        even = even -> next;
    }

    odd -> next = evenHead;
    even -> next = nullptr;
    return head;

    
}
int main() {
    vector<int> arr = {1, 3, 4, 2, 5, 6};
    
    Node* head = nullptr;
    convertArr2LL(head, arr);
    cout<<"Original Linked List: ";
    printList(head);

    Node* ans = odd_even_LL(head);
    cout<<"\nOdd-Even Linked List: "<<endl;
    printList(ans);
    
    return 0;
}