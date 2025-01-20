#include<bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int data_): data(data_), left(nullptr), right(nullptr){}
};

TreeNode* insert(TreeNode* treeNode, int val) {
    if(treeNode == nullptr) {
        return new TreeNode(val);
    }
    if(val < treeNode -> data) {
        treeNode -> left = insert(treeNode -> left, val);
    } else {
        treeNode -> right = insert(treeNode -> right, val);
    }
    return treeNode;
}
// pre-order traversal (ROOT LEFT RIGHT)
void preOrder(TreeNode* treeNode) {
    if(treeNode == nullptr) return;
    cout<< treeNode -> data<< " ";
    preOrder(treeNode -> left);
    preOrder(treeNode -> right);
}

// In-order traversl
void inOrder(TreeNode* treeNode) {
    if(treeNode == nullptr) return;
    inOrder(treeNode -> left);
    cout<< treeNode -> data << " ";
    inOrder(treeNode -> right);
}
int main() {
    TreeNode* root = nullptr;
    int elements[] = {50, 30, 70, 20, 40, 60, 80, 10, 35, 65}; 
    
    for(int value: elements) {
        root = insert(root, value);
    }
    cout<< "PreOrder Traversal: ";
    preOrder(root);
    cout<<endl; 
    cout<< "InOrder Traversal: ";
    inOrder(root);
    return 0;
}