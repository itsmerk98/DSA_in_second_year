#include<iostream>
#include<conio.h>
using namespace std;

/*
int main()
{
	int a,b,c=0;
	cout<<"Enter two numder : ";
	cin>>a>>b;
	
	while(b!=0)
	{
		c = c + a;
		b--;
	}
	cout<<"multiplication is : "<<c;
	
return 0;
}
*/
class alfa{
		int festnum, secondnum;
	public:
		void set()
		{
			cout<<"Enter number :";
			cin>>festnum>>secondnum;
		}
		int mul(int festnum, int secondnum)
		{
			if(secondnum<=festnum)
			{
				return 0;
			}
			else
			{
				return festnum + mul(festnum, secondnum-1);
			}
		}
};
int main()
{
	alfa a;
//	a.set();
	int num;
	num = a.mul(70, 200);
	cout<<"Multiplication is : "<<num;
return 0;
}
