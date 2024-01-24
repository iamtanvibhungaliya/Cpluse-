//customer record system
#include<iostream>
using namespace std;

class customer
{
	private:
		
	int cus_id;
	string cus_name;
	int cus_age;
	string cus_city;
	int cus_contect;
	int cus_simcard_validity;
	string cus_telecom_brandname;
	
	public:
		
	customer setdata()
	{
		cout << "enter id : ";
		cin >> 	cus_id;
		cout << "enter name : ";
		cin >> 	cus_name;
		cout << "enter age : ";
		cin >> 	cus_age;
		cout << "enter contect : ";
		cin >> 	cus_contect;
		cout << "enter city : ";
		cin >> 	cus_city;
		cout << "enter simcard validity: ";
		cin >> 	cus_simcard_validity;
	}
	
	customer setsimcard()
	{
		int choice;
		
		cout<<"1) enter for select jio card!!";
		cout<<"2) enter for select airtel card!!";
		cout<<"3) enter for select Vi card!!";
		
		cout << "enter your choice  : ";
		cin >> 	choice;
		
		switch(choice){
			case 1:
				cout<<"you chose a jio!!";
			case 2:
				cout<<"you chose a VI!!";
			case 3:
				cout<<"you chose airtel!!";
				
			default:
				cout<<"Invalid Input!!";
	}
}
	customer getdata()
	{
		cout << "ID\t="<<cus_id<<endl
			<< "NAME\t=" <<cus_name<<endl
		 	<< "AGE\t=" <<cus_age<<endl
		 	<< "CONTECT\t=" <<cus_contect<<endl
		 	<< "SIMCARD VALIDITY\t=" <<cus_simcard_validity<<endl
		 	<< "CITY\t=" <<cus_city<<endl;
	}
	
};
	
int main()
{
	customer c1;
	customer c2;
	customer c3;
	customer c4;
	customer c5;
	
	c1.setdata();
	c1.setsimcard();
	c1.getdata();
	
}

