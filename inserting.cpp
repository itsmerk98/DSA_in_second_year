#include<iostream>
using namespace std;

int main()
{
	int array[10]={10,20,30,40};
	int UB=3;
	for(int i=0;i<=UB;i++)
	{
		cout<<"Array is pointing on position "<<i<<" value is :"<<array[i]<<endl;
	}
	int pos;
	cout<<"Enter the position : ";
	cin>>pos;
	for(int i=UB;i>=pos;i--)
	{
		array[i+1]=array[i];
	}
	UB=4;
	cout<<"Enter the value : ";
	cin>>array[pos];
	cout<<"After inserting new array : "<<endl;
	for(int i=0;i<=UB;i++)
	{
		cout<<"Now array is pointing : "<<array[i]<<endl;
	}
return 0;
}
