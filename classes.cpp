#include<iostream.h>
#include<conio.h>
class complex
{
private:
 	int a,b;
public:
	void set_data( int,int);
	{a=x;b=y;}
	void show_data()
	{cout<<"\na="<<a<<" b="<<b; }


};
void complex: : set_data(int x,int y)
{
	a=x; b=y;
}
void main()
{
	clrscr();
	complex c1;//c1 is an object
	c1.set_data(3,4); 
	c1.show_data();
	getch();

}  