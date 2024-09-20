#include<iostream>
using namespace std;
main()
{
	int width,height,n,area,paint;
	cout<<"Enter the square meters you can paint : ";
	cin>>n;
	cout<<"Enter the width of a single wall : ";
	cin>>width;
	cout<<"Enter the hieght of a single wall : ";
	cin>>height;

	area = height*width;
	paint = n/area;

	cout<<"Number of walls u can paint is : "<<paint;


}