#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=0;
	cin>>n;
	for(i=2;i<=n;i++){
	
	if(n%i==0)
	break;}
	if(n==i)
	cout<<"prime";
	else
	cout<<"not prime";
	return 0;
}
