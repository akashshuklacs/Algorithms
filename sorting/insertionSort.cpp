//Insertion Sort
/*
Complexity:
	Best Case:		BigOmega(n)		
	Average Case:	BigTheta(n^2)
	Worst Case:		BigOh(n^2)
*/

#include<iostream>
using namespace std;
void insertionSort(int *, int);
int main()
{
	int j,n;
	cin>>n;
	int A[100];

	for(int i=0;i<n;i++)
		cin>>A[i];
	insertionSort(A,n);

	cout<<"Sorted Array:"<<endl;
	for(int k=0; k<n; k++)
	{
		cout<<A[k]<<" ";
	}
	cout<<"\n";
	return 0;
}
void insertionSort(int A[], int n)
{
	int j;
	for(int i=1; i<n; i++)
	{
		int key=A[i];
		j=i-1;
		while((j>=0)&&(A[j]>key))
		{
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=key;
	}
}
