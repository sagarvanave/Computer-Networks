#include<iostream>
#include<math.h>
#define MAX 100
#define d 10
using namespace std;
int main()
{
	int a[MAX],b[d],c[MAX],i,j,k,size,dsize;
	cout<<"\nEnter Message length : ";
	cin>>size;
	cout<<"\nEnter your Message : \n";
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
		
	
	cout<<"\nEnter Divisor length : ";
	cin>>dsize;
	cout<<"\nEnter Generator : ";
	for(i=0;i<dsize;i++)
		{
			cin>>b[i];	
		}

	int newsize;
	newsize = size+dsize-1;
	for(i=size;i<newsize;i++)
	{
		a[i] = 0;
	}
		

	cout<<"\nMain Message : \n";
	for(i=0;i<newsize;i++) {
		cout<<" "<<a[i];	
	}

	cout<<"\nDivisor : \n";
	for(i=0;i<dsize;i++) 
	{
		cout<<" "<<b[i];
	}	
	for(i=0;i<newsize;i++)
		{
			c[i] = a[i]; 	
		}

	for(i=0;i<size;i++)
	{
		k=0;
		if(a[i]==0)
		{
			continue;
		}
			
		for(j=i;j<i+dsize;j++)
		{
			int temp;
			temp = a[j]^b[k];
			a[j] =  temp;
			k++;
		}
		
	}
	cout<<endl;
	cout<<"\nRemainder : \n";
	for(i=size-1;i<newsize;i++)
	{
		cout<<" "<<a[i];
	}
	cout<<endl;
	int crc[MAX];
	int carry=0;
	for(i=0;i<newsize;i++)
	{
		if(c[i]==1 && a[i]==1 && carry==0)
		{
			crc[i] = 0;
			carry = 1;
		}
		else if(c[i]==1 && a[i]==1 && carry==1)
		{
			crc[i] = 1;
			carry = 1;
		}
		else if(c[i]==0 && a[i]==0 && carry==0)
		{
			crc[i] = 0;
			carry = 0;
		}
		else if(c[i]==0 && a[i]==0 && carry==1)
		{
			crc[i] = 1;
			carry = 0;
		}
		else if(c[i]==1 && a[i]==0 && carry==0)
		{
			crc[i]=1;
			carry = 0;
		}
		else if(c[i]==1 && a[i]==0 && carry==1)
		{
			crc[i] = 0;
			carry = 1;                                                                                                                                                                        
		}
		else if(c[i]==0 && a[i]==1 && carry==0)
		{
			crc[i] = 1;
			carry = 0;
		}
		else if(c[i]==0 && a[i]==1 && carry==1)
		{
			crc[i] = 0;
			carry = 1;
		}
		else
		{
			break;
		}
			
	}
	cout<<"\n\nTransmitted Data : ";
	for(i=0;i<newsize;i++)
	{
		cout<<" "<<crc[i];
	}
	
	
	
	cout<<"\n\nReceiver Side : ";
	for(i=0;i<size;i++)
	{
		k=0;
		if(crc[i]==0)
		{
			continue;
		}
			
		for(j=i;j<i+dsize;j++)
		{
			int temp;
			temp = crc[j]^b[k];
			crc[j] =  temp;
			k++;
		}
	}
	
	cout<<"\nRemainder : \n";
	for(i=size-1;i<newsize;i++)
	{
		cout<<" "<<crc[i];
	}
	return 0;
}
