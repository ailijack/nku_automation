#include<iostream>
using namespace std;
int main()
{
	bool person[12];
	int quit=0,k,a;
	for(int i=0;i<=11;i++)
		person[i]=true;
	cin>>k;
	i=0;
	while(quit<=10)
	{	
		a=0;	
		while(a<k)
		{
			if(person[i%12]==true)
			{
				i++;
				a++;
			}
			else
				i++;
		}
		if(i%12!=0)
		{
			person[i%12-1]=false;
			cout<<i%12<<"���˳��ˣ�"<<endl;
		}
		else
		{
			person[11]=false;
			cout<<"12���˳��ˣ�"<<endl;
		}
		quit++;
	}
	for(i=0;i<=11;i++)
	{
		if(person[i]==true)
			cout<<"���ʣ��"<<i+1<<"��";
	}
	return 0;
}
	
