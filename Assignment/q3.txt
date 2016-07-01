/* Question 2 Assignment-1 ADS
Author: Utkarsh Malik
Roll No. 76

Question. 
Declare a class called bird having private data members name and weight.
Define following functions : -
default constructor for reading data members from key board
- overloaded constructor with two arguments to be used for initialization of data members. 
- display function to display data members.
- overloaded member operator >= to compare weight of two bird objects, 
returning false if weight of first bird object is less than that of the second & true otherwise.
Define main to illustrate use of above functions.
*/
#include <iostream>
#include <string>
using namespace std;
class bird
{
public:
	string bname;
	int weight;
	bird(){
		cout<<"Enter bird name and its weight\n";
		cin>>bname>>weight;
	};
	bird(string a,int b){
		bname=a;
		weight=b;
	}
	void display(){
		cout<<"Bird name :"<<bname<<"\n"<<"Weight = "<<weight<<"\n";
	}
	/*~bird(){
		cout<<"\nFreeing up memory.\n";
	};*/
	bool operator >= (bird obj){
		if(weight >= obj.weight){
			return true;
		}
		else{
			return false;
		}
	}
};
int main(){
	bird ob1,ob2=bird( "kingfisher" , 450);
				 //calling default constructor for ob1 and parameterized for ob2
	if( ob1 >= ob2 ) {
		cout<<"Oh yeah bird 1 ("<<ob1.bname<<") is heavier....LOL\n";
	}
	else {
		cout<<"Thats okay too bird 2 ("<<ob2.bname<<") is heavier\n";
	}
}