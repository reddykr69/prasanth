#include<iostream>
using namespace std;
int main()
{
	int p,q;
	cin>>p>>q;
	while(p!=q)
	{
		if(p>q)
		p=p-q;
		else
		q=q-p;
	}
	cout<<"hcf:"<<p;
	return 0;
}
