#include<iostream>
using namespace std;

class Number_system
{
    public:
            int a;

            void setdata_number()
            {
                cout << "ENTER NUMBER = "; 
                cin >> a;
            }
            bool operator<(Number_system num)
            {
                if (a < num.a)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
};

int main()
{
    Number_system n1, n2;
    
    n1.setdata_number();
    n2.setdata_number();

    if(num1 < num2)
    {
         cout << "|NUMBER 2 IS MAXIMUM VALUE......|";
    }
    else
    {
    	cout << "|NUMBER 1 IS MEXIMUM VAALUE.....|";
    }
}
