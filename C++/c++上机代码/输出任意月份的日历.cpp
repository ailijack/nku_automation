//输出任意月份的日历
#include<iomanip.h>
void main()
{
	int year,month,ans=1,days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	bool runyear=false;
	cout<<"year:";
	cin>>year;
	cout<<"month:";
	cin>>month;
	if((year%4==0 && year%100!=0)|| year%400==0)
	{
		runyear=true;
		days[2]=29;
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
				if(runyear==true)
				{
					ans=(ans+29)%7;
				}
				else ans=(ans+28)%7;
			} break;
		}
	}
	switch(ans)
	{
	case 0: cout<<"这个月第一天是星期日~"<<endl; break;
	case 1: cout<<"这个月第一天是星期一~"<<endl; break;
	case 2: cout<<"这个月第一天是星期二~"<<endl; break;
	case 3: cout<<"这个月第一天是星期三~"<<endl; break;
	case 4: cout<<"这个月第一天是星期四~"<<endl; break;
	case 5: cout<<"这个月第一天是星期五~"<<endl; break;
	case 6: cout<<"这个月第一天是星期六~"<<endl; break;
	}
	cout<<setw(4)<<"  --------------------------"<<endl;
	cout<<setw(4)<<"  一  二  三  四  五  六  日"<<endl;
	cout<<setw(4)<<"  --------------------------"<<endl;
	for(i=1;i<=6;i++)
	{
		if(i==ans)
		{
			cout<<setw(4)<<1;			
			ans=(ans+1)%7;
			break;
		}
		else cout<<setw(4)<<" ";
	}
	if(ans==0) 
	{
		cout<<setw(4)<<1<<endl;
		ans=(ans+1)%7;
	}
	for(i=2;i<=days[month];i++)
	{
		cout<<setw(4)<<i;
		if(ans==0) cout<<endl;
		ans=(ans+1)%7;
	}
	cout<<endl;
}