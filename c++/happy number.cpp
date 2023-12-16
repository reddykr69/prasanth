#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=0;
	cin>>n;
	while(sum!=1&&sum!=4){
	sum=0;
	while(n>0)
	{
		i=n%10;
		sum=sum+i*i;
		n=n/10;
	}
	n=sum;
}
	if(sum==1)
	cout<<"happy number";
	else
	cout<<"not happy number";
	return 0;
}
