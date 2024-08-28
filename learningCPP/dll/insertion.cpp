#include<iostream>
#include<vector>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node* back;

    Node(int data_p, Node* next_p, Node* back_p): 
    data(data_p), next(next_p),  back(back_p){}

    Node(int data_p):
    data(data_p), next(nullptr), back(nullptr){};
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
        cout<< head -> data <<" ";
        head = head -> next;
    }
    
}
// insert before pos/
void insertBeforeKth(Node*& head, int data, int pos) {
    if(pos == 1){
        Node* newNode = new Node(data,head,nullptr);
        head -> back = newNode;
        head = newNode;
        return;
    }
    int count = 1;
    // Node* newNode = new Node(data);
    Node* mover = head;
    while(mover != nullptr) {
        count++;
        mover = mover -> next;
        if(count == pos) break;
    }
    if(mover == nullptr) {
        cout<< "Can't insert at " << pos <<".";
        return;
    }
    Node* prev = mover -> back;
    Node* newNode = new Node(data, mover, prev);
    prev -> next = newNode;
    newNode -> back = prev;
    newNode -> next = mover;
    mover -> back = newNode;

}
int main() {
    vector<int> arr = {12, 4, 6, 34, 98};
    Node* head = convertArr2DLL(arr);
    printdll(head);
    cout<<endl;
    int pos = 1;
    insertBeforeKth(head, 1000, pos);
    cout<< "insert before head: ";
    printdll(head);
    cout<<endl;
    pos = 6;
    insertBeforeKth(head, 1000, pos);
    cout<< "insert before tail node: ";
    printdll(head);
    cout<<endl;
    pos = 3;
    cout<< "insert before position "<< pos<< " node: ";
    insertBeforeKth(head, 1000, pos);
    printdll(head);
    cout<<endl;
    return 0;
}
