#include<iostream>

using namespace std;

class dist
{
public:
int f,i;

void insert()

{
cout<<"insert distance in feet";
cin>>f;
cout<<"insert distance in inch";
cin>>i;
}


dist operator*(dist ob2)
{
dist temp;
temp.f=f*ob2.f;
temp.i=i*ob2.i;
return temp;
}

};

int main()
{
dist ob1,ob2;
ob1.insert();
ob2.insert();
dist ob3=ob1*ob2;
cout<<"distance in feet and inches is"<<ob3.f<<"feet and"<<ob3.i<<"inches";
return 0;

}
