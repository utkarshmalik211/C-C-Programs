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
	bool search_p(int key,node* ptr){
		if(ptr!=NULL){
			if(ptr->data == key){
				return true;
			}
			else{
				return search_p(key,ptr->next);
			}
		}
		else {
			return false;
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
	bool search(int key){
		return search_p(key,head);
	}
	void print(){
		print_p(head);
	}
	void delete_node(int key){
		delete_node_p(key,head);
	}
};
int hash1(int key);
int main(){
	list ob1[10];
	int i=1,b,c,j;
	while(i!=0){
		cout<<"Press 1 to add entry\n2. for element search\n3. for deletion\n4.to display table contents\n0 to exit."<<endl;
		cin>>i;
		switch(i){
			case 1:
				cout<<"Enter sap :";
				cin>>j;
				b = hash1(j);
				ob1[b].add_node(j);
				break;
			case 2:
				cout<<"Enter element to search : ";
				cin>>j;
				b = hash1(j);
				if(ob1[b].search(j)==true){
					cout<<"Element found in table."<<endl;
				}
				else{
					cout<<"Not found in table"<<endl;
				}
				break;
			case 3:
				cout<<"Enter element to delete :";
				cin>>j;
				b=hash1(j);
				ob1[b].delete_node(j);
				break;
			case 4:
				cout<<"Printing elements :"<< endl;
				for(int i=0;i<10;i++){
		            ob1[i].print();
					cout<<endl;
					}
				break;	
			case 0:
				break;	
			default:
				cout<<"Invalid choice!";			
		}
	
	}

}
int hash1(int key){
	int d,e,a,b,c;
	a = key % 10;
	b = ((key%100)-a)/10;
	c = a+b;
	if(c<10)
		return c;
	else{
		d=c%10;
		e=((c%100)-d)/10;
		return d+e;
	}
}