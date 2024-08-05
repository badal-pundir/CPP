#include<iostream>
#include<vector>
using namespace std;

struct Node 
{
    int data;
    Node* next = nullptr;
    Node(int data_param){
        data = data_param;
        next = nullptr;
    }
};

int lengthofll(Node* head) {
    Node* curr_node = head;
    int len = 0;
    while(curr_node!= nullptr){     // while(curr_node)
        len ++;
        curr_node = curr_node -> next;
    }

    return len;
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

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    // Node* head = new Node(data,  nullptr);
    
    Node* head = nullptr;
    convertArr2LL(head, arr);
    cout<<"length of the LL: "<< lengthofll(head);
    return 0;
}