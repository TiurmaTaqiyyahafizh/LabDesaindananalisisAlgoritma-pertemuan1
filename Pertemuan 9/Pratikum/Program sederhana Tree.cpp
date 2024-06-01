#include <iostream>
using namespace std;
class node{
	public :
		int data;
		node* left;
		node* right;
		
		node(int value){
			data = value;
			left = NULL;
			right = NULL;
		}
};

class tree{
	public:
		node* root;
		tree(){root = NULL; }
		
		void insert(int value){
			root = insert(root, value);
		}
		
		node* insert(node* Node, int value){
			if (Node == NULL){
				Node = new node(value);
			}else if(value <= Node ->data){
				Node ->left = insert(Node ->left, value);
			}else{
				Node ->right = insert (Node->right, value);
			}
			return Node;
		}
		
		void inorder(){inorder(root);}
		
		void inorder (node*Node){
			if (Node == NULL)return;
			inorder (Node->left);
			cout << Node->data<< " ";
			inorder (Node->right);
		}
		
		void Preorder(){Preorder(root);}
		void Preorder(struct node* Node){
    		if (Node == NULL)
        	return;

    		cout << Node->data << " ";
			Preorder(Node->left);
    		Preorder(Node->right);
		}

};

int main(){
	tree Tree;
	Tree.insert(10);
	Tree.insert(5);
	Tree.insert(25);
	Tree.inorder();
	
	return 0;
}
