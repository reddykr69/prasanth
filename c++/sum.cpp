#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=0;
	cin>>n;
	while(n>0){
		i=n%10;
		sum+=i;
		n=n/10;
	}
	cout<<"sum:"<<sum;
	return 0;
}
