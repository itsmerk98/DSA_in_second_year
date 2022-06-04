#include<iostream>
using namespace std;

int main()
{
	int DATA[50]={10,20,30,40,50};
	int LB,UB,INT,ITEM;
	int BEG,END,MID,LOC;
	LB=0;
	UB=6;
	BEG=LB;
	END=5;
	while(BEG<END)
	{
		cout<<"VALUE : "<<DATA[BEG]<<endl;
		BEG=BEG+1;
	}
	INT=(BEG+END)/2;
	MID=INT;
	ITEM=30;

	while(BEG<=END)
	{
		DATA[MID]!=ITEM;
		if(ITEM<DATA[MID])
		{
			END=MID-1;
		}
		else
		{
			BEG=MID+1;
		}
		INT=(BEG+END)/2;
		MID=INT;
	}
	if(ITEM>DATA[MID])
	{
		LOC=MID;
		cout<<"LOC is :"<<LOC<<endl;
		cout<<"MIDELE is : "<<DATA[LOC];
	}
	else
	{
		cout<<"oophh.."<<endl;
	}
return 0;
}
