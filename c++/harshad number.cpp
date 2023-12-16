#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,rem,temp;
	cin>>n;
	temp=n;
	while(temp)
	{
		rem=temp%10;
		sum=sum+rem;
		temp=temp/10;
	}
	rem=n%sum;
	if(rem==0)
	cout<<"harshad";
	else
	cout<<"not harshad";
	return 0;
}
