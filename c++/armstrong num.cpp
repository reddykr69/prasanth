#include<iostream>
using namespace std;
int main(){
	int n,rem,sum=0,cn;
	cin>>n;
	cn=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem*rem*rem;
		n=n/10;
	}
	if(cn==sum)
	cout<<"given is armstrong number";
	else
	cout<<"it is not armstrong number";
	return 0;
}
