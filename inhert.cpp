#include <iostream>
using namespace std;
class shape{
	
public:
	int area,length;
	shape(){
		cout<<"Enter length :";
		cin>>length;
	}
};
class square:public shape{
	
public:
	int arear(){
		area=length*length;
		return area;
	}
};
class rectangle:public shape{
public:
	int breadth;
	rectangle(){
		cout<<"Enter breadth of rectangle :";
		cin>>breadth;
	}
	
	int arear(){
		area=length*breadth;
		return area;
	}

};
int main(){
	square ob1;
	cout<<ob1.arear()<<" = area of square.\n";
	rectangle ob2;
	cout<<ob2.arear()<<" = area of rectangle.\n";
}