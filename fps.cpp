#include<iostream>
using namespace std;
main()
{
	int min,fps,total_frames,seconds;
	cout<<"Enter total number of minutes : ";
	cin>>min;
	cout<<"Enter total number of frames peer second : ";
	cin>>fps;

	seconds = min*60;
	total_frames = fps*seconds;

	cout<<"Total number of frames :"<<total_frames;
}