//Quick Sort
/*
Complexity:
	Best Case:		BigOmega(nlogn)		
	Average Case:		BigTheta(nlogn)
	Worst Case:		BigOh(n^2) i.e. if array is already sorted
*/

#include<iostream>
using namespace std;
int partition(int A[], int p, int r);
void quickSort(int *, int, int);
void swap(int *, int *);
int main()
{
	int j,n;
	cin>>n;
	int A[100];

	for(int i=0;i<n;i++)
		cin>>A[i];
	quickSort(A,0,n-1);

	cout<<"Sorted Array:"<<endl;
	for(int k=0; k<n; k++)
	{
		cout<<A[k]<<" ";
	}
	cout<<"\n";
	return 0;
}
void quickSort(int A[], int p, int r)
{
	int q;
	if(p<r){
		q=partition(A,p,r);
		quickSort(A,p,q-1);
		quickSort(A,q+1,r);
	}
	
}
int partition(int A[], int p, int r)
{
	int x=A[r];
	int i=p-1;
	for(int j=p; j<r; j++)
	{
		if(A[j]<=x)
		{
			i+=1;
			swap(&A[i],&A[j]);
		}
	}
	swap(&A[i+1],&A[r]);
	return i+1;
}

void swap(int *x, int *y)
{
	int temp= *x;
	*x=*y;
	*y=temp;
}
