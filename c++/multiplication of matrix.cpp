#include<iostream>
using namespace std;
int main()
{
	int a[3][3]={{1,1,1},{1,1,1},{1,1,1}},b[3][3]={{1,1,1},{1,1,1},{1,1,1}},c[3][3]={0},i,j,k;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			c[i][j]+=a[i][j]*b[i][j];
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
		{
			cout<<c[i][j];
		}
		cout<<endl;
	}
	return 0;
}
