#include<iostream>
using namespace std;
class Time
{
int hours,minutes;
public:
Time()
{
hours=0;
minutes=0;
}
Time(int h,int m)
{
hours=h;
minutes=m;
}
void display()
{
cout<<hours<<minutes;
}
Time operator++()
{
++minutes;
if(minutes>=60)
{
++hours;
minutes=minutes-60;
}
return Time(hours,minutes);
}
Time operator++(int)
{
Time t(hours,minutes);
++minutes;
if(minutes>=60)
{
++hours;
minutes-=60;
}
return t;
}
};
int main()
{
Time t1(11,59);
Time t2(10,40);
++t1;
t1.display();
t2++;
t2.display();}
