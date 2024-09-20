#include<iostream>
using namespace std;
main()
{
	int size,cost,square_feet;
	int price_per_pound,area;
	cout<<"Enter the size of fertilizers in pounds : ";
	cin>>size;
	cout<<"Enter the cost of bag : ";
	cin>>cost;
	cout<<"Enter the square feet that can be covered by the bag : ";
	cin>>square_feet;

	price_per_pound = cost/size;
	area = cost/square_feet;
	cout<<"Cost pf the fetilizer per pound is $\n"<<price_per_pound;
	cout<<"Cost of fertilizzing per sqaure feet is $"<<area;
}