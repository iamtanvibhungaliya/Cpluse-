#include <iostream>
using namespace std;

class A
{
    protected:
                int Emp_id;
                string Emp_name;
                string  Emp_role ;
                double Emp_salary;
                string Emp_experince;
                string Emp_comp_name;
                string Emp_address;
                string Emp_email;
                string Emp_contact;

public:
    void set_dataA()
    {
        cout << endl <<"ENTER YOUR ID = ";
        cin >> this->Emp_id;
        cout << "ENTER YOUR NAME = ";
        cin >>(this->Emp_name);
        cout << "ENTER YOUR ROLE = ";
        cin >> this->Emp_role;
    }
};

class B : public A
{
public:
    void set_dataB()
    {
        cout << "ENTER YOUR SALARY = ";
        cin >> this->Emp_salary;
        cout << "ENTER YOUR EXPERINCE = ";
        cin >> this->Emp_experince;
    }
};

class C : public B
{
    public:
            void set_dataC()
            {
            
                cout << "ENTER YOUR COMPANY NAME = ";
                cin >> this->Emp_comp_name;
                cout << "ENTER YOUR ADDRESS = ";
                cin >> this->Emp_address;
            }

            void get_dataC()
            {
                cout << endl
                
                    <<endl << "|NAME\t\t\t|=" << this->Emp_name << endl
                    <<endl << "|ROLE\t\t\t|=" << this->Emp_role << endl
                    <<endl << "|SALARY\t\t\t|=" << this->Emp_salary << endl
                
            }
};

class D : public C
{
    public:
            void set_dataD()
            {
                cout << "ENTER YOUR EMAIL = ";
                cin >> this->Emp_email;
                cout << "ENTER YOUR CONTECT NUMBER = ";
                cin >> this->Emp_contact;
            }

            void get_dataD()
            {
                cout
                     << endl << "|ID\t\t\t|=" << this->Emp_id << endl
                     << "|------------------------"
                     << endl << "|ROLE\t\t\t|= " << this->Emp_role << endl
                     << "|------------------------"
                     << endl << "|SALARY\t\t\t|=" << this->Emp_salary << endl
                     << "|------------------------"
                     << endl << "|EXPERINCE\t\t|=" << this->Emp_experince << endl
                     << "|------------------------"
                     << endl << "|COMPANY NAME\t\t|=" << this->Emp_comp_name << endl
                     << "|------------------------"
                     << endl << "|ADDRESS\t\t|=" << this->Emp_address << endl
                     << "|------------------------"
                     << endl << "|EMAIL\t\t\t|=" << this->Emp_email << endl
                     << "|------------------------"
                     << endl << "|CONTECT\t\t|=" << this->Emp_contact << endl
                     << "|------------------------"; 
            }         
};


int main()
{
    D t;

    t.set_dataA();
    t.set_dataB();
    t.set_dataC();
    t.set_dataD();

    t.get_dataC();
    t.get_dataD();
}
