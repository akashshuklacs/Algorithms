//This searching technique can only search in ordered(in this case ascending) lists.
#include<iostream>
using namespace std;
int binarySearch(int *, int, int, int);
int main()
{
	int n,x,pos;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>x;
	pos=binarySearch(arr,0,n-1,x);
	cout<<pos<<endl;
	return 0;
}

int binarySearch(int a[], int l, int r, int x)
{
	while(l<=r)
	{
		int mid=l+(r-l)/2;
		if(a[mid]==x)
			return mid;
		if(a[mid]<x)
			l=mid+1;
		else
			r=mid-1;
	}
	return -1;
}
