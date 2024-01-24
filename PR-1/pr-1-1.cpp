#include <iostream>
using namespace std;

class Distances
{
public:
    int ft, inh;
};

int main()
{
    Distances d1;
    Distances d2;

    cout << "Input 1\nFEET= ";
    cin >> d1.ft;
    cout << "Inch= ";
    cin >> d1.inh;
    cout << endl
    
         << "Input 2\nFEET= ";
    cin >> d2.ft;
    cout << "Inch= ";
    cin >> d2.inh;

    int Tfeet = d1.ft + d2.ft;
    int Tinch = d1.inh + d2.inh;

    if (Tfeet >= 12)
    {
        Tinch -= 12;
        Tfeet++;
    }

    cout << "TOTAL LENTH= " << Tfeet << " FEET " << Tinch << "INCH";
}
