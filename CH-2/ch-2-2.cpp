//car record system

#include<iostream>
#include<string.h>
using namespace std;

class car 
{
	public: 
	
	int car_id;
	char car_cpyname[20];
	char car_color[20];
	char car_model[20];
	int car_releaseyear;	
};

int main()
{
	car c1;
	
	cout << "enter id : ";
	cin >> 	c1.car_id;
	cout << "enter campany name : ";
	cin >> 	c1.car_cpyname;
	cout << "enter color : ";
	cin >> 	c1.car_color;
	cout << "enter model : ";
	cin >> 	c1.car_model;
	cout << "enter release year  : ";
	cin >> 	c1.car_releaseyear;
	
	cout << "ID\t=" <<c1.car_id<<endl
		<< "CAMPANY NAME\t="<<c1.car_cpyname<<endl
		<< "COLOR\t="<<c1.car_color<<endl
		<< "MODEL\t="<<c1.car_model<<endl
		<< "RELEASE YEAR\t="<<c1.car_releaseyear<<endl;
}
