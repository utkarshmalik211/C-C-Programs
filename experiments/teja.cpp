#include <iostream>
using namespace std;
class node
{
public:
	int data;
	node *next;
	node(){
		data=-1;
		next=NULL;
	}
};
void add_node_p(int key,node *&ptr){
		if(ptr==NULL){
			ptr=new node();
			ptr->data=key;
			}
		else if(ptr->next==NULL){
			ptr->next=new node();
			ptr->next->data=key;
		}
		else if(ptr->next!=NULL){
			add_node_p(key,ptr->next);
		}
	}
	void delete_node_p(int key,node *&ptr){
		if(ptr->next!=NULL){
			if(ptr->next->data==key){
				node* temp = ptr->next->next;
				delete ptr->next;
				ptr->next=temp;
			}
			else{
				delete_node_p(key,ptr->next);
			}

		}
	}
int main(){

	node *head=NULL;
	add_node_p(3,head);
	add_node_p(4,head);
	
	delete_node_p(3,head);
	

}
