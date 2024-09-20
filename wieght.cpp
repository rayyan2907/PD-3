#include<iostream>
using namespace std;
main()
{
	string name;
	int weight,kgs,loss;

 	cout<<"enter your name : ";
	cin>>name;
	cout<<"enter the weight you want to loss : ";
	cin>>weight;
	
	
	loss = weight*15;

	cout<<name<<" will need "<<loss<<" days to lose "<<weight<<" kg of weight by following doctors suggestion";

		
}