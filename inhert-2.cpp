#include <iostream>
using namespace std;
class shape{
	protected:
		int area,length;
public:
	
	shape(){
		
	}
};
class triangle:public shape{
	int a;
public:
	void input(){
		cout<<"Enter length :";
		cin>>length;
		cout<<"Enter height of triangle";
		cin>>a;

	}
	int arear(){
		area=0.5*(a*length);
		return area;
	}
};
class rectangle:public shape{
public:
	int breadth;
	void input(){
		cout<<"Enter length :";
		cin>>length;
		cout<<"Enter breadth of rectangle :";
		cin>>breadth;
	}
	
	int arear(){
		area=length*breadth;
		return area;
	}

};
int main(){
	int choice;
	rectangle ob2;
	triangle ob1;
	cout<<"##Menu##\n 1.Rectangle\n2.Triangle\n3.Exit\n";
	cin>>choice;
	switch(choice){
		case 1:
		ob2.input();
		cout<<ob2.arear()<<" = area of rectangle.\n";
		break;
		case 2:
		ob1.input();
		cout<<ob1.arear()<<" = area of triangle.\n";
		break;
		case 0:
		return 0;
		break;
		default:
		cout<<"invalid choice\n";
		break;
	}
return 0;
	
	
}