#include<iostream>
using namespace std;
int linearSearch(int *, int, int);
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
	pos=linearSearch(arr,n,x);
	cout<<pos<<endl;
	return 0;
}

int linearSearch(int a[], int n, int x)
{
	for(int s=0; s<n; s++)
	{
		if(a[s]==x)
			return s;
	}
	return -1;
}
