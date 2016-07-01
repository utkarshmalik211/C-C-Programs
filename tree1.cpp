#include "iostream"
using namespace std;
class tnode{
	public:
	tnode* left;
	tnode* right;
	int data;
	tnode(){
		left=NULL;
		right=NULL;
	}

};
void add_leaf(int key,tnode *&ptr){
	if(ptr==NULL){
		ptr=new tnode();
		ptr->data=key;
		return;
	}
	if(ptr!=NULL){
		if(key < ptr->data){
			add_leaf(key,ptr->left);
		}
		else if(key>ptr->data){
			add_leaf(key,ptr->right);
		}
		else{
			cout<<"Key already present";
		}
	}
}
void print_Inorder(tnode *&ptr){
		if(ptr!=NULL){
			if(ptr->left!=NULL){
				print_Inorder(ptr->left);
			}
			cout<<ptr->data<<" ";
			if(ptr->right!=NULL){
				print_Inorder(ptr->right);
			}
		}
		else{
			cout<<"empty tree"<<endl;
		}
	}
	void print_postorder(tnode *&ptr){
		if(ptr!=NULL){
			if(ptr->left!=NULL){
				print_postorder(ptr->left);
			}
			if(ptr->right!=NULL){
				print_postorder(ptr->right);
			}
			cout<<ptr->data<<" ";
		}
		else{
			cout<<"empty tree"<<endl;
		}

	}
	void print_preorder(tnode *&ptr){
		if(ptr!=NULL){
			cout<<ptr->data<<" ";
			if(ptr->left!=NULL){
				print_preorder(ptr->left);
			}
			if(ptr->right!=NULL){
				print_preorder(ptr->right);
			}
		}
		else{
			cout<<"empty tree"<<endl;
		}
	}

int main()
{
	tnode* root=NULL;
	add_leaf(25,root);
	add_leaf(23,root);
	add_leaf(12,root);
	add_leaf(13,root);
	add_leaf(30,root);
	add_leaf(50,root);
	add_leaf(10,root);
	add_leaf(9,root);
	add_leaf(60,root);
	print_Inorder(root);
	cout<<endl;
	print_preorder(root);
	cout<<endl;
	print_postorder(root);
	cout<<endl;

}