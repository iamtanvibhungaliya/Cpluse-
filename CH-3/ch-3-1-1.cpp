//Students record system 
#include<iostream>
#include<string.h>
using namespace std;

class student
{
	private:
		
	int std_id;
	string std_name;	
	int std_age;
	string std_course;
	string std_city;
	string std_email;
	string std_collage;
	
	public:
		
	student setdata()
	{
		
	cout << "enter id : ";
	cin >> 	std_id;
	cout << "enter name : ";
	cin >> 	std_name;
	cout << "enter age : ";
	cin >> 	std_age;
	cout << "enter course : ";
	cin >> 	std_course;
	cout << "enter city : ";
	cin >> 	std_city;
	cout << "enter email : ";
	cin >> 	std_email;
	cout << "enter collage : ";
	cin >> 	std_collage;
	
	}
	
	student getdata()
	{
			cout << "ID\t="<<std_id<<endl
			<< "NAME\t=" <<std_name<<endl
		 	<< "AGE\t=" <<std_age<<endl
		 	<< "COURSE\t=" <<std_course<<endl
		 	<< "E-MAIL\t=" <<std_email<<endl
		 	<< "CITY\t=" <<std_city<<endl
		 	<< "COLLAGE\t=" <<std_collage<<endl;
		 	
	}
	
	student setage(int age)
	{
		if(age<=25){
			cout<<"you are elagibal for study!!"<<endl;
		}
		else
		{
			cout<<"you are can't elagibal for study!!";
		}
	}
};

int main()
{
	student s1;
	student s2;
	student s3;
	student s4;
	student s5;
	
	s1.setage(18);
	s1.setdata();
	s1.getdata();
	s2.setage(26);
	s2.setdata();
	s2.getdata();
	s3.setage(19);
	s3.setdata();
	s3.getdata();
	s4.setage(20);
	s4.setdata();
	s4.getdata();
	s5.setage(21);
	s5.setdata();
	s5.getdata();
	
}
