#include<iostream>
using namespace std;
int main()

{
	int x=5;

	int*ptr=&x;

	cout<<"address of  "<<x<<" is "<<&x<<endl;
	cout<<"pointer of  "<<ptr<<" is ponting to  "<<*ptr<<endl; 


	return 0;
}
