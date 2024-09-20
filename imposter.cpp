#include<iostream>
using namespace std;
main()
{
	float imposter , player , chance;
	cout<<"Enter imposter count : ";
	cin>>imposter;
	cout<<"Enter player count : ";
	cin>>player;
	chance = 100*(imposter/player);
	cout<<"chance of being an impooster is " << chance <<"%";

	
}
