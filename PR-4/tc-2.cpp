#include<iostream>
using namespace std;

class Distance
{
    public:
            int k_meter,meter;
            
            void set_destence_data()
            {
                cout << "Enter Kilometer = "; 
                cin >> k_meter;
                cout << "Enter meter = ";
                cin >> meter;
            }
            
            Distance operator+(Distance d)
            {
                    Distance dis;
                    dis.k_meter=(meter+d.meter)/1000;
                    dis.k_meter+=(k_meter + d.k_meter);
                    dis.meter=(meter+d.meter)%1000;
                    return dis;
            }
                      
            void get_distance_data(Distance a)
            {
                cout << "KiloMeter = " << a.k_meter; 
                cout << "Meter  = " << a.meter << endl << endl;
            }
};

int main()
{
    Distance t1, t2, t3;
    
    cout <<  "ENTER VELUE OF ONE= " << endl;
    	t1.set_destence_data();
    cout <<  "ENTER VALUE FO TWO= " << endl;
    	t2.set_destence_data();
    
    t3 = t1 + t2;
    t3.get_distance_data(o3);

}
