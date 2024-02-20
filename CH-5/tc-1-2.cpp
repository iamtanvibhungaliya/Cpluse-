#include<iostream>
using namespace std;

class Cricket
{
	
	protected: 
		        int i;
};

class TestMatch : public Cricket
{
	public: 
            void get_Total_over_data(int i)
            {
                cout <<endl << "TEST-MATCH OVER'S= " << i;
            }
};

class T20Match : public Cricket
{
	public: 
            void get_Total_over_data(int i)
            {
       			cout<< "T20-MATCH OVER'S= " << i;
            }
};

int main()
{

	TestMatch o1;
	T20Match o2;
	
	o1.get_Total_over_data(200);	
	o2.get_Total_over_data(20);
}
