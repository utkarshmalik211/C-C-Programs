#include <iostream>
using namespace std;
template <typename XYZ>
XYZ sort(XYZ a[],int n){
	XYZ temp;
	for(int i=0;i<n;i++){
		for(int j=n-1;j>=i;j--){
			if (a[j]<a[j-1]){
				temp = a[j-1];
				a[j-1]=a[j];
				a[j]=temp;
			}
		}	
	}
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
}
int main(){
	int a[]={3,1,8,4,7};
	sort(a,5);
	char b[]={"AblLR"};
	cout<<endl;
	sort(b,5);
	cout<<endl;
}