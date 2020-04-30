#include<iostream.h>
#include<conio.h>
int i,j;
void abc(int arr[][50],int,int);
void main()
{
 clrscr();
 int a[50][50],m,n;
 cout<<"Enter the number of rows and columns of the 2d matrix : ";
 cin>>m>>n;
 cout<<"Enter the elements for the 2d array :\n";
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  cin>>a[i][j];
 }
 cout<<"\nDisplaying the 2d matrix ....\n";
 for(i=0;i<m;i++)
 {
  cout<<endl;
  for(j=0;j<n;j++)
  cout<<a[i][j]<<"\t";
 }
 abc(a,m,n);
 getch();
}

 void abc(int arr[][50],int x,int y)
{
 cout<<"\nDisplaying the X elements of the 2d matrix....\n";
  for(i=0;i<x;i++)
 {
  cout<<endl;
  for(j=0;j<y;j++)
  {
   if(i==j ||  j==3-(i+1))
   cout<<arr[i][j]<<"\t";
   else
   cout<<" \t";
   }
  }
 }
