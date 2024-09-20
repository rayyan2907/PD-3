#include<iostream>
using namespace std;
main()
{
	int int_vel,time,fin_vel,acc;
	cout<<"enter initial velocity : ";
	cin>>int_vel;
	cout<<"enter time : ";
	cin>>time;
	cout<<"enter acceleeration : ";
	cin>>acc;

	fin_vel = acc*time - int_vel ;


	cout<<"final velocity "<<fin_vel;
}