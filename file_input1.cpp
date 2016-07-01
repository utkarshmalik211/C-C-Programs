#include <iostream>
#include <fstream>
using namespace std;
using namespace ios;
int main () {
  ifstream infile;
  infile.open ("example.txt");
  if(!infile){
  	cout<<"Can't open fuckin file!"<<endl;
  	return 0;
  }
  ofstream outfile;
  outfile.open("out.txt");
  if(!outfile){
  	cout<<"Can't open fuckin file!"<<endl;
  	return 0;
  }
  char a;
  while(!infile.eof()){
  	infile.get(a);
  	outfile.put(a);

  }
  
  return 0;
}
