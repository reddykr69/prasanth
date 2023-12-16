#include<iostream>
using namespace std;
int main(){
	int a,b,add,sub,mul,mod;
	float div;
	cin>>a>>b;
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=(float)a/b;
	mod=a%b;
	cout<<"sum:"<<add<<endl;
	cout<<"sub:"<<sub<<endl;
	cout<<"mul:"<<mul<<endl;
	cout<<"div:"<<div<<endl;
	cout<<"mod:"<<mod<<endl;
	return 0;
}
