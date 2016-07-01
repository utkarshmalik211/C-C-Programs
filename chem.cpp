/*wap to read molecular values for oxygen hydrogen 
and sulphur in 3 diff classes name oxygen,hydrogen,
sulphur find out the molecular value of compound that
would be formed based on the input molecular value*/
#include <iostream>
using namespace std;
class hydrogen;
class sulphur;
class oxygen{
	int a;
public:
	oxygen(){
		cout<<"enter molecular values of Oxygen :";
		cin>>a;
	}
	
	friend void cal(oxygen ob1,hydrogen ob2,sulphur ob3);
};
class hydrogen{
	int a;
public:
	hydrogen(){
		cout<<"enter molecular values of Hydrogen :";
		cin>>a;
	}
	
	friend void cal(oxygen ob1,hydrogen ob2,sulphur ob3);
};
class sulphur{
	int a;
public:
	sulphur(){
		cout<<"enter molecular values of Sulphur :";
		cin>>a;
	}
	
	friend void cal(oxygen ob1,hydrogen ob2,sulphur ob3);
};
void cal(oxygen ob1,hydrogen ob2,sulphur ob3){
	
	int a,b,c;
	a=ob1.a/4;
	b=ob2.a/2;
	if(a<b){
		if(a!=0){
		if((c=ob3.a/a)>0){
			cout<<a<<" Molecules of H2SO4 wil be formed.\n";
		}
		else{
			cout<<a-1<<" Molecules of H2SO4 will be formed.\n";
		}}
		else{cout<<"0 molecules will be formed\n";}
	}
	else if(b<=a){
		if(b!=0){
		if((c=ob3.a/b)>0){
			cout<<b<<" Molecules of H2SO4 wil be formed.\n";
		}
		else{
			cout<<b-1<<" Molecules of H2SO4 will be formed.\n";
		}
		}
		else{
			cout<<" 0 molecules will be formed.\n";
		}

	}
}
int main(){
	oxygen ob1;
	hydrogen ob2;
	sulphur ob3;
	cal(ob1,ob2,ob3);
	return 0;
}