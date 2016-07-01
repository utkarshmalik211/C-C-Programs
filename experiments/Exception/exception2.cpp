/*write a program to throw a exeption for a employee detail if an 
employee name is a no. a name exeption must be thrown if an employee age
 is > 50 then a exeption must be thrown or else a object must be
  created for a entered employee detail*/
#include <iostream>
#include <string.h> 
using namespace std;
class emp{
public:
	int a;
	char b[20];
};
int main(){
	int a;
	char b[20];
	try{
			cin>>b;
			cin>>a;
			if(a>50)
				throw 8;
			for(int i;i<strlen(b);i++)
				if( b[i]<65 || b[i]>122 || (b[i]>90 && b[i]<97) )
					throw 'a';
			emp ob1;
			ob1.a=a;
			for(int i;i<strlen(b);i++)
				ob1.b[i]=b[i];	
		}
		catch(int a){
			cout<<"Age cannot be greater than 50"<<endl;	
		}
		catch(char c){
			cout<<"Name can only contain letters."<<endl;	
		}


} 