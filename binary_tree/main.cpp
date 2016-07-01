#include <iostream>
#include "bst.h"
using namespace std;
int main(){
	bst a;
	a.printinseq();
	int c=1,d;
	while(c!=0){
		cout<<"####Tree Menu####\n1.For create node\n2.Disp in seq\n0.To Exit\n";
		cin>>c;
		switch(c){
			case 1:
				cout<<"Enter value to insert :";
				cin>>d;
				a.addleaf(d);
			break;
			case 2:
				a.printinseq();
				break;
			case 0:
				cout<<"BBIEE...\n";
				break;
			default:
				cout<<"invalid choice\n";
				break;
			}
	}
	return 0;
}