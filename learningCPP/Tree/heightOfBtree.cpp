#include <iostream>
#include <algorithm>
using namespace std;

// Definition for a binary tree node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

int treeHeight(Node* root) {
    if(root == nullptr) return 0;
    int lh = treeHeight(root -> left);
    int rh = treeHeight(root -> right);
    int max_ = max(lh, rh);
    return 1 + max_;
}
int main() {
    // Creating a binary tree
    //       1
    //      / \
    //     2   3
    //    / \   
    //   4   5   

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->left -> left = new Node(44);
    root->left->left -> left-> left= new Node(444);
    root->left->right = new Node(5);
    root->left->right ->right = new Node(55);
    root->left->right ->right->right = new Node(555);
    root->left->right ->right ->right ->right= new Node(5555);

    // Calculate the diameter of the tree
    int treeMaxHeight_ = treeHeight(root);
    cout << "Max height of the binary tree: " << treeMaxHeight_ << endl; // Output: 3

    // Clean up memory (optional)
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}