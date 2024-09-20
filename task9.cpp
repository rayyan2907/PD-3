#include<iostream>
using namespace std;
main()
{
	int digit,sum=0,n;
	cout<<"Enter a 4-digit number : ";
	cin>>digit;
	
	n = digit%10;
	sum = sum +n;
	digit = digit / 10;

	n = digit%10;
	sum = sum +n;
	digit = digit / 10;

	n = digit%10;
	sum = sum +n;
	digit = digit / 10;

	n = digit%10;
	sum = sum +n;
	digit = digit / 10;

	cout<<"Sum of indiual digits : "<<sum;
}