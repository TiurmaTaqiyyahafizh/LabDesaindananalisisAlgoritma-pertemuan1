#include <iostream>
using namespace std;

//definisi struktur node
struct TreeNode{
	int data;
	TreeNode* left;
	TreeNode* right;
	
	//konstruktor untuk membuat node baru
	TreeNode(int value) : data(value), left(NULL), right(NULL){} //mengganti null ptr dengan null
};

int main(){
	//menentukan simpul" pohon
	
	TreeNode* root = new TreeNode(1);
	root -> left = new TreeNode(2);
	root -> right = new TreeNode(5);
	root -> left ->left = new TreeNode(4);
	root -> left -> right = new TreeNode(5);
	
	//menampilkan nilai simpul" pohon
	cout << "nilai simpul-simpul pohon: "<<endl;
	cout << "akar: "<<root ->data<<endl;
	cout << "anak kiri dari akar: "<<root->right->data<<endl;
	cout << "anak kanan dari akar: "<<root->left->right->data<<endl;
	cout << "anak kiri dari anak kiri dari akar"<< root->left->left->data<<endl;
	cout << "anak kanan dari anak kiri dari akar: "<<root->left->right->data<<endl;
	
	//membersuhkan memory
	delete root->left->left;
	delete root->left->right;
	delete root->left;
	delete root->right;
	delete root;
	
	return 0;
}
