#include <iostream>
using namespace std;
class dist{
	int b;
	float a;
public:
	void input(){
		cout<<"Enter value in inches : ";
		cin>>b;
	}
	float conv(){
		a=b/12;
		return a;
	}
};
int main(){
	dist ob1;
	//input
	ob1.input();
	cout<<"Distance in feet "<<ob1.conv()<<" \n";
	return 0;
}