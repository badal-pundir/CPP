#include<bits/stdc++.h>
using namespace std;

// level order traversal
struct TreeNode {
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

void levelOrderTraversal(TreeNode* root) {
    if(!root) return;

    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()) {
        TreeNode* current = q.front();
        q.pop();

        cout<< current -> data << " ";

        if(current->left) q.push(current->left);
        if(current->right) q.push(current->right);
    }
}
int main() {
    TreeNode* root = nullptr;
    int elements[] = {50, 30, 70, 20, 40, 60, 80, 10, 35, 65}; 
    
    for(int value: elements) {
        root = insert(root, value);
    }

    levelOrderTraversal(root);
    return 0;
}