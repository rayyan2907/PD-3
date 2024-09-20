#include <iostream>
using namespace std ;
main()
{
	int age,moved,average;
	
	cout<<"Enter the person age : ";
	cin>>age;
	cout<<"enter the number of times they have moved : ";
	cin>>moved;
	
	average = age / (moved+1);
	cout<<"average nnumber of houses lived : "<<average;
}