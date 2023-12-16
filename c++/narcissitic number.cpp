#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=0,cn;
	cin>>n;
	cn=n;
	while(n>0)
	{
		i=n%10;
		sum=sum+i*i*i;
		n=n/10;
	}
	if(cn==sum)
	cout<<"narcissitic number";
	else
	cout<<"not narcissitic number";
	return 0;
}
