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

Node* add_twoLL(Node* head1, Node* head2) {
    Node* ans = nullptr;
    Node* temp1 = head1;
    Node* temp2 = head2;
    Node* temp3 = ans;
    int rem = 0;
    int sum = 0;
    while(temp1!= nullptr && temp2 != nullptr) {
        sum = temp2->data + temp1 -> data + rem;
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
        sum = temp1->data + rem;
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
        sum = temp2->data + rem;
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
int main() {
    vector<int> arr1 = {3, 5, 5};
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
    Node* ans = add_twoLL(head1, head2);
    cout<<"\nAddition : ";
    printList(ans);    
    return 0;
}