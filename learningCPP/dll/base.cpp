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
int main() {
    vector<int> arr = {12, 4, 6, 34, 98};
    Node* head = convertArr2DLL(arr);
    printdll(head);
    return 0;
}
