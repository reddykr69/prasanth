#include<iostream>
using namespace std;
int main()
{
	int factor=1,n,i;
	cin>>n;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		factor=factor+i;
	}
	if(factor>n)
	cout<<"abundant number";
	else
	cout<<"not abundant number";
	return 0;
}
