#include <bits/stdc++.h>
using namespace std;
class circle
{
	protected:
		float a;
		public:
			void set(int r)
			{
				a=r*r*3.14;
			}
			void show()
			{
				cout<<"Circle area: "<<a<<endl;
			}
};
class rectangle: public circle
{
	public:
		void set(int h, int w)
		{
			a=h*w;
		}
		void show()
		{
			cout<<"Rectangle area: "<<a<<endl;
		}
};
int main()
{
	circle *p;
	rectangle objR;
	p=&objR;
	objR.set(5,8);
	p->show();
	circle objC;
	p=&objC;
	p->set(9);
	p->show();
}
