#include<iostream>
using namespace std;
int main()
{
	int n,sq,i,sum=0;
	cin>>n;
	sq=n*n;
	while(sq>0)
	{
		i=sq%10;
		sum=sum+i;
		sq=sq/10;
	}
	if(sum==n)
	cout<<"neon";
	else
	cout<<"not neon";
	return 0;
}
