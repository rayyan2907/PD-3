#include<iostream>
using namespace std;
main()
{
	int adu_tic_price,chi_tic_price,adu_tic_sold,chi_tic_sold,charity;
	string movie_name;
	int total,donation,rem;

	cout<<"Enter the movie name : ";	
	cin>> movie_name;
	cout<<"enter the adult ticket price : $";
	cin>> adu_tic_price;
	cout<<"enter the child ticket price : $";
	cin>>chi_tic_price;
	cout<<"enter the number of adult tickets sold : ";
	cin>> adu_tic_sold;
	cout<<"enter the number of child tickets sold : ";
	cin>> chi_tic_sold;
	cout<<"enter the percenatge of amoount to be donated to the charity : ";
	cin>>charity;

	total = (adu_tic_sold*adu_tic_price)+(chi_tic_price*chi_tic_sold);
	donation = (total*charity)/100;
	rem = total - donation;

	cout<<"Movie : "<<movie_name;
	cout<<"\nTotal amount collected from the tickets : $"<<total;
	cout<<"\ndonation to the charity : $"<<donation;
	cout<<"\nRemaining amount after doantion : $"<< rem;

}