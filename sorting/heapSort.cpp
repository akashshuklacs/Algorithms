//Heap Sort
/*
Complexity:
	Best Case:		BigOmega(n)		
	Average Case:	BigTheta(nlogn)
	Worst Case:		BigOh(nlogn) 
*/

#include<iostream>
using namespace std;
void max_heapify(int *, int n, int i);
void build_max_heap(int *, int n);
void heapSort(int A[], int n);

int main()
{
	int j,n;
	cin>>n;
	int A[100];
	for(int i=0;i<n;i++){
		cin>>A[i];	
	}

	heapSort(A,n);

	cout<<"Sorted Array:"<<endl;
	for(int k=0; k<n; k++)
	{
		cout<<A[k]<<" ";
	}
	cout<<"\n";
	return 0;
}

void max_heapify(int A[], int n, int i)
{
	int largest=i;
	int l=2*i+1;
	int r=2*i+2;

	if(l<n && A[largest]<A[l])
		largest=l;

	if(r<n && A[largest]<A[r])
		largest=r;

	if(largest!=i)
	{
		swap(A[largest], A[i]);
		max_heapify(A,n,largest);
	}
}

void build_max_heap(int A[], int n)
{
	for(int i=n/2-1; i>=0; i--)
	 	max_heapify(A, n, i);
}

void heapSort(int A[], int n)
{
	build_max_heap(A,n);
	
	for(int i= n-1; i>=0; i--)
	{
		swap(A[i], A[0]);
		max_heapify(A, i, 0);
	}
}
