#include<iostream>
#include<string>

using namespace std;

class laptop 
{
public:
	string name;
	float price; 

	laptop()

	{
		cout<<"name : "<<name<<endl<<"price : "<<price<<endl;

	}

	laptop (string lname, float lprice)
	{

		// strcpy( name,"mac");
		name= lname;
		price= lprice;
		cout<<"name : "<<name<<endl<<"price : "<<price<<endl;
	} 

	laptop ( const laptop p);
	{

		name = p.name;
		price = p.price;
		cout<<"name :"<<name<<endl<<"price :"<<endl;
	}
};

int main()
 {

	laptop l;
	laptop m( "MAC",100.0);
	laptop k=m;

 	return 0;
 }