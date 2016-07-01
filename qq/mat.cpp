#include <iostream>
using namespace std;
class matrix{
	public:
	int a[5][5];
	matrix(){
		
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				cin>>a[i][j];
			}
		}
	}
};
void matrix_mul(matrix ob1,matrix ob2){

		
	int c[5][5];
	for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				c[i][j]=0;
				for (int k = 0; k < 4; k++)
				{
					c[i][j] = c[i][j] + ( ob1.a[i][k] * ob2.a[k][j] );
				}
					
			}
		}
	for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				cout<<c[i][j]<<"\t";
			}
			cout<<"\n";
		}		


}
int main(){
	cout<<"Matrix 1 Input 4X4 \n";
	matrix ob1;
	cout<<"Matrix 2 input 4X4 \n";
	matrix ob2;
	cout<<"\n\nResultant matrix is :\n";
	matrix_mul(ob1,ob2);
}