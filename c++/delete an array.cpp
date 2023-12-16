#include<iostream>
using namespace std;
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10},n=10,pos,i;
	cin>>pos;
	for(i=pos;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	for(i=0;i<n;i++)
	{
		cout<<" "<<a[i];
	}
	return 0;
}
