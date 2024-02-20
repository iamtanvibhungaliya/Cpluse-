#include<iostream>
using namespace std;
class Implementing
{
	public: 
            void operations(int A,int B)
            {
            		cout <<endl << "|DIVISION|= " << (P/Q);
            }
            
            void operations(int P,int Q,int R)
            {
                cout <<endl        << "|SUBSTECTTION|= " << (P-Q-R);
            }
            
            void operations(int P,int Q, int R,int S)
            {
                cout <<endl        << "|MULTIPLICATION|= " << (P*Q*R*S);
            }
            
            void operations(int P,int Q,int R,int S,int T)
            {
                cout << endl       << "|ADDITION|= " << (P+Q+R+S+T);
            }
};

main()
{
	Implementing P1;
	
	P1.operations(24,12);	
	P1.operations(10,20,30);
	P1.operations(1,2,3,4);
	P1.operations(1,2,3,4,5);
}
