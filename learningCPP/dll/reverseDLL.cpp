#include<iostream>
#include<vector>
using namespace std;

struct Node
{
    int val;
    Node* next;
    Node* back;

    Node(int val_p, Node* next_p, Node* back_p): 
    val(val_p), next(next_p),  back(back_p){}

    Node(int val_p):
    val(val_p), next(nullptr), back(nullptr){};
};

Node* convertArr2DLL(vector<int> &arr) {
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1; i< static_cast<int>(arr.size()); i++) {
        Node* temp = new Node(arr[i], nullptr, prev);
        prev -> next = temp;
        prev = temp;
    }

    return head;
}
void printdll(Node* head) {
    while (head!=NULL)
    {
        cout<< head -> val <<" ";
        head = head -> next;
    }
    
}

void reverseDLL(Node*& head) {
    if(head == nullptr || head -> next == nullptr) return;

    Node* curr = head;
    Node* prev = nullptr;

    while (curr!=nullptr)
    {
        Node* temp = curr -> next;
        curr -> next = curr -> back;
        curr -> back = temp;
        prev = curr;
        curr = temp;
    }
    head = prev;
    return;
    
}
int main() {
    vector<int> arr = {12, 4, 6, 34, 98};
    Node* head = convertArr2DLL(arr);
    cout<<"Befor: ";
    printdll(head);
    cout<<"\nReversed DLL: ";
    reverseDLL(head);
    printdll(head);
    return 0;
}
