#include <iostream>
using namespace std;
int main(){
	try{
		cout<<"In fuckin try block..."<<endl;
		throw 5;
	}
	catch(int a){
		cout<<"Caught "<<a<<endl;
		cout<<"in catch block"<<endl;
	}
}