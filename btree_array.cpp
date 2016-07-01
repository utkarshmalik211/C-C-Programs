#include <iostream>
using namespace std;
class tree{
	public:
		int a[25];
		tree(){
			for(int i=0;i<25;i++){
				a[i]=0;
			}
		}
	void add_element(int key,int index){
		if(a[index]==0){
			a[index]=key;
		}
		if(a[index]!=0){
			if (key<a[index])
			{
					add_element(key,index*2);

	
			}
			else if (key>a[index])
			{
				add_element(key,(index*2)+1);
		
				
			}
		}
	}
	void display_inorder(int index=1){
		if(a[index]!=0){
	
				if(a[index*2]!=0){
					display_inorder(index*2);
				}
				cout<<a[index]<<endl;
				if(a[(index*2)+1]!=0){
					display_inorder((index*2)+1);
				}
			}

			}
	void search(int key,int index){
		if(a[index]==0){
			cout<<"Element not present!"<<endl;
		}
		else if(a[index]<key){
			search(key,(index*2)+1);
		}
		else if(a[index]>key){
			search(key,index*2);
		}
		else if(a[index]==key){
			cout<<"Element found on index : "<<index<<endl;
		}
	}	
	void disp(){
		for(int i=0;i<25;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}	
	
	void delete1(int key,int index){
		if(a[index]==key){
			if(a[index*2]==0 && a[(index*2)+1]==0)
				a[index]=0;
			else if(a[index*2]!=0 && a[(index*2)+1]==0){
				a[index]=a[(index*2)];
				a[(index*2)]=a[largest((index*2))];
				a[largest((index*2))]=0;
			}
			else if(a[index*2]==0 && a[(index*2)+1]!=0){
				a[index]=a[(index*2)+1];
				a[(index*2)+1]=a[largest((index*2)+1)];
				a[largest((index*2)+1)]=0;
			}
			else if(a[index*2]!=0 && a[(index*2)+1]!=0){
				a[index]=a[largest(index*2)];
				a[largest(index*2)]=0;
			}
		}
		else if(a[index]!=key){
			if(key<a[index])
				delete1(key,index*2);
			if(key>a[index])
				delete1(key,(index*2)+1);
		}
		else{
			cout<<"Element not found."<<endl;
		}
	}
	int largest(int index){
		if(a[(index*2)+1]!=0){
			return largest((index*2)+1);
		}
		return index;
	}	
	int smallest(int index){
		if(a[index*2]!=0){
			return smallest(index*2);
		}
		return index;
	}
};
int main(){
	tree ob1;
	ob1.add_element(13,1);
	ob1.add_element(17,1);
	ob1.add_element(12,1);
	ob1.add_element(10,1);
	ob1.add_element(11,1);
	ob1.display_inorder();
	ob1.search(17,1);
	ob1.disp();
	ob1.delete1(13,1);
	ob1.disp();
	ob1.display_inorder();

	cout<<endl;
}