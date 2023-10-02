#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<" Enter the Size : ";
	cin>>n;
	int arr[n];
	cout<<"Enter Elements into array : \n";
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	int unique=0;
	for(int i=0; i<n ; i++)
	{
		unique ^= arr[i];
	}
	cout<<"unique element on duplicate array is : "<<unique<<endl;
}
