#include<iostream>
#define ITEM 6
using namespace std;
int main()
{
	int ARRAY[ITEM] = {43,23,12,64,32,10};	
	for(int I=0;I<=ITEM-1;I++)
	{
		for(int J=0;J<=ITEM-1;J++)
		{
			if()
			{
				
			}
			else if(ARRAY[J]>=ARRAY[ITEM-1])
			{
                int TEMP = ARRAY[J];
				ARRAY[J]=ARRAY[ITEM-1];
				ARRAY[ITEM-1]=TEMP;
			}
		}
	}
	for(int K=0;K<=ITEM-1;K++)
	{
		cout<<ARRAY[K]<<" ";
	}
return 0;
}
