#include<iostream>
using namespace std;
main()
{
    int sides;
    int angles;

    cout<<"Enter the number of polygons : ";
    cin>>sides;

    angles = (sides-2)*180;

    cout<<"The sum of internal angles of a "<< sides <<" sided polygon is : " <<angles <<" degrees";

}