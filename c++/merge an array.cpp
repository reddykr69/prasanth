#include<iostream>
using namespace std;
int main()
{
	int a[5]={1,2,3,4,5},b[5]={6,7,8,9,10},i,c[10];
	for(i=0;i<5;i++){
		c[i]=a[i];
		c[i+5]=b[i];
	}
	for(i=0;i<10;i++)
	{
		cout<<" "<<c[i];
	}
	return 0;
}
