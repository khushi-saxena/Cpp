#include<iostream.h>
#include<conio.h>
struct complex
{
private:
 	int a,b;
public:
	void set_data( int x,int y)
	{a=x;b=y;}
	void show_data()
	{cout<<"\na="<<a<<" b="<<b; }


};
void main()
{
	clrscr();
	complex c1;
	c1.set_data(3,4); 
	c1.show_data();
	getch();

}  