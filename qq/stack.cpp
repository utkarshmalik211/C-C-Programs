
#include <iostream>
using namespace std;
class stack{
	int a[10],top;
public:
	stack(){
		top=9; 
	}
	void push(int p){
		if(top!=0){
		a[top]=p;
		top--;
		}
		else{
			cout<<"Stack is full"<<"\n";
		}
	}
	int pop(){
		int b;
		if(top!=10){
			b=a[top+1];
			top++;
			cout<<"Element "<<a[top]<<" Deleted\n";
		}
		else{
			cout<<"Stack is empty\n";
		}
	}
	void show(){
		for(int i = top+1;i<10;i++){
			cout<<a[i]<<" ";
		}
		cout<<"\n";
	}

};
int main(){
	stack st1;
	int choice=1,push;
	while(choice!=0){
		cout<<"####-Menu-####\n1.For Push Function\n2.For Pop Function\n3.To display stack contents\n0.To Exit\n";
		cin>>choice;
		switch(choice){
			case 0:
			cout<<"BBie\n\n";
			break;
			case 1:
			cout<<"Enter element to be pushed :";
			cin>>push;
			st1.push(push);
			break;
			case 2:
			st1.pop();
			
			break;
			case 3:
			st1.show();
			break;
			default:
			cout<<"Invalid selection.\n";
			break;

		}

	}
}