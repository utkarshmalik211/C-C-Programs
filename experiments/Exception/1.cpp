//write a program which accepts a number and a number and a divisor to 
//divide it if the divisor is 0 the program terminates abruptly 
//modify the program by adding exeption handling and prevent abnormal
// termination
#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter 2 digits :";
	cin>>a>>b;
	try{
		if(b){
			c=a/b;
			cout<<c<<endl;
		}
		else{
			throw 8;
		}
	}
	catch(int a){
		cout<<"Divide by 0 error"<<endl;

	}
}