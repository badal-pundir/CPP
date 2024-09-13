#include<bits/stdc++.h>
using namespace std;

struct Node
{   
    int val;
    Node* next;
    Node(int para_val, Node* next_param) : val(para_val), next(next_param){};
    Node(int para_val):val(para_val){};
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
Node* sort012( Node* &head) {
    // Naive method
    /*
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    Node* temp = head;
    
    
    while (temp!= nullptr)
    {   
        int temp_val = temp -> val;
        if(temp_val  == 0) count0++;
        else if(temp_val  == 1)count1 ++;
        else count2++;

        temp = temp -> next;
        
    }

    cout<<"\n"<<count0<<count1<<count2;  
    temp = head;
    
    while(count0) {
        temp->val = 0;
        temp = temp -> next;
        count0--;
    }
    while(count1-- > 0) {
        temp->val = 1;
        temp = temp -> next;
    }
    while(count2-- > 0) {
        temp->val = 2;
        temp = temp -> next;
    }
    */
    // better approach
    if (head == nullptr || head -> next == nullptr) return head;
    
    Node* zeroHead = new Node(-1);
    Node* zero = zeroHead;
    Node* oneHead = new Node(-1);
    Node* one = oneHead;
    Node* twoHead = new Node(-1);
    Node* two = twoHead;
    Node* temp = head;

    while(temp != nullptr) {
        if(temp -> val == 0){
            zero -> next = temp;
            zero = zero -> next;
        }
        else if(temp -> val == 1) {
            one -> next = temp;
            one = one -> next;
        }
        else {
            two -> next = temp;
            two = two -> next;
        }
        temp = temp -> next;
    }

    two -> next = NULL;
    zero -> next = (oneHead -> next)? (oneHead -> next): (twoHead->next);
    one -> next =  twoHead -> next;
    head = zeroHead -> next;
    delete zeroHead;
    delete oneHead;
    delete twoHead;
    delete temp;

    return head;
}
int main() {
    vector<int> arr = {0,0,0};
    // Node* head = new Node(val,  nullptr);
    
    Node* head = nullptr;
    convertArr2LL(head, arr);
    cout<<"Original Linked List: ";
    printList(head);
    Node* ans = sort012(head);
    cout<<"\nSorted Linked List: ";
    printList(ans);
    
    return 0;
}