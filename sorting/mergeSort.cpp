//Merge Sort
/*
Complexity:
	Best Case:		BigOmega(nlogn)		
	Average Case:	BigTheta(nlogn)
	Worst Case:		BigOh(nlogn)
*/

#include<iostream>
using namespace std;

void mergesort(int *, int p, int r);
void merge(int *, int p, int q, int r);

int main()
{
	int j,n;
	cin>>n;
	int A[100];

	for(int i=0;i<n;i++)
		cin>>A[i];
	mergesort(A,0,n-1);

	
	cout<<"Sorted Array:"<<endl;
	for(int k=0; k<n; k++)
	{
		cout<<A[k]<<" ";
	}
	cout<<"\n";
	return 0;
}

void merge(int A[], int start, int mid, int end)
{
	int arr[end-start+1];
	int k=0;
	int p=start, q=mid+1;
	while((p<=mid)&&(q<=end))
	{
		if(A[p]<=A[q])
		{
			arr[k]=A[p];
			k++;
			p++;
		}
		else
		{
			arr[k]=A[q];
			k++;
			q++;
		}
	}
	if(q>end)
	{
		for(int l=p;l<=mid;l++)
		{
			arr[k]=A[l];
			k++;
		}
	}
	else if(p>mid)
	{
		for(int l=q;l<=end;l++)
		{
			arr[k]=A[l];
			k++;
		}
	}
	for(int m=start; m<=end; m++)
	{
		A[m]=arr[m-start];
	}
}

void mergesort(int A[], int start, int end)
{
	int mid;
	if(start<end)
	{
		mid=(start+end)/2;
		mergesort(A,start, mid);
		mergesort(A,mid+1, end);
		merge(A, start, mid, end);
	}
}
