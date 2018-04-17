#include <iostream>
#include <string.h>
#define MAX 100
#define PARITY 100

using namespace std;

int main() {
		int i,j,seg,flag=0;
		char arr[MAX],vrc[PARITY],lrc[PARITY];
		
		cout<<"Enter the bit value:";
		cin>>arr;
			
	
		for(i=2;i<strlen(arr);i++){
			if(strlen(arr)%i==0){
				flag=1;
				break;
			}else{
				flag=0;
			}
		}
		if(flag==1){
			seg=strlen(arr)/i;
		}else{
			seg=strlen(arr);
		}
	
		for(i=0;i<strlen(arr);i++){		
				if( i%(strlen(arr)/seg) == 0 ){
						vrc[i/(strlen(arr)/seg)]=arr[i];
						continue;
					}
				if(vrc[i/(strlen(arr)/seg)]==arr[i]){
						vrc[i/(strlen(arr)/seg)]='0';
					}
				else{
						vrc[i/(strlen(arr)/seg)]='1';
					}			
			}
		
		for(i=0;i<strlen(arr);i++){		
			if( i<(strlen(arr)/seg) ){
					lrc[i]=arr[i];
					continue;
				}
			if(lrc[i%(strlen(arr)/seg)]==arr[i]){
					lrc[i%(strlen(arr)/seg)]='0';
				}
			else{
					lrc[i%(strlen(arr)/seg)]='1';
				}			
		}
		
		cout<<"\n\n2D parity is :\n\n";
		for(i=0;i<strlen(arr);i++){
			cout<<"  "<<arr[i]<<"  ";
			
			if( ( (i) % (strlen(arr)/seg) ) == (strlen(arr)/seg)-1 ){
				cout<<"|  "<<vrc[i/(strlen(arr)/seg)]<<"  "<<endl;	
			}	
		}
		
		for(i=0;i<(strlen(arr)/seg);i++){
			cout<<"-----";	
		}
		cout<<endl;
		
		for(i=0;i<(strlen(arr)/seg);i++){
			cout<<"  "<<lrc[i]<<"  ";	
		}
		cout<<endl;
		return 0;
	}

