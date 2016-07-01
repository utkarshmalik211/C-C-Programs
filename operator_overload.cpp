#include <iostream>
using namespace std;
class complex{
public:
	double a,b,c[10];
	complex(){
		a=0;
		b=0;
		for(int i=0;i<10;i++)
			c[i]=i*3.2;
	}
	complex(double e,double f){
		a=e;
		b=f;
	}
	complex operator-(){
		complex temp;
		temp.a=-a;
		temp.b=-b;
		return temp;
	}
	void operator++(){
		a++;
		b++;
	}
	void operator--(){
		a--;
		b--;
	}
	void operator--(int d){
		a--;
		b--;
	}
	void operator++(int d){
		a++;
		b++;
	}
	complex operator+(complex c){
		complex temp;
		temp.a= a+c.a;
		temp.b= b+c.b;
		return temp;

	}
	complex operator-(complex c){
		complex temp;
		temp.a=a-c.a;
		temp.b=b-c.b;
		return temp;

	}
	bool operator>(complex c){
		if(a>c.a)
			return true;
		else
			return false;
	}
	bool operator<(complex c){
		if(a<c.a)
			return true;
		else
			return false;
	}
	double operator[](int j){
		return c[j];
	}
};
int main(){
	bool h;
	complex a = complex(22,33),c;
	complex b = complex(1.5,30.8);
	c=-b;
	cout<<c.a<<" "<<c.b<<"\n";
	++b;
	cout<<b.a<<" "<<b.b<<"\n";
	--b;
	cout<<b.a<<" "<<b.b<<"\n";
	b--;
	cout<<b.a<<" "<<b.b<<"\n";
	b++;
	cout<<b.a<<" "<<b.b<<"\n";
	c=a+b;
	cout<<c.a<<" "<<c.b<<"\n";
	c=a-b;
	cout<<c.a<<" "<<c.b<<"\n";
	h=b>a;
	cout<<h<<"\n";
	h=b<a;
	cout<<h<<"\n";
	cout<<c.c[4]<<"\n";
	return 0;
}