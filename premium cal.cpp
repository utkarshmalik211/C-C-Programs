#include <iostream>
using namespace std;
int calculate(int a,int b){
	int c;
	c=a/25;
	return c;
}
int main(){
	cout<<"Lic children money back plan premium caculator\n";
	cout<<"Enter the age :";
	int age;
	try{
		cin>>age;
		if( age < 5 || age > 12){
			throw 8; 
		}
	}
	catch(int a){
		cout<<"AGE SHOULD BE BETWEEN 5 AND 12"<<endl;
		return 0;
	}
	cout<<"Enter total amount of policy :";
	int amount;
	try{
		cin>>amount;
		if(amount<100000)
			throw 6;
	}
	catch(int b){
		cout<<"Amount should be grater than or equal to 100000"<<endl;
		return 0;
	}
	cout<<"Yearly premium is "<<calculate(amount,age)+738<<" Rs"<<endl;
return 0;
}