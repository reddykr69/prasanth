#include<iostream>
using namespace std;
int main()
{
	int a[3][3]={{1,1,1},{1,1,1},{1,1,1}},i,sum=0;
	for(i=0;i<3;i++)
	{
		sum +=a[i][i];
		sum=sum+a[i][2-i];
	}
	cout<<sum/2;
	return 0;
}
