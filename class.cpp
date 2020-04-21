#include<iostream>
#include<string>

using namespace std;

class laptop

	{
public:
	string name;
	string brand;
	float price;
	string processor;

	void getdata()
	{

		cin>>name>>brand;
		cin>>price;
		cin>>processor;
	}

	void showdata()
	{
		cout<<name<<brand<<price;
	}
	void startup 
	{


		cout<<"laptop "<<name<<" has started" ;
	}
	void shutdown
	{


		cout<<"laptop "<<name<<" is shutting down. "  ;
	}


}

int main()
  {
  	laptop laptop1;
  	laptop1.getdata();

  	return 0;
  }