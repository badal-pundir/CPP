#include<iostream>
#include<vector>
using namespace std;

// Creating a node.
struct Node
{
    int val;
    Node* next;
    Node(int val_param, Node* p_next_param) : val(val_param), next(p_next_param){};
    Node(int val_param) : val(val_param), next(NULL){};
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

Node* add_twoLL_MywWay(Node* head1, Node* head2) {
    Node* ans = nullptr;
    Node* temp1 = head1;
    Node* temp2 = head2;
    Node* temp3 = ans;
    int rem = 0; // carry
    int sum = 0;
    while(temp1!= nullptr && temp2 != nullptr) {
        sum = temp2->val + temp1 -> val + rem;
        rem = sum / 10;
        sum = sum % 10;
        Node* resNode = new Node(sum, nullptr);
        if(temp3 == nullptr){ 
            ans = resNode;
            temp3 = resNode;
        }
        else {
            temp3 -> next =  resNode;
            temp3 = resNode;
        }      
        temp1 = temp1 -> next;
        temp2 = temp2 -> next;  

    }


    while(temp1!= nullptr) {
        sum = temp1->val + rem;
        rem = sum / 10;
        sum = sum % 10;
        Node* resNode = new Node(sum, nullptr);
        if(temp3 == nullptr) temp3 = resNode;
        else {
            temp3 -> next =  resNode;
            temp3 = resNode;
        }  
        temp1 = temp1 -> next;

    }
    while(temp2!= nullptr) {
        sum = temp2->val + rem;
        rem = sum / 10;
        sum = sum % 10;
        
        Node* resNode = new Node(sum, nullptr);
        if(temp3 == nullptr) temp3 = resNode;
        else {
            temp3 -> next =  resNode;
            temp3 = resNode;
        }   
        temp2 = temp2 -> next;
    }
    if(rem) {
        Node* resNode = new Node(rem, nullptr);
        temp3 -> next =  resNode;
        temp3 = resNode;
    }
    return ans;

}

Node* striver_add(Node* head1, Node* head2) {
    Node* dummyNode = new Node(-1);
    Node* curr = dummyNode;
    Node* temp1 = head1;
    Node* temp2 = head2;
    int carry = 0;

    while(temp1!=NULL || temp2!=NULL) {
        int sum = carry;
        if(temp1) sum += temp1 -> val;
        if(temp2) sum += temp2 -> val;
        Node* newNode = new Node(sum % 10);
        carry = sum / 10;
        curr -> next = newNode;
        curr = curr -> next;
        if(temp1) temp1 = temp1 -> next;
        if(temp2) temp2 = temp2 -> next;
    }
    if(carry) {
        Node* newNode = new Node(carry);
        curr -> next = newNode;
    }
    return dummyNode -> next;
}

int main() {
    vector<int> arr1 = {3, 5, 5, 5};
    vector<int> arr2 = {4, 5};
    Node* head1 = nullptr;
    Node* head2 = nullptr;
    convertArr2LL(head1, arr1);
    convertArr2LL(head2, arr2);
    cout<<"Link List1:";
    printList(head1);
    cout<<endl;
    cout<<"Link List2:";
    printList(head2);
    // Node* ans = add_twoLL_MywWay(head1, head2);
    Node* ans = striver_add(head1, head2);
    cout<<"\nAddition : ";
    printList(ans);    
    return 0;
}