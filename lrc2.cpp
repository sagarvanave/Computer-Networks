#include<iostream>
#define MAX 500

using namespace std;
int main()
{
	int n,i,j;
	cout<<"Enter no. of elements : \n";
	cin>>n;
	int q= n/2;
	int quotient;
	int arr[MAX][MAX];
	for(int z=q;z>0;z--)
	{	
		if(n%q==0)
		{
			quotient=n/q;
			cout<<"Enter bits : \n"<<endl;
			for( i=0;i<quotient;i++)
			{
				for( j=0;j<q;j++)
				{
					
					cin>>arr[i][j];
				
				}	
			}
		break;
		}
		else
		q--;
	}
	cout<<endl<<endl;
	for( j=0;j<q;j++)
	{
		int count = 0;
		for( i=0;i<quotient;i++)
		{
			quotient=n/q;
			if(arr[i][j]==1)
			{
				count++;
			}
		if(count%2==0)
		{
			arr[quotient][j]=0;
		}
		else
		{
			arr[quotient][j]=1;
		}		
		}	
	}
	cout<<"\n\nLRC Output : \n\n";
	for(int i=0;i<quotient+1;i++)
			{
			    if(i==quotient)
				{
					cout<<"--------\n";
				}
				for(int j=0;j<q;j++)
				{
					cout<<arr[i][j]<<" ";
				}
			
				cout<<endl;
			}
	return 0;
}

