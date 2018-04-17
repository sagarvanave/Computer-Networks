#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,m,r,i;
	cout<<"Enter no of bits : ";
	cin>>n;
	int elementarray[n];
	cout<<"\n\nEnter values : ";
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter element at ["<<i<<"] position : ";
		cin>>elementarray[i];
	}
	cout<<"\n\nThe entered values are : ";
	for(i=0;i<n;i++)
	{
		cout<<elementarray[i]<<" ";
	}
	
	
	m=n;
	if(n>=2 && n<=4)
	{
		r=3;
	}
	else if(n>=5 && n<=11)
	{
		r=4;
	}
	else if(n>=12 && n<=26)
	{
		r=5;
	}
	else if(n>=27 && n<=57)
	{
		r=6;
	}
	else if(n>=58 && n<=120)
	{
		r=7;
	}
	else
	{
		cout<<"\n\nOops..... there is some error!";
	}
	cout<<"\n\nNow value of 'r' is : "<<r;
	cout<<"\n\ntotal no of boxes are (m+r): "<<m+r;
	int mainarr[m+r];
	
	
	int r_array[r];
	for(i=0;i<r;i++)
	{
		r_array[i]=pow(2,i);
	}
	cout<<"\n\nredundent array : ";
	for(i=0;i<r;i++)
	{
		cout<<r_array[i]<<" ";
	}
	for(i=0;i<m+r;i++)
	{
		for(j=0;j<r;j++)
		{	
			if(i==r_array[j]-1)
			{
				mainarr[i]=-1;
			}
			else
			{
				
			}
		}	
	}
	
	

	 	
	
	
	
	return 0;
	
}
