#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

bool isBST(Node* node, int min, int max) {
    if (node==NULL) return true;
             
    if (node->data < min || node->data > max) return false;
    
    return isBST(node->left, min, node->data - 1) && isBST(node->right, node->data + 1, max);
}

bool checkBST(Node* root) {
    return isBST(root, INT_MIN, INT_MAX);
}