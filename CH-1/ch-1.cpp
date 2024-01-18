#include<iostream>
using namespace std;

int main()
{
	int n;
	
	cout << "enter n :";
	cin >> n;
	
	int a[n];
	int i;
	
	for(i=0;i<n;i++){
		cout<<"enter a:["<< i << "]";
		cin >>a[i];
	}
	
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			cout<<" a:["<< i << "] : "<<a[i]<<"\n";
	}
}

	return 0;
	
} 
