#include <iostream>
using namespace std;
class items{
public:
	int itemcode,cost,no;
	double discount;
	char itemname[20];
	items(){
		cout<<"Enter value for item:\n Item code,cost,no.,discount percent";
		cin>>itemcode>>cost>>no>>discount;
		cout<<"Item name :";
		cin>>itemname;
	}
};


class customer:public items{
public:
	char custname[20];
	double amount;
	customer(){
		cout<<"enter cust name :";
		cin>>custname;
		
	}
	void cal(){
		amount=cost*no*(discount/100);
		cout<<"ammount to be paid by "<<custname<<" is "<<(cost*no)-amount<<" \n";
	}
};
class employee:public items{
	public:
	int empcode,amount;
	char empname[20];
	employee(){
		cout<<"enter emp code:";
		cin>>empcode;
		cout<<"enter emp name:";
		cin>>empname;
		}
	void disp(){
		cout<<"empcode "<<empcode<<"\nemp name :"<<empname<<" \n";

	}	
};
int main(){
	customer ob1;
	ob1.cal();
	return 0;
}