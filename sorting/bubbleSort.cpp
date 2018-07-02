//Bubble Sort
/*
Complexity:
	Best Case:		BigOmega(n)		
	Average Case:	BigTheta(n^2)
	Worst Case:		BigOh(n^2)
*/

#include<iostream>
using namespace std;
void bubbleSort(int *, int);
int main()
{
	int j,n;
	cin>>n;
	int A[100];

	for(int i=0;i<n;i++)
		cin>>A[i];
	bubbleSort(A,n);

	cout<<"Sorted Array:"<<endl;
	for(int k=0; k<n; k++)
	{
		cout<<A[k]<<" ";
	}
	cout<<"\n";
	return 0;
}
void bubbleSort(int a[], int n)
{
	int temp,swapped=0;
	for(int i=0;i<n-2;i++)
	{
		for(int j=0; j<n-1-i;j++)
		{
			if(a[j]>a[j+1])   // then swap them
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
				swapped=1;
			}
		}
		if (swapped=0)
			break;         //prevents unnecessary passes if the array is already sorted
			
	}
}
