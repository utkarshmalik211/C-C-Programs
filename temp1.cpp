#include "iostream"
using namespace std;
template<typename xyz>
xyz temp1(xyz a,xyz b){
	return a*b;
}
int main(){
	int a=3,b=2;
	float c=4.5,d=9.8;

	cout<<temp1(a,b)<<" = Multiplication of int a,b"<<endl;
	cout<<temp1(c,d)<<" = Multiplication of float c,d"<<endl;

}