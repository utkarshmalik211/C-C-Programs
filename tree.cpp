/* 
   Author - Utkarsh Malik 
   Date - 9th April 2016
   Binary search tree inmpimentation
   !!!!!!! Delete function not yet ready !!!!!!
   add traversals!!!!!!!---------DONE!!
   add avl compatibility if possible!!
*/   
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
		else if(key > ptr->data){
			if(ptr->right!=NULL){
				create_leaf(key,ptr->right);
			}
			else{
				ptr->right=create_node(key);
			}
		}
		else if(key < ptr->data){
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

	void print_p(tnode* ptr){
		if(root!=NULL){
			if(ptr->left!=NULL){
				print_p(ptr->left);
			}
			cout<<ptr->data<<" ";
			if(ptr->right!=NULL){
				print_p(ptr->right);
			}
		}
		else{
			cout<<"empty tree"<<endl;
		}
	}

	void print_Inorder(tnode* ptr){
		if(root!=NULL){
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
	void print_postorder(tnode* ptr){
		if(root!=NULL){
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
	void print_preorder(tnode* ptr){
		if(root!=NULL){
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
	tnode* return_node_p(int key,tnode* ptr){
		if(ptr!=NULL){
			if(key == ptr->data){
				return ptr;
			}
			else if(key > ptr->data){
				return return_node_p(key,ptr->right);
			}
			else{
				return return_node_p(key,ptr->left);
			}

		}
		else{
			return NULL;
		}
	}	

	tnode* findSmallest_p(tnode* ptr){
		if(ptr->left!=NULL){
			return findSmallest_p(ptr->left);
		}
		else{
			return ptr;
		}
	}
	void delete_Node_p(int key){
		tnode* match = return_node(key);
  		//case1 no children
  		if(match!=NULL && match->left==NULL && match->right==NULL){
  			int temp = match -> data;
  			delete match;
  			cout<<"Key "<< temp << " Deleted\n";
  		}
  		//case2 1 child
  		else if(match!=NULL && (( match->left != NULL && match-> right==NULL) || (match->left == NULL && match->right!=NULL) )){
  			if(match->left!=NULL){
  				tnode* temp = match->left;
  				int temp1=match->data;
  				match=temp;
  				cout<<"Key "<< temp1 << " Deleted\n";
  			}
  			else{
  				tnode* temp = match->right;
  				int temp1=match->data;
  				match=temp;
  				cout<<"Key "<< temp1 << " Deleted\n";
  			}
  		}
  		//case 3 both child present
  		else if(match!=NULL && match->left!=NULL && match->right!=NULL){
  			tnode* temp=findSmallest(match->right);
  			int temp1=match->data;
  			match=temp;
  			cout<<"Key "<< temp1 << " Deleted\n";
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

	void print(){
		print_p(root);
	}

	tnode* return_node(int key){
		return return_node_p(key,root);
	}

	int return_rootkey(){
		if(root != NULL){
			return root->data;
		}
		else{
			return -1000;
		}
	}

	void print_children(int key){
		tnode* ptr =return_node(key);
		if(ptr !=NULL){
			cout<<"Parent Node = "<< ptr->data<<endl;
			
			ptr->left == NULL ?
			cout<<"Left Child = NULL"<<endl :
			cout<<"Left Child = "<<ptr->left->data<<endl;

			ptr->right == NULL ?
			cout<<"Right Child = NULL"<<endl :
			cout<<"Right Child = "<<ptr->right->data<<endl;
			
		}
		else{
			cout<<"Key "<<key<<" not found in tree"<<endl;
		}	
	}

	/*void print_Ip(){
		print_I(root);
	}*/
	
	//Finds smallest in the sub tree
  	tnode* findSmallest(tnode* ptr){

  		return findSmallest_p(ptr);
  	}

  	void delete_Node(int key){
  		delete_Node_p(key);
  	}
  	void preorder(){
  		print_preorder(root);
  	}
  	void postorder(){
  		print_postorder(root);
  	}
  	void inorder(){
  		print_Inorder(root);
  	}
	~tree(){
		cout<<"Destroying Tree Object!"<<endl;
	}
};

int main()
{	
	int i=9,key=0;
	int a[]={45,23,56,30,47,78,65,98,100,24,62,74,50,38,62,59,69};
	tree ob1;
	while(i!=0){
		cout<<"###Tree Menu###\n1. Add node\n2. Display data\n3. Print Children\n4. Delete Node\n5. Print Tree Information \n9. Add Sample Data to tree\n0. Exit\n";
		cin>>i;
		switch(i){
			case 1:
				cout<<"Enter element to be added :";
				cin>>key;
				ob1.add_node(key);
					break;
			case 2:
				//traditional
				/*ob1.print();
				cout<<endl;*/
				cout<<"    Enter :\n    1.For preorder\n    2.For Inorder\n    3.For Postorder\n    ";
				cin>>i;
				switch(i){
					case 1:
						ob1.preorder();
		                cout<<endl;
						break;
					case 2:
						ob1.inorder();
						cout<<endl;
						break;
					case 3:
						ob1.postorder();
						cout<<endl;
						break;
					default:
						cout<<"Invalid Choice Moron!!! :(\nThats not a problem ,Try again :)"<<endl;
						break;			
				}
					break;
				
			case 3:
				cout<<"Enter Element whose Children are to be printed :";
				cin>>key;
				ob1.print_children(key);
					break;
			case 4:
				cout<<"Though this won't work :p"<<endl;
				cout<<"Enter Key to be deleted :";
				cin>>key;
				//Delete function call(key);
				ob1.delete_Node(key);
					break;		
			case 5:
				//ob1.print_Ip();
				//Prints smallest element in tree :p
				cout<<"Smallest Element ="<<ob1.findSmallest(ob1.return_node(ob1.return_rootkey()))->data <<endl;
					break;	
			case 9:
				for(int i=0;i<17;i++){
					ob1.add_node(a[i]);			
				}
					break;
			case 0:
					break;
			default:
				cout<<"Invalid Choice Moron!!! :(\nThats not a problem ,Try again :)"<<endl;
					break;			
		}
	}
	return 0;
}