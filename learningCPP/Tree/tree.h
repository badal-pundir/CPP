#ifndef TREE_H
#define TREE_H  
#include<iostream>


struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int data_);
};

// TreeNode::TreeNode(int data_) : data(data_), left(nullptr), right(nullptr) {}



TreeNode* insert(TreeNode* treeNode, int val);


void inOrderTraversal(TreeNode* root);
void preOrderTraversal(TreeNode* root);
void postOrderTraversal(TreeNode* root);
#endif
