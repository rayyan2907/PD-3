#include<iostream>
using namespace std;
main()
{
	float price_veg_kgs;
	float price_fruits_kgs;
	int veg_kg;
	int fruits_kg;
	float earnings,rps;

	cout<<"Enter vegetable price per kg (in coins): ";
	cin>>price_veg_kgs;
	cout<<"Enter fruits price per kiolgrams (in coins): ";
	cin>>price_fruits_kgs;
	cout<<"Enter total kilograms of vegetables : ";
	cin>>veg_kg;
	cout<<"Enter total kilograms of fruits : ";
	cin>>fruits_kg;

	earnings = fruits_kg*price_fruits_kgs + veg_kg*price_veg_kgs;
	rps = earnings/1.94;

	cout<<"Total earning in rupees (Rps): "<< rps;
}