#include <iostream>
#include <fstream>
using namespace std;
int main(){
	char a;
	ifstream abc("input.txt");
	if(!abc){
		return 0;
	}
	ofstream def("output.txt");
	if(!def){
		return 0;
	}
	while(!abc.eof()){
		abc.get(a);
		def.put(a);
	}
}