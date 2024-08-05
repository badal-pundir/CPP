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

void convertArr2LL(Node*& head, vector<int>& arr) {
    head = new Node(arr[0]);
    Node* mover = head;
    
    for(int i = 1; i < static_cast<int>(arr.size()); i++) {
        Node* temp = new Node(arr[i]);
        mover -> next = temp;
        mover = temp;
    }
}

int checkIfPresent(Node* head, int val) {
    Node* temp = head;
    int index = 0;
    while(temp) {
        if(temp -> data == val) return index;
        index++;
        temp = temp -> next;
    }
    return -1;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    // Node* head = new Node(data,  nullptr);
    
    Node* head = nullptr;
    convertArr2LL(head, arr);
    int val = 10;
    int res  = checkIfPresent(head, val);
    if(res == -1) {
        cout<< val << " is not present in the linked list";
    }
    else 
    cout<< val << " is present in the linked list at index: "<< res;
    return 0;
}