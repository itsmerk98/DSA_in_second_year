#include<iostream>
#define N 8
using namespace std;
int main()
{
	int DATA[N]={32,51,27,85,66,23,13,57};
	cout<<"Befor bubble sotting ! "<<endl;
	for(int K=0;K<=N-1;K++)
	{
		cout<<DATA[K]<<" ";
	}
	cout<<endl;
	
	// BUBBLE SOTTING 
	
	for(int I=0;I<=N-1;I++)
	{
		for(int J=0;J<=N-1;J++)
		{
			if(DATA[J]>DATA[J+1])
			{
				int TEMP = DATA[J];
				DATA[J] = DATA[J+1];
				DATA[J+1] = TEMP;
			}
//			cout<<DATA[J]<<" ";
		}
//		cout<<DATA[I]<<" "<<endl;
	}
	cout<<endl<<"After bubble sorting !"<<endl;
	for(int I=0;I<=N-1;I++)
	{
		cout<<DATA[I]<<" ";
	}
return 0;
}
