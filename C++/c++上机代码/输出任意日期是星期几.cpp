//����������������ڼ�
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	int year,month,day,ans=1;
	bool runyear=false;
	cout<<"year:";
	cin>>year;
	cout<<"month:";
	cin>>month;
	cout<<"day:";
	cin>>day;
	if((year%4==0 && year%100!=0)|| year%400==0)
	{
		runyear=true;
	}
	for(int i=1;i<year;i++)
	{
		if((i%4==0 && i%100!=0)|| i%400==0)
		{
			ans=(ans+366)%7;
		}
		else ans=(ans+365)%7;
	}
	for(i=1;i<month;i++)
	{
		switch(i)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: ans=(ans+31)%7; break;
		case 4:
		case 6:
		case 9:
		case 11: ans=(ans+30)%7; break;
		case 2:
			{
				if(runyear==true) ans=(ans+29)%7;
				else ans=(ans+28)%7;
			} break;
		}
	}
	ans=(ans+day-1)%7;
	switch(ans)
	{
	case 0: cout<<"������������~"<<endl; break;
	case 1: cout<<"����������һ~"<<endl; break;
	case 2: cout<<"���������ڶ�~"<<endl; break;
	case 3: cout<<"������������~"<<endl; break;
	case 4: cout<<"������������~"<<endl; break;
	case 5: cout<<"������������~"<<endl; break;
	case 6: cout<<"������������~"<<endl; break;
	}
	return 0;
}