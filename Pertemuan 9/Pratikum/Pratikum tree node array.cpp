#include <iostream>
using namespace std;

const int MAX_NODES =100;
int tree[MAX_NODES];
int n;
struct TreeNode{
	int data;
	TreeNode* left;
	TreeNode* right;
	
	//konstruktor untuk membuat node baru
	TreeNode(int value) : data(value), left(NULL), right(NULL){} //mengganti null ptr dengan null
};
 
void insertNode (int x){
int curr = 0;
while (tree[curr] != -1){
	if (x<tree[curr]){
		curr = 2*curr+1;
	}else{
		curr = 2*curr+2;
	}
}	
tree[curr] = x;
n++;
}

void inorderTraversal (int curr){
	if (tree[curr] != -1){
		inorderTraversal (2*curr+1);
		cout << tree[curr]<<endl;;
		inorderTraversal(2* curr+2);
	}
	
}

int main(){
	for(int i = 0; i<MAX_NODES;i++){
		tree[i]= -1;
	}
	n=0;
	
	int x;
	int z;
	
	
	int arr[5];
	
	for (int n = 0; n <= 4; ++n) {
        cout << "masukan nilai array indeks ke "<< n <<" pada binary tree : ";
		cin>>arr[n];

  }
  TreeNode* root = new TreeNode(arr[0]);
	root -> left = new TreeNode(arr[1]);
	root -> right = new TreeNode(arr[2]);
	root -> left ->left = new TreeNode(arr[3]);
	root -> left -> right = new TreeNode(arr[4]);
	
	
  cout << "nilai simpul pohon: "<<endl;
  //	cout <<"in-order traversal: ";

	
		cout << "nilai simpul-simpul pohon: "<<endl;
	cout << "akar: "<<root ->data<<endl;
	cout << "anak kiri dari akar: "<<root->left->data<<endl;
	cout << "anak kanan dari akar: "<<root->right->data<<endl;
	cout << "anak kiri dari anak kiri dari akar: "<< root->left->left->data<<endl;
	cout << "anak kanan dari anak kiri dari akar: "<<root->left->right->data<<endl;
	return 0;
}
