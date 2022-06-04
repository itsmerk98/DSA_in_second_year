#include<iostream>
#define N 5
using namespace std;
int main()
{
/*	int A[N]={23,33,65,1,43};
	int B[N]={34,45,23,4,20};
	int C[N]={23,12,54,21,43};*/
//       										ERROR
	int R,S;
	int NA=1;
	int NB=1;
	int PTR=1;
	while(NA<=R & NB<=S)
	{
		if(A[NA]<B[NB])
		{
			C[PTR]=A[NA];
			PTR=PTR+1;
			NA=NA+1;
		}
		else
		{
			C[PTR]=B[NB];
		}
	}
	if(NA>R)
	{
		for(int K=0;K<=S-NB;K++)
		{
			C[PTR+K]=B[NB+K];
		}
	}
	else
	{
		for(int K=0;K<=R-NA;K++)
		{
			C[PTR+K]=A[NA+K];
		}
	}
	for(int I=0;I<=5;I++)
	{
		cout<<A[I]<<B[I]<<C[I];
	}
return 0;
}
