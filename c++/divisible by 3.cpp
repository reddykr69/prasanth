#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	string r;
	r=(a%3==0)?"divisible by 3":"not divisible by not 3";
	cout<<r;
	return 0;
}
