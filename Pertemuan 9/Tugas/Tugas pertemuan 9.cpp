#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};


Node* insertNode(Node* root, int value) {
    if (root == NULL) {
        return new Node(value);
    }

    if (value < root->data) {
        root->left = insertNode(root->left, value);
    } else {
        root->right = insertNode(root->right, value);
    }

    return root;
}

void preOrderTraversal(Node* root) {
    if (root == NULL) return;

    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void inOrderTraversal(Node* root) {
    if (root == NULL) return;

    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

void postOrderTraversal(Node* root) {
    if (root == NULL) return;

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}

int main() {
   
    Node* root = NULL;
    int arr[5];
    int n;
    
for (n = 0; n<=4; n++){
 cout << "masukan angka ke-" << n+1 << ": ";
 cin>>arr[n];
 }
 cout << endl;
 
    
    root = insertNode(root,arr[0]);
    root = insertNode(root, arr[1]);
    root = insertNode(root, arr[2]);
    root = insertNode(root, arr[3]);
    root = insertNode(root, arr[4]);

    
    cout << "Pre-order : ";
    preOrderTraversal(root);
    cout << endl;
    
    cout << "In-order : ";
    inOrderTraversal(root);
    cout << endl;

    cout << "Post-order : ";
    postOrderTraversal(root);
    cout << endl;

    return 0;
    
	}
