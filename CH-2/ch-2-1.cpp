//empoyle record system 
#include<iostream>
#include<string.h>
using namespace std;

class employe
{
	public:
		
	int emp_id;
	char emp_name[20];	
	int emp_age;
	char emp_role[50];
	int emp_salary;
	char emp_city[20];
	char emp_experience[50];
	char emp_cpyname[20];
	
};

int main()
{
	employe e1;
	employe e2;
	employe e3;
	employe e4;
	employe e5;	
	
	for(int i=1;i<=5;i++){
	
	cout << "enter id : ";
	cin >> 	e1.emp_id;
	cout << "enter name : ";
	cin >> 	e1.emp_name;
	cout << "enter age : ";
	cin >> 	e1.emp_age;
	cout << "enter role : ";
	cin >> 	e1.emp_role;
	cout << "enter salary : ";
	cin >> 	e1.emp_salary;
	cout << "enter city : ";
	cin >> 	e1.emp_city;
	cout << "enter experience : ";
	cin >> 	e1.emp_experience;
	cout << "enter company name : ";
	cin >> 	e1.emp_cpyname;
}
	
	for(int i=1;i<=5;i++){
		cout << "ID\t="<<e1.emp_id<<endl
			<< "NAME\t=" <<e1.emp_name<<endl
		 	<< "AGE\t=" <<e1.emp_age<<endl
		 	<< "ROLE\t=" <<e1.emp_role<<endl
		 	<< "SALARY\t=" <<e1.emp_salary<<endl
		 	<< "CITY\t=" <<e1.emp_city<<endl
		 	<< "EXPERIENCE\t=" <<e1.emp_experience<<endl
		 	
			 << "COMPANY NAME\t=" <<e1.emp_cpyname<<endl;
	}
}
