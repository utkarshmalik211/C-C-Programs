#include <iostream>
using namespace std;
template <typename xyz,typename sex>
sex temp1(xyz s,sex y){
	return s+y;
}
int main(){
	char c;
	cin>>c;
	int d;
	cin>>d;
	cout<<temp1(d,c)<<endl;
}