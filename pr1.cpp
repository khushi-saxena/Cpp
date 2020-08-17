#include<conio.h>
#include<iostream>
int area( int,int);
float area(int);
void main()
{
	clrscr;
	int r;
	cout<<"enter the radius of circle";
	cin>>r;
	float A-area(r);
	cout<<"area of circle is"<<A;
	int l,b,a;
	cout<<"enter the length and breath";
	cin>>l>>b;
	a=area(l,b);
	cout<<"area of rectangle is"<<a;
	getch();

}
float area(int R)
{
	return(3.14*R*R);
}
int area(int L,int B)
{
	return ( L*B);
}