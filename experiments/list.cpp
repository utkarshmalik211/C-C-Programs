#include <iostream>
using namespace std;
struct node{
	int data;
	node *link;
};

class list{
	node *root;
	void add_node_p(int key,node *ptr){
		if(ptr==NULL){
			root = new node;
			root->data=key;
		}
		else if(ptr->link==NULL){
			ptr->link=new node;
			ptr->link->data=key;
		}
		else if(ptr->link!=NULL){
			add_node(key,ptr->link);
		}
		
	}
public:
	void add_node_p(int key){
		add_node(key,root)
	}
	

};
int main(){
	list ob1;
	ob1.add_node(45,);
}