#include<iostream>
#include <string>


using namespace std;

class laptop
{
   public:
   	string name;	
	int processor;
	void run()
	{
		cout<<"void run is running"<<endl;
	}

	void run(int a)
	{

		cout<<a<<" int  run is running"<<endl;
	}
};

int main()
{
     
	laptop l;
	l.run();
	l.run(5);


	return 0;
}