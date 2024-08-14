#include<bits/stdc++.h>
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

Node* odd_even_LL(Node* &head) {

    // vector<int> oddEven;
    // Node* temp = head;  
    // int i = 2;
    // while(i-- > 0) {
    // while(temp != nullptr ){//&& temp -> next != nullptr) {
    //     oddEven.push_back(temp->data);
    //     if(temp -> next == nullptr || temp -> next -> next == nullptr)break;
    //     temp = temp -> next -> next;
    
    // }
    // // if(temp) oddEven.push_back(temp -> data);
    // temp = head -> next;
    // }
    // Node* mover = head;
    
    // int k = 0;
    // while(mover != nullptr) {
    //     mover -> data = oddEven[k++];
    //     mover = mover -> next;
    // }

    Node* temp1 = head;
    Node* temp2 = head -> next;
    while(temp1 != nullptr) {
        if(temp1 -> next -> next == nullptr){
            temp1 -> next = temp1 -> next -> next;
            break;
        }
        if(temp1 -> next == nullptr){
            break;
        }
    }
    temp1 -> next = temp2;
    while(temp2 != nullptr) {
        if(temp2 -> next -> next == nullptr){
            temp2 -> next = temp2 -> next -> next;
            break;
        }
        if(temp2 -> next == nullptr){
            break;
        }
    }
    temp2 -> next = nullptr;
    return head;

    
}
int main() {
    vector<int> arr = {1, 3, 4, 2, 5, 6};
    
    Node* head = nullptr;
    convertArr2LL(head, arr);
    printList(head);

    Node* ans = odd_even_LL(head);
    cout<<"\nOdd-Even Linked List: "<<endl;
    printList(ans);
    
    return 0;
}