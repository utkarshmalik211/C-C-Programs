#include <iostream>
using namespace std;
int main(){
	int a,b,c,d;
	char ch='A';
	a=10;
	b=ch>a;
	cout<<b<<endl;
	b++;
	ch=b;
	cout<<ch==b;
	c=a==b&&a>ch;
	cout<<c++<<endl;
	d=(a+b)==ch;
	cout<<d<<endl;
	bool ab;
	ab=true;
	ab++;
	cout<<ab<<endl;
}