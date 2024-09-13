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

int findMiddelEl(Node* head) {
    int count = 0;
    if(head -> next == nullptr) {
        return head -> val;
    }
    Node* mover = head;
    while(mover != nullptr) {
        mover = mover -> next;
        count++;
    }
    int mid = (count + 1) / 2;
    Node* mover_2 = head;
    int i = 1;
    while(i!=mid) {
        mover_2 = mover_2 -> next;
        i++;
    }
    return mover_2 -> val;

}

// Floyd’s Cycle Finding Algorithm:
int findMiddleEl_2pointer(Node* head) {
    if (head == nullptr) {
        throw std::runtime_error("The list is empty.");
    }

    Node* slow = head;
    Node* fast = head;
    Node* prev = nullptr;

    // Move fast pointer by 2 and slow pointer by 1
    while (fast != nullptr && fast->next != nullptr) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    // slow will be pointing to the second middle middle element in case of even number of nodes head fast will point to nullptr i.e endo of ll.
    return fast? slow->val : prev -> val;
}

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
int main() {
    vector<int> arr = {1, 2, 3, 4};
    // Node* head = new Node(val,  nullptr);
    
    Node* head = nullptr;
    convertArr2LL(head, arr);
    printList(head);
    cout<< "\nMiddle element: "<< findMiddleEl_2pointer(head);
    
    return 0;
}