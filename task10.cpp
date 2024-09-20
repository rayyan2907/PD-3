#include<iostream>
using namespace std;
main()
{
	int num1,num2,num3,num4,num5,num6,num7,num8;
	int num9,num10,num11,num12,num13,num14,num15;
	int sum5,multiply,subtract,add,final;
	
	cout<<"Number1 : "; 
	cin>>num1;
	cout<<"Number2 : "; 
	cin>>num2;	
	cout<<"Number3 : " ; 
	cin>>num3;
	cout<<"Number4 : " ; 
	cin>>num4;
	cout<<"Number5 : ";
	cin>>num5;
	cout<<"Number6 : ";
	cin>>num6;
	cout<<"Number7 : "; 
	cin>>num7;
	cout<<"Number8 : " ; 
	cin>>num8;
	cout<<"Number9 : " ; 
	cin>>num9;
	cout<<"Number10 : "; 
	cin>>num10;
	cout<<"Number11 : " ; 
	cin>>num11;
	cout<<"Number12 : "; 
	cin>>num12;
	cout<<"Number13 : " ; 
	cin>>num13;
	cout<<"Number14 : " ; 
	cin>>num14;
	cout<<"Number15 : " ; 
	cin>>num15;

	sum5 = num1+num2+num3+num4+num5;
	multiply = num6*num7*num8*num9*num10;
	subtract = num11-num12-num13-num14-num15;


	add = sum5+multiply;
	
	final = subtract-add;

	cout<<"final result is : "<<final;

}