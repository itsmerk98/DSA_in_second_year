#include<iostream>
using namespace std;
class alfa{
	private:
		int a;
	public:
		void setA(int i)
		{
			a=i;
		}
		void display()
		{
			cout<<"A = "<<a;
		}
		friend void sum(alfa&);
};
void alfa::sum(alfa &o)
{
	o.a=o.a+a;
}
int main()
{
	alfa o1;
	o1.setA(10);
	o1.display();
	o1.sum(o1);
	return 0;
}
