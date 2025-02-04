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

// Helper function to calculate height and diameter
int heightAndDiameter(Node* node, int& diameter) {
    if (node == nullptr) {
        return 0; // Height of an empty tree is 0
    }

    // Recursively calculate the height of the left and right subtrees
    int leftHeight = heightAndDiameter(node->left, diameter);
    int rightHeight = heightAndDiameter(node->right, diameter);

    // Update the diameter if the current path is longer
    diameter = max(diameter, leftHeight + rightHeight);

    // Return the height of the current node
    return 1 + max(leftHeight, rightHeight);
}

// Function to calculate the diameter of the binary tree
int diameter(Node* root) {
    int diameter = 0; // Initialize diameter
    heightAndDiameter(root, diameter); // Calculate height and diameter
    return diameter;
}

// Example usage
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
    root->left->right = new Node(5);

    // Calculate the diameter of the tree
    int treeDiameter = diameter(root);
    cout << "Diameter of the binary tree: " << treeDiameter << endl; // Output: 3

    // Clean up memory (optional)
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}