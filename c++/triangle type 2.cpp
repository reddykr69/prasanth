#include<iostream>
using namespace std;
int main()
{
	int i,j,c=1,n;
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<i;j++){
		cout<<""<<c;
	}
	cout<<c++;
	cout<<"\n";
}
return 0;
}
