#include <iostream>
using namespace std;
int main(){
	cout<<"Enter no. of elements in array :";
	int a[100],n;
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	int key,j;
	for (int i = 1; i < 5; i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
	cout<<endl;
	for (int i = 0; i < n; i++)
	{
		cout<<a[i]<<endl;
	}
}