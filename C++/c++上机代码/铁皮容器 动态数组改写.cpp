#include<iostream>
#include<cmath>
using namespace std;
double abs(double);
int main()
{
	const double pai=3.1416;
	const int s=1000;
	int v;
	double r,ans1=0,ans2;
	cin>>v;
	for(r=0.1;r<sqrt(500/pai);r+=0.1)
	{
		ans2=ans1;
		ans1=v-(r*s-2*pai*pow(r,3))/2;
		if(ans1*ans2<0)
		{
			if(abs(ans1)<abs(ans2))
				cout<<r<<endl;
			else cout<<r-0.1<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;e 
	return 0;
}
double abs(double x)
{
	if(x>=0) return x;
	return -x;
}


	
