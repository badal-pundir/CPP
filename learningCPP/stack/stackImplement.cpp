// Implementing stack using linked list

#include<bits/stdc++.h>
using namespace std;

class StackNode
{
    public:
        int data;
        StackNode* next;
};

StackNode* newNode(int data){
    StackNode* stackNode = new StackNode();
    stackNode -> data = data;
    stackNode -> next = NULL;
    return stackNode;
}

bool isEmpty(StackNode* root){
    return !root;
}

void push(StackNode** root, int data) {
    StackNode* stackNode = newNode(data);
    stackNode -> next = *root;
    cout<< data<< " pushed to stack\n";
}

int pop(StackNode** root){
    if(isEmpty(*root)) {
        return INT_MIN;
    }
    StackNode* temp = *root;
    *root = (*root) -> next;
    int popped = temp -> data;
    free(temp);

    return popped;
}
int peek(StackNode* root){
    if(isEmpty(root)){
        return INT_MIN;
    }
    return root -> data;
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