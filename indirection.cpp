#include<iostream>

using namespace std;

int main()

{


	int x =5;
	int *p=&x;
	int **q=&p;
	cout<<"x = "<<x<<" p "<<p<<" q "<<q<<" *p "<<*p<<" q"<<*q<< "**q "<<**q<<endl;
	return 0;
}n