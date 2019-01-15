#include<iostream>
using namespace std;
int decimal(int);
int main()
{
	//program to covert a binary number to decimal
	int b,d;
	cout<<"\nEnter a binary number: ";
	cin>>b;
	d=decimal(b);
	cout<<"\nThe decimal equivalent of the binary "<<b<<" is "<<d;
	return 0;
}
int decimal(int b)
{
	int dec,rem,base;
	base=1;
	dec=0;
	while(b>0)
	{
		rem=b%10;
		dec=dec+rem*base;
		b=b/10;
		base=base*2;
	}
	return dec;
}
