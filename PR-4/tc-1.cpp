#include<iostream>
using namespace std;

class Message_system
{
	
	private : 
            string one = "HELLO";
            string two;
            
	public : 
		Message_system(string one)
        {
			two = one;
			cout << one;
		}
		
		void getdata1()
        {
			cout<< " " << this->two << endl;
		}		
};

int main()
{
	string n;
	
	cout << "ENTER MASSEGE= ";
	cin >> n;
	
	Message_system t1(n);
	
	t1.getdata1();
}
