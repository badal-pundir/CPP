#include "tree.h"
#include<iostream>
using namespace std;


TreeNode::TreeNode(int data_) : data(data_), left(nullptr), right(nullptr) {}
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

// In-order traversal
void inOrderTraversal(TreeNode* root) {
    if (root == nullptr) return;
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

// Pre-order traversal
void preOrderTraversal(TreeNode* root) {
    if (root == nullptr) return;
    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

// Post-order traversal
void postOrderTraversal(TreeNode* root) {
    if (root == nullptr) return;
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}