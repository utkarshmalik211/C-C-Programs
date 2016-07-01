#include <iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
class list {
private:
	node* head;
	void add_node_p(int key,node* ptr){
		if(head==NULL){
			head=create_node(key);
		}
		else if(ptr->next==NULL){
			ptr->next=create_node(key);
		}
		else if(ptr->next!=NULL){
			add_node_p(key,ptr->next);
		}
	}
	void print_p(node* ptr){
		if(ptr!=NULL){
			cout << ptr->data << " ";
			print_p(ptr->next);
		}
		else{
			cout<<"End of list!"<<endl; 
		}
	}
	void delete_node_p(int key,node* ptr){
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
public:
	list(){
		head=NULL;
	}
	void add_node(int key){
		add_node_p(key,head);
	}
	node* create_node(int key){
		node* temp = new node;
		temp->data = key;
		temp->next = NULL;
		return temp;
	}
	void print(){
		print_p(head);
	}
	void delete_node(int key){
		delete_node_p(key,head);
	}
};
int main(){
	list ob1;
	ob1.add_node(3);
	ob1.add_node(4);
	ob1.print();
	ob1.delete_node(3);
	ob1.print();

}