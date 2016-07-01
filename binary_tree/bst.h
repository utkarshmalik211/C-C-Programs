#include <iostream>
using namespace std;

class bst{
private:
	struct node{
		int key;
		node* left;
		node* right;
	};
	node* root;
	void addleafprivate(int key,node* ptr){
		if(root==NULL){
			root=createleaf(key);
		}
		else if( key < ptr->key){
			if(ptr->left!=NULL){
				addleafprivate(key,ptr->left);
			}
			else{
				ptr->left = createleaf(key);
			}
		}
		else if( key >ptr->key){
			if(ptr->right!=NULL){
				addleafprivate(key,ptr->left);
			}
			else{
				ptr->right = createleaf(key);
			}
		}
		else{
			cout<<"Key already present in tree"<<endl;
		}

	}
	void printinseqprivate(node* ptr){
		if(root!=NULL){
			if(ptr->left!=NULL){
				printinseqprivate(ptr->left);
			}
			cout<<ptr->key<<" ";
			if(ptr->right!=NULL){
				printinseqprivate(ptr->right);
			}

		}
		else{
			cout<<"Empty tree :p\n";
		}
		cout<<" ";
	}
public:
	bst(){
		root=NULL;
	}
	node* createleaf(int key){
		node* n= new node;
		n->key=key;
		n->left=NULL;
		n->right=NULL;
		return n;
	}
	void addleaf(int key){
		addleafprivate(key,root);
	}
	void printinseq(){
		printinseqprivate(root);
	}
};