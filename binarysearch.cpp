#include<iostream>

using namespace std;

int main()

{
	void bsearch(int[],int,int);
	int A[20],n,i,x;
	cout<<"enter size";
	cin>>n;
	cout<<"enter elements in an arry";
	for(i=0;i<=n;i++)
	{
	cin>>A[i];
	}

	cout<<"enter no. which you want to search";
	cin>>x;
	bsearch(A,n,x);
	
	return 0;
}
void bsearch(int A[], int n, int x)
{
	int beg, mid, last,p=0;
	beg=0;
	last=n-1;
	while(beg<=last)
	{
	mid=(beg+last)/2;
	if(A[mid]==x)
	{
	p=1;
	cout<<"no. found";

	}
	else if(A[mid]<x)
	beg=mid+1;
	else 
	last=mid-1;

	}

    if(p==0)
    cout<<"no. not found";

}