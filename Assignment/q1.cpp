/* Question 1 Assignment-1 ADS
Author: Utkarsh Malik
Roll No. 76
*/
#include <iostream>
#include <string>
using namespace std;
class book_details{
public:
	char title[20],author[20];
	int edition,price,qtyonhand;
	book_details(){
		cout<<"Enter title : ";
		cin>>title;
		cout<<"\nEnter Author : ";
		cin>>author;
		cout<<"\nEnter edition, price, No. of copies availaible\n";
		cin>>edition>>price>>qtyonhand;
		cout<<"\n";

	}
	void display(int i){
		cout<<"\nBook "<<i+1<<" Details\nTitle :"<<title<<"\n"<<"Author : "<<author<<"\n";
		cout<<"Edition : "<<edition<<"\n"<<"Price : "<<price<<"\n"<<"Quantity availaible : "<<qtyonhand<<"\n";
	}
	void pricecheck(int j){
		if(price<j){
			cout<<title<<"\n";
		}
	}

};
int main(){
	book_details ob1[3];
	for (int i = 0; i < 3; i++)
	{
		ob1[i].display(i);
	}
	cout<<"Books with price less than 250 are :\n";
	for (int i = 0; i < 3; i++)
	{
		ob1[i].pricecheck(250);
	}
}