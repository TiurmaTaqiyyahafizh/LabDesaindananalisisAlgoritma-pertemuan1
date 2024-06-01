#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) : data(value), left(NULL), right(NULL) {}
};


void inOrderTraversal(Node* node) {
    if (node == NULL) return;
    inOrderTraversal(node->left);
    cout << node->data << " ";
    inOrderTraversal(node->right);
}


void preOrderTraversal(Node* node) {
    if (node == NULL) return;
    cout << node->data << " ";
    preOrderTraversal(node->left);
    preOrderTraversal(node->right);
}


void postOrderTraversal(Node* node) {
    if (node == NULL) return;
    postOrderTraversal(node->left);
    postOrderTraversal(node->right);
    cout << node->data << " ";
}

int main() {
    
    Node* root = new Node(18);
    root->left = new Node(30);
    root->left->left = new Node(29);
    root->left->right = new Node(32);
    root->right = new Node(33);

    
    cout << "In-order : ";
    inOrderTraversal(root);
    cout << endl;

    cout << "Pre-order : ";
    preOrderTraversal(root);
    cout << endl;

    cout << "Post-order : ";
    postOrderTraversal(root);
    cout << endl;

    return 0;
}
