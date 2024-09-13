// Implementing stack using linked list

#include<bits/stdc++.h>
using namespace std;

class StackNode
{
    public:
        int val;
        StackNode* next;
};

StackNode* newNode(int val){
    StackNode* stackNode = new StackNode();
    stackNode -> val = val;
    stackNode -> next = NULL;
    return stackNode;
}

bool isEmpty(StackNode* root){
    return !root;
}

void push(StackNode** root, int val) {
    StackNode* stackNode = newNode(val);
    stackNode -> next = *root;
    cout<< val<< " pushed to stack\n";
}

int pop(StackNode** root){
    if(isEmpty(*root)) {
        return INT_MIN;
    }
    StackNode* temp = *root;
    *root = (*root) -> next;
    int popped = temp -> val;
    free(temp);

    return popped;
}
int peek(StackNode* root){
    if(isEmpty(root)){
        return INT_MIN;
    }
    return root -> val;
}

int main() {
    StackNode* root = NULL;
    if(isEmpty(root)){
        cout<< "Stack is empty\n";
    }
    push(&root, 10);
    push(&root, 20);
    push(&root, 30);

    cout<< pop(&root) << " popped from stack\n";

    cout<< "Topp element is "<< peek(root) << endl;

    cout<<"Elements present in stack: ";

    while(!isEmpty(root)){
        cout<< peek(root)<< " ";
        pop(&root);
    }

    return 0;
}