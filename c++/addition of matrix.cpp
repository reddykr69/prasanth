#include<iostream>
using namespace std;
int main()
{
	int a[3][3]={{1,1,1},{1,1,1},{1,1,1}},b[3][3]={{1,1,1},{1,1,1},{1,1,1}},c[3][3],i,j,sum=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
		{
			cout<<c[i][j];
		}
		cout<<"\n";
	}
	return 0;
}
