//Selection Sort
/*
Complexity:
	Best Case:		BigOmega(n^2)		
	Average Case:	BigTheta(n^2)
	Worst Case:		BigOh(n^2)
*/

#include<iostream>
using namespace std;
void swap(int *, int *);
void selectionSort(int *, int);
int main()
{
	int j,n;
	cin>>n;
	int A[100];

	for(int i=0;i<n;i++)
		cin>>A[i];
	selectionSort(A,n);

	cout<<"Sorted Array:"<<endl;
	for(int k=0; k<n; k++)
	{
		cout<<A[k]<<" ";
	}
	cout<<"\n";
	return 0;
}
void selectionSort(int a[], int n)
{
	int min,i,j;
	for(i=0; i<n-1; i++)
	{
		min=i;;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
				min=j;
		}
		swap(&a[i],&a[min]);
	}
}


void swap(int *x, int *y)
{
	
	int temp=*x;
	*x=*y;
	*y=temp;
}
