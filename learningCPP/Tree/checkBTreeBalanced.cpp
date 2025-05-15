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

int check(Node* node) {
    if(node == nullptr) {
        return 0;
    } 
    int lh = check(node -> left);
    int rh = check(node -> right);
    if(lh == -1 || rh == -1) return -1;
    if(abs(lh - rh) > 1) return -1;
    return max(lh, rh) + 1;
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
    // root->left->left ->left = new Node(4);
    // root->left->left  ->left->left = new Node(4);

   cout<< check(root);
    // Clean up memory (optional)
    // delete root->left->left ->left;
    // delete root->left->left ->left -> left;
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}