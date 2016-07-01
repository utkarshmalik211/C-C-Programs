#include "iostream"
using namespace std;
class divb0{};
int main()
{
	divb0 ob1;
	int a=0,b;
	try{
		try{
			if(a==0)
			throw ob1;
		}
		catch(divb0 v){
			throw;
		}
	}
	catch(int c){
		cout<<"int caugth";
	}
	catch(char c){
		cout<<"char caught";
	}
	catch(...){
		cout<<"shit something went wrong\n";
	}
	return 0;
}