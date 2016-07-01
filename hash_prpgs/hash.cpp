//write a program that impliments on student roll no. 
//and categorise them in families like 5000423 last 
//two digits 23 2+3 = 5 so belongs to family five.
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////////////////////////////////////
//hash function to sum up last two digits :D
int hash1(int key){
	int d,e,a,b,c;
	a = key % 10;
	b = ((key%100)-a)/10;
	c = a+b;
	if(c<10)
		return c;
	else{
		d=c%10;
		e=((c%100)-d)/10;
		return d+e;
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////
//Function to handel collision and return new empty value if availaible :D
int quad(int a[10],int b){
	int c;
	for(int i=1;i<10;i++){
		if(a[b]!=0){
			c=b+(i*i);
			if(c>9){
				c=c%10;
			}
			if(a[c]==0){
				return c;
			}
			else{
				continue;
			}
		}
	}
	return -1;
}
////////////////////////////////////////////////////////////////////////////////////////////////
int main(){
	int i=1,b,c;
	int j,a[10];
	for(int i = 0;i<10;i++)
		a[i]=0;
	while(i!=0){
		cout<<"Press 1 to add entry or 0 to exit."<<endl;
		cin>>i;
		if(i==0)
			break;
		cout<<"Enter sap :";
		cin>>j;
		b = hash1(j);
		if(a[b]==0){
			a[b]=j;
		}
		else{
			cout<<"resoving collision"<<endl;
			c=quad(a,b);
			if(c==-1){
				cout<<"No appropriate location for given no."<<endl;
				continue;
			}
			else{
				a[c]=j;
			}
		}

	}
	cout<<"printing elements : ";
	for(int i = 0;i<10;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}