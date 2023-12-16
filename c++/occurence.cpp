#include<iostream>
using namespace std;
int occuernce(int a[],int x,int n){
	int rem=0,i;
	for(i=0;i<n;i++)
	if(x==a[i])
	rem++;
	return rem;
}
int main()
{
	int x,a[]={1,1,12,2,2,2,4,4,7},n;
	cin>>x;
	n=sizeof a/sizeof a[0];
	cout<<"occurence:"<<occuernce(a,x,n);
	return 0;
}
