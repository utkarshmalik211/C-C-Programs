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
	
};
int main(){
	tree ob1;
	ob1.add_element(13,1);
	ob1.add_element(17,1);
	ob1.add_element(12,1);
	ob1.add_element(10,1);
	ob1.add_element(11,1);
	ob1.search(17,1);
	ob1.disp();
	cout<<endl;
}