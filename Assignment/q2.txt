/* Question 2 Assignment-1 ADS
Author: Utkarsh Malik
Roll No. 76


Question: Declare a class called logic_gate to represent logic gates.
The class has three data members - input1, input2 and input3 to represent three inputs to the logic gate.
The class also has a virtual function member called get_gate_output.
Derive two classes from the base class logic_gate, namely, and_gate and or_gate to represent 
	‘logical and gate’ and ‘logical or gate’ respectively.
Define function get_gate_output in both of these classes to get the output of the gate.
Show use of above classes and functions to demonstrate dynamic polymorphism in function main.
*/
#include <iostream>
using namespace std;
class logic_gate{
public:
	int input1,input2,input3;
	virtual int get_gate_output() =0;
	logic_gate(){
		cout<<"Enter value of input1 : ";
		cin>>input1;
		cout<<"Enter value of input2 : ";
		cin>>input2;
	}
};
class and_gate:public virtual logic_gate{
public:
	int get_gate_output(){
		
		if((input1==0 && input2==0)||(input1==0 && input2==1)||(input1==1 && input2==0)){
			input3=0;
		}
		else if(input1==1 && input2==1){
			input3=1;
		}
		return input3;
	}
};
class or_gate:public virtual logic_gate{
public:
	int get_gate_output(){
		
		if((input1==0 && input2==0)){
			input3=0;
		}
		else if((input1==1 && input2==1)||(input1==0 && input2==1)||(input1==1 && input2==0)){
			input3=1;
		}
		return input3;
	}
};
int main(){
	logic_gate *p;
	cout<<"Enter input for And Gate "<<endl;
	and_gate ob1;
	cout<<"Enter input for Or Gate "<<endl;
	or_gate ob2;
	p=&ob1;
	cout<<"And gate output = "<<p->get_gate_output()<<endl;
	p=&ob2;
	cout<<"Or gate output = "<<p->get_gate_output()<<endl;
	
}