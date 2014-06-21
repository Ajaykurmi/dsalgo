/* Write an algorithm such that if an element in an MxN matrix is 0, its entire row and 
column is set to 0 */
#include<iostream>
using namespace std;

void main(){

	int n=3;
	int m=4;
	int matrix[3][4];
	int tempMatrix[3][4];

	matrix[0][0] =2;
	matrix[0][1] =3;
	matrix[0][2] =3;
	matrix[0][3] =5;

	matrix[1][0] =0;	
	matrix[1][1] =2;
	matrix[1][2] =2;
	matrix[1][3] =5;

	matrix[2][0] =2;
	matrix[2][1] =2;
	matrix[2][2] =0;
	matrix[2][3] =5;

	cout<<"\n";
	cout<<"\n Initial matrix\n";
	for (int i = 0; i < n; ++i)
	{

		for (int j = 0; j <m; ++j)
		{
			cout<<matrix[i][j];
			cout<<" ";
		}
		cout<<"\n";
	}

	for (int i = 0; i < n; ++i)
	{

		for (int j = 0; j <m; ++j)
		{
			if(matrix[i][j]==0) {

				for (int k = 0; k < n; ++k)
				{
					tempMatrix[i][k]=0;
					
				}
				for (int k = 0; k < m; ++k)
				{
					
					tempMatrix[k][j]=0;
				}
			}
			else {
				if(tempMatrix[i][j]!=0)
					tempMatrix[i][j]=matrix[i][j];
				//cout<<tempMatrix[i][j];
			}	
		}
		cout<<"\n";
	}

	cout<<"\n";
	cout<<"\n Rotated matrix are below\n";
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j <m; ++j)
		{
			cout<<tempMatrix[i][j];
			cout<<" ";
		}
		cout<<"\n";
	}

}