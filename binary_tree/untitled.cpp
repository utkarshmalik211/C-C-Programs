#include <iostream>
using namespace std;

struct tnode{
	int data;
	tnode *left;
	tnode *right;
};
class tree{
	tnode* root;
	void create_leaf(int key,tnode* ptr){
		if(root==NULL){
			root=create_node(key);
		}
		else if(key > ptr->key){
			if(ptr->right!=NULL){
				create_leaf(key,ptr->right);
			}
			else{
				ptr->right=create_node(key);
			}
		else if(key < ptr->left){
			if(ptr->left!=NULL){
				create_leaf(key,ptr->left);
			}
			else{
				ptr->left=create_node(key);
			}
		}
		else{
			cout<<"Element already present!"<<endl;
		}	

		}
	}
public:
	tree(){
		root=NULL;
	}
	
	tnode* create_node(int key){
		tnode* temp = new tnode;
		temp->data=key;
		temp->left=NULL;
		temp->right=NULL;
		return temp;
	}
	void add_node(int key){
		create_leaf(key,root);
	}

};
int int main(int argc, char const *argv[])
{
	tree ob1;
	ob1.add_node(5);
	ob1.add_node(6);
	ob1.add_node(4);
	return 0;
}