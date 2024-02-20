#include<iostream>
using namespace std;

class Number
{
	protected: 
		        int A;
		
	public :
            void set_numberdata()
            {
                cout << "ENTER ANY NUMBER= ";
                cin >> A; 
            }
};

class Squar : public Number
{	
	public :
            void get_Squardtda()
            {
                cout << endl << "|ANS. THE SQUARE OF THE NUMBER ENTERED BY YOU= " << A*A << endl;
            }
};

class Cube : public Number
{	
	public :
            void get_Cubedata()
            {
                cout <<"ANS. THE CUBE OF THE NUMBER ENTERED BY YOU= " << A*A*A << endl;
            }
};

main()
{
	
	Squar t1;
	Cube t2;
	
	t1.set_numberdata();
	t1.get_Squardtda();
	
	t2.set_numberdata();
	t2.get_Cubedata();
}
