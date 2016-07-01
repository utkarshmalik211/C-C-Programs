#include <iostream>
using namespace std;
class Base
{
 public:
 void show()
 {
  cout << "We are in Base class\n";
 }
};
class Derived:public Base
{
 public:
 void show()
 {
 	Base :: show();
  cout << "Now in Derived Class\n";
 }
};
int main(){
Derived	ob1;
ob1.show();
}