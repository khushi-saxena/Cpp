#include<iostream>
using namespace std;


void swap (int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int main()

{

	int a=10,b=5;
	cout<<"A = " <<a<<" B= "<<b<<endl;
	swap(a,b);
	cout<<"A = " <<a<< " B = "<<b<<endl;


	return 0;
}