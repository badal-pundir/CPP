#include<bits/stdc++.h>
#include "tree.h"
using namespace std;

int findMaxDepth(TreeNode* root) {

    if(root == nullptr) return 0;

    int lh = findMaxDepth(root -> left);
    int rh = findMaxDepth(root -> right);

    return 1 + max(lh, rh);
}
// TreeNode* insert(TreeNode* treeNode, int val) {
//     if(treeNode == nullptr) {
//         return new TreeNode(val);
//     }
//     if(val < treeNode -> data) {
//         treeNode -> left = insert(treeNode -> left, val);
//     } else {
//         treeNode -> right = insert(treeNode -> right, val);
//     }
//     return treeNode;
// }
int main() {
    TreeNode* root = nullptr;
    int elements[] = {50, 30, 70, 20, 40, 60, 80, 10, 35, 65}; 
    
    for(int value: elements) {
        root = insert(root, value);
    }
    cout<< "max depth: "<< findMaxDepth(root);

    // inOrderTraversal(root);
    return 0;
}