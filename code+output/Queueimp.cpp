#include <iostream>
using namespace std;
class queue{
			public:
			int front,rear,n;
			queue(){
				front=-1;
				rear=-1;
				n=3;
			}
			int a[10];


			void enqueue(int b){
				if(front==-1 && rear==-1){
					rear=rear+1;
					front=front+1;
					a[rear] = b;
			}
			else if(front==(rear+1)% n){
				cout<<"Queue is full\n";
			}
			else{

				a[(rear+1)%n]= b;
				rear++;
			}
			}
			void dequeue(){
				if(front==-1&&rear==-1){
					cout<<"Queue is empty.\n";
				}
				if(front==rear){
					front=rear=-1;
				}
				else{
					front=(front+1)%n;

				}

			}
			void show(){
				/*int i=front;

				while(i!=rear)
				{
					cout<<a[i];
					i=(front+1)%n;
				}*/
					for(int i =front;i<=rear;i++)
						cout<<a[i]<<" ";
			}
			};

	int main(){
	int userchoice,e=0;
	int c;
	
	queue queue1;
	while(e==0){
		cout<<"\n1 for insertion in queue\n2 for deletion from queue\n3. to show elements\n4 for EXIT\n";
	cin>>userchoice;
	switch(userchoice){
		case 1:
		cout<<"Enter element to to inserted : ";
		cin>>c;
		queue1.enqueue(c);
		break;
		case 2:
		queue1.dequeue();
		break;
		case 3:
		queue1.show();
		break;
		case 4:
		e=1;
		break;
		default:
		cout<<"Invalid Choice!!";
		break;
	}
}
return 0;
}