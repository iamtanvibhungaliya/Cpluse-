#include<iostream>
using namespace std;

int main()
{
	int y1,y2;
	
	cout<<"enter y1 : ";
	cin >> y1;
	cout<<"enter y2 : ";
	cin >> y2;
	
	int i,a[y1];
	for(i=y1;i<y2;i++){
		if(i%4==0){
			cout<<"the array is: "<<i<<endl;	
			}
	}
	
	return 0;
}
