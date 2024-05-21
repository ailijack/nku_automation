#include<iostream>
using namespace std;
class Sample
{
	int x, y;
public:
	Sample() { x = y = 0; }
	Sample(int a, int b) { x = a;y = b; }
	~Sample()
	{
		if (x == y) cout << "x=y" << endl;
		else cout << "x!=y" << endl;
	}
	void disp() { cout << "x=" << x << ",y=" << y << endl; }
};
int main()
{
	Sample s1;
	Sample *ps2 = new Sample(2, 3);
	s1.disp();
	ps2->disp();
	delete ps2;
	return 0;
}
