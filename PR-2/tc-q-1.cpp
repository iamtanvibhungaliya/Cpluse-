#include <iostream>
#include <string.h>
using namespace std;

class avadh
{
	
private:
    int avadh_num;
    char avadh_name[20];
    char avadh_Source[20];
    char avadh_Destination[20];
    char avadh_time[20];

public:
    void setdataavadh()
    {
        cout << endl << "ENTER TRAIN NAME=";
        cin >> this->avadh_name;
        cout << "ENTER TRAIN NUMBER=";
        cin>>this->avadh_num;
        cout << "ENTER TRAIN SOURCE=";
        cin >> this->avadh_Source;
        cout << "ENTER TRAIN DESTINATION=";
        cin >> this->avadh_Destination;
        cout << "ENTER TRAIN TIME=";
        cin >> this->avadh_time;
    }
    void getdatavadh()
    {
        cout << endl
             << " |TRAIN NAME\t\t|=" << this->avadh_name << endl
             << " |TRAIN NUMBER\t\t|=" << this->avadh_num << endl
             << " |TRAIN SOURCE\t\t|=" << this->avadh_Source << endl
             << " |TRAIN DESTINATION\t|=" << this->avadh_Destination << endl
             << " |TRAIN TIME\t\t|=" << this->avadh_time << endl;
    }
};

int main()
{
    avadh a1,a2,a3;

    a1.setdataavadh();
    a2.setdataavadh();
    a3.setdataavadh();

    a1.getdatavadh();
    a2.getdatavadh();
    a3.getdatavadh();

    int n;
    
    cout << "ENTER TRAIN NUMBER= ";
    cin >> n;

    switch (n)
    {
            case 1:
                    a1.getdatavadh();
                    break;
            case 2:
                    a2.getdatavadh();
                    break;
            case 3:
                   a3.getdatavadh();
                   break;
                   
            default:
                    break;
    }
}
