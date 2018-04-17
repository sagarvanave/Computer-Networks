#include<iostream>
using namespace std;
#define max 100 
int checkprime(int val)
{
	int count=0;
	for(int i=1;i<=val;i++)
	{
		if(val%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	
}

int main()
{
	int len,seg,i=0,jcounter;
	
	cout<<"Enter the count of the elements : ";
	cin>>len;
	int arr[max];
	
	int counter;
	int ans=checkprime(len);
	cout<<"\nEnter "<<len<<" Elements : ";
	for(i=0;i<len;i++)
	{	
		cin>>arr[i];
	}
	if(ans==0)
	{
		int countoddeven=0;
		for(i=0;i<len;i++)
		{		
			if(arr[i]==1)
			{
				countoddeven++;
			}
		}

		if(countoddeven%2==0)
		{
			arr[i]=0;
		}
		else
		{
			arr[i]=1;
		}
		cout<<"\n\n VRC : \n\n";
		for(int j=0;j<=i;j++)
		{
			if(j==i)
			{
				cout<<" | ";
			}
			cout<<arr[j];
		}
	
	}
	else
	{
		for(i=7;i>=2;i--)
		{
			if(len%i==0)
			{
				seg=i;
				counter++;
			}
		}
		
		int arr1[max][max];
		int countforarr=0;
		for(i=0;i<len/seg;i++)
		{
			for(int j=0;j<seg;j++)
			{
				arr1[i][j]=arr[countforarr];
				countforarr++;
				
			}
		
		}
		int innercount=0;
		int j;
		for(i=0;i<len/seg;i++)
		{
			for(j=0;j<seg;j++)
			{
				if(arr1[i][j]==1)
				{
					innercount++;
				}
			}
			if(innercount%2==0)
			{
				arr1[i][j]=0;
			}
			else
			{
				arr1[i][j]=1;
			}
			innercount=0;
		}
		cout<<"\n\n\n";
		cout<<"\n\n VRC : \n\n";
		for(i=0;i<len/seg;i++)
		{
			for(j=0;j<seg+1;j++)
			{
				if(j==seg)
				{
					cout<<" | ";
				}
				cout<<arr1[i][j]<<" ";
				
			}
			cout<<"\n";
		}
		                                                                               
	}

	return 0;
}
