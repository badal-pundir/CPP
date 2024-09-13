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

void deleteHead(Node*& head) {
    if(head == nullptr) {
        delete(head);
        return;
    }
    Node* temp = head;
    head = head -> next;
    head -> back = nullptr;
    // cout<< endl<< temp->val<< endl; // have to delete temp's next which is head now.
    temp -> next = nullptr;
    delete(temp);
}

void deleteTail(Node*& head) {
    if(head == nullptr){
        delete(head);
        return;
    }
    Node* temp = head;
    Node* prev = nullptr;
    while(temp -> next != NULL) {
        // prev = temp;  can be done outside the while loop, we don't have to store the prev.
        temp = temp -> next;
    }

    prev = temp -> back;
    prev -> next = nullptr;
    temp -> back = nullptr;
    temp -> next = nullptr; // which is already null
    delete(temp);
    return;
}

void deleteKth(Node*& head, int k) {
    Node* mover = head;
    if(head -> next == nullptr) {
        head = nullptr;
    }
    
    if(k == 1) {
        head = mover -> next;
        head -> back = nullptr;
        delete(mover);
        return;
    }
    int count = 1;


    while (count!=k)
    {   
        count ++;
        mover = mover -> next;
    }

    Node* temp = mover -> next;
    Node* prev = mover -> back;
    prev -> next = temp;
    if(temp == nullptr) cout<< "\nYES!!!!!!!!!\n";
    if(temp != nullptr){
        temp -> back = prev;
        // prev -> next = nullptr;
    }

    delete(mover);

    
}
int main() {
    vector<int> arr = {12, 4, 6, 34, 98, 34, 54, 230};
    Node* head = convertArr2DLL(arr);
    printdll(head);
    cout<<endl;
    deleteHead(head);
    cout<< "deleting head node: ";
    printdll(head);
    cout<<endl;
    deleteTail(head);
    cout<< "deleting tail node: ";
    printdll(head);
    cout<<endl;
    cout<< "deleting 6th node: ";
    deleteKth(head, 6);
    printdll(head);
    cout<<endl;

    return 0;
}
