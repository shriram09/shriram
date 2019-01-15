#include<iostream>
using namespace std;
int binary(int);
int main()
{
	//program to convert a decimal number to binary
	int d,b;
	cout<<"\nEnter a decimal number: ";
	cin>>d;
	b=binary(d);
	cout<<"\nThe binary equivalent of decimal "<<d<<" is "<<b;
	return 0;
}
int binary(int d)
{
	int rem,b=0;
	int i=1;
	while(d>0)
	{
		rem=d%2;
		d=d/2;
		b=b+rem*i;
		i=i*10;
	}
	return b;
}
