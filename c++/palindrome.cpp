#include<iostream>
using namespace std;
int main()
{
	int rem,reverse=0,n,cn;
	cin>>n;
	cn=n;
	while(n>0)
	{
		rem=n%10;
		reverse=reverse*10+rem;
		n=n/10;
	}
	if(cn==reverse)
	cout<<"palindrome";
	else
	cout<<"not palindrome";
	return 0;
}
