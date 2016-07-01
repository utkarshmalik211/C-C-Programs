#include <iostream>
using namespace std;
class dist{
	int b;


public:
	int a;
	dist(){
		cout<<"Enter distance in inches : ";
		cin>>a;
	}
	dist(int c){
		float b;
		b=c/12;
		cout<<b<<"\n";
	}
	/*dist(dist &ob2){
		a=ob2.a;
	}*/
	~dist(){
		cout<<"bye\n";
	}

};
int main(){
	int i;
	cout<<"enter value in inch : ";
	cin>>i;
	dist ob1=dist(i);
	
	

}