/*Given an image represented by an NxN matrix, where each pixel in the image is 4 
bytes, write a method to rotate the image by 90 degrees Can you do this in place?*/

#include<iostream>
using namespace std;

void main(){
	int n=3;
	float matrix[3][3];
	float tempMatrix[3][3];

	float mVal= 1.5;
	for (int i = 0; i < n; ++i)
	{

		for (int j = 0; j <n; ++j)
		{
			matrix[i][j]=mVal;
			cout<<matrix[i][j];
			mVal=mVal+2;
			
			cout<<"  ";
		}
		cout<<"\n";
	}

 	cout<<"\n";
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j <n; ++j)
		{
			tempMatrix[i][j]=matrix[(n-1)-j][i];
			cout<<tempMatrix[i][j];
			cout<<" ";
		}
	}
	cout<<"\n";
	cout<<"\n Rotated matrix are\n";
	for (int i = 0; i < n; ++i)
	{

		for (int j = 0; j <n; ++j)
		{
			cout<<tempMatrix[i][j];
			cout<<" ";
		}
		cout<<"\n";
	}
}