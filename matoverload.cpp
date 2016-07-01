#include <iostream>
using namespace std;
class matrix{
	public:
	int a[5][5];
	matrix(){

	}
	matrix(int b){
		
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cin>>a[i][j];
			}
		}
	}
	matrix operator*(matrix ob1){
		matrix temp;
	for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				temp.a[i][j]=0;
				for (int k = 0; k < 3; k++)
				{
					temp.a[i][j] = temp.a[i][j] + ( a[i][k] * ob1.a[k][j] );
				}
					
			}
		}
		return temp;	


	}
	void show(){
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}

	}
};

int main(){
	cout<<"Matrix 1 Input 4X4 \n";
	matrix ob1=matrix(2);
	cout<<"Matrix 2 input 4X4 \n";
	matrix ob2=matrix(2);
	cout<<"\n\nResultant matrix is :\n";
	matrix ob3;
	ob3=ob1*ob2;
	ob3.show();
	return 0;

}