#include <iostream>
using namespace std;

class Shape
{
    protected:
                float width;
                float hight;

    public :
            void set_Shapedata()
            {
                    cout << endl << endl <<"ENTER HIGHT =";
                    cin >> hight;
                    cout << "ENTER WIDTH =";
                    cin >> width;
            }	
};

class Tringle : public Shape
{
	
	public:
            void get_Tringledata()
            {
                        cout << endl << "|TRINGLE|"<< 0.5*(width*hight);
            }           
};

class Rectangle : public Shape
{
	public: 
            void get_Rectangledata()
            {
                        cout << endl << "|RECTANGLE|====>  " << width*hight;                  
            }
};

int main()
{
	
	Tringle t1;
                t1.set_Shapedata();
                t1.get_Tringledata();

	Rectangle t2;
                t2.set_Shapedata();
                t2.get_Rectangledata();
};
