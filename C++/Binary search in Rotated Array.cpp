#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[7]={4,5,6,7,0,1,2};
	int l=0, h=6;
	bool ans = true;
	while(l<=h)
	{
		int mid=l+(h-l)/2;
		if(mid>0 && mid<6)
		{
			if(a[mid-1]>a[mid] && a[mid]<a[mid+1])
			{
				cout<<mid<<endl;
				ans=false;
				break;
			}
			else if(a[mid-1]<a[mid])
			{
				l=mid+1;
			}
			else
			{
				h=mid-1;
			}
		}
	}
	if(ans==true)
	{
		cout<<a[0];
	}
}
